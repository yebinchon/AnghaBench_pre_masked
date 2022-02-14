
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun_entry {int * fstype; int * mountpt_list; int * opt_list; } ;
typedef int line_buff ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (struct sun_entry*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char const*,struct sun_entry*) ;
 struct sun_entry* FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char const*,struct sun_entry*) ;
 int FUNC_9 (char*,int,char const*,struct sun_entry*) ;
 int FUNC_10 (char*,int,char const*,int *) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*,char const*,int) ;

char *
FUNC_13(const char *VAR_7, const char *VAR_8)
{
  char *VAR_9 = ((void*)0);
  char VAR_10[VAR_0];
  int VAR_11;
  struct sun_entry *VAR_12 = ((void*)0);


  if (VAR_7 == ((void*)0)) {
    FUNC_4(VAR_5,"Sun key value was null");
    goto err;
  }

  if (VAR_8 == ((void*)0)) {
    FUNC_4(VAR_5,"Sun entry value was null");
    goto err;
  }


  FUNC_12(VAR_10, VAR_8, sizeof(VAR_10));
  VAR_11 = FUNC_5(VAR_10) - 1;
  while (VAR_11 >= 0 && (FUNC_2((unsigned char)VAR_10[VAR_11]) || VAR_10[VAR_11] == '\n')) {
    VAR_10[VAR_11--] = '\0';
  }


  VAR_12 = FUNC_7(VAR_10);
  if (VAR_12 == ((void*)0)) {
    FUNC_4(VAR_5,"could not parse Sun style map");
    goto err;
  }

  FUNC_3(VAR_10, 0, sizeof(VAR_10));

  if (VAR_12->opt_list != ((void*)0)) {

    FUNC_10(VAR_10, sizeof(VAR_10), VAR_7, VAR_12->opt_list);
  }


  if (VAR_12->mountpt_list != ((void*)0)) {

    FUNC_8(VAR_10, sizeof(VAR_10), VAR_7, VAR_12);
    VAR_9 = FUNC_11(VAR_10);
  }
  else {

    if (VAR_12->fstype != ((void*)0)) {
      if (FUNC_0(VAR_12->fstype, VAR_4, FUNC_5(VAR_4))) {

 FUNC_9(VAR_10, sizeof(VAR_10), VAR_7, VAR_12);
 VAR_9 = FUNC_11(VAR_10);
      }
      else if (FUNC_0(VAR_12->fstype, VAR_3, FUNC_5(VAR_3))) {

 FUNC_6(VAR_10, sizeof(VAR_10), VAR_7, VAR_12);
 VAR_9 = FUNC_11(VAR_10);
      }



      else if (FUNC_0(VAR_12->fstype, VAR_1, FUNC_5(VAR_1))) {

 FUNC_4(VAR_5, "Sun fstype %s is currently not supported by Amd.",
      VAR_12->fstype);
 goto err;

      }
      else if (FUNC_0(VAR_12->fstype, VAR_2, FUNC_5(VAR_2))) {

 FUNC_4(VAR_5, "Sun fstype %s is currently not supported by Amd.",
      VAR_12->fstype);
 goto err;
      }
      else {
 FUNC_4(VAR_5, "Sun fstype %s is currently not supported by Amd.",
      VAR_12->fstype);
 goto err;
      }
    }
    else {
      FUNC_4(VAR_6, "No SUN fstype specified defaulting to NFS.");
      FUNC_9(VAR_10, sizeof(VAR_10), VAR_7, VAR_12);
      VAR_9 = FUNC_11(VAR_10);
    }
  }

 err:
  FUNC_1(VAR_12);
  return VAR_9;
}

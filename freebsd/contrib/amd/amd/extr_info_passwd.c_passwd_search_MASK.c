
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int time_t ;
struct passwd {char* pw_dir; } ;
typedef int rhost ;
typedef int mnt_map ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 struct passwd* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,int,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;

int
FUNC_9(mnt_map *VAR_3, char *VAR_4, char *VAR_5, char **VAR_6, time_t *VAR_7)
{
  char *VAR_8 = ((void*)0);
  struct passwd *VAR_9;

  if (FUNC_0(VAR_5, "/defaults")) {
    *VAR_6 = FUNC_7("type:=nfs");
    return 0;
  }
  VAR_9 = FUNC_3(VAR_5);

  if (VAR_9) {
    char *VAR_10;
    char *VAR_11, *VAR_12;
    char VAR_13[VAR_2];
    char VAR_14[VAR_1];
    VAR_8 = FUNC_7(VAR_9->pw_dir);




    VAR_10 = FUNC_5(VAR_8, '/');
    if (!VAR_10)
      goto enoent;
    *VAR_10++ = '\0';




    VAR_11 = FUNC_4(VAR_8 + 1, '/');
    if (!VAR_11)
      goto enoent;
    *VAR_11++ = '\0';






    VAR_14[0] = '\0';
    do {
      VAR_12 = FUNC_5(VAR_11, '/');
      if (VAR_12) {
 FUNC_8(VAR_14, VAR_12 + 1, sizeof(VAR_14));
 FUNC_8(VAR_14, ".", sizeof(VAR_14));
 *VAR_12 = '\0';
      } else {
 FUNC_8(VAR_14, VAR_11, sizeof(VAR_14));
      }
    } while (VAR_12);




    if (*VAR_14 == '\0' || *VAR_10 == '\0' || *VAR_8 == '\0')
      goto enoent;




    VAR_12 = FUNC_4(VAR_14, '.');
    if (VAR_12)
      *VAR_12 = '\0';
    VAR_11 = FUNC_4(VAR_4, ':');
    if (VAR_11)
      VAR_11++;
    else
      VAR_11 = "type:=nfs;rfs:=/${var0}/${var1};rhost:=${var1};sublink:=${var2};fs:=${autodir}${var3}";
    FUNC_6(VAR_13, sizeof(VAR_13), "var0:=%s;var1:=%s;var2:=%s;var3:=%s;%s",
       VAR_8+1, VAR_14, VAR_10, VAR_9->pw_dir, VAR_11);
    FUNC_2("passwd_search: map=%s key=%s -> %s", VAR_4, VAR_5, VAR_13);
    if (VAR_12)
      *VAR_12 = '.';
    *VAR_6 = FUNC_7(VAR_13);
    return 0;
  }

enoent:
  FUNC_1(VAR_8);

  return VAR_0;
}

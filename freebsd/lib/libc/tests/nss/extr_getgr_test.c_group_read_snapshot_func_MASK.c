
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct group {int gr_mem; TYPE_1__* gr_passwd; TYPE_1__* gr_name; int gr_gid; } ;
typedef int gid_t ;
struct TYPE_5__ {int sl_str; } ;
typedef TYPE_1__ StringList ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct group*,int ,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 void* FUNC_7 (char*) ;
 char* FUNC_8 (char**,char const*) ;
 int FUNC_9 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_10(struct group *VAR_0, char *VAR_1)
{
 StringList *VAR_2;
 char *VAR_3, *VAR_4, *VAR_5;
 const char *VAR_6;
 int VAR_7;

 FUNC_3("1 line read from snapshot:\n%s\n", VAR_1);

 VAR_7 = 0;
 VAR_2 = ((void*)0);
 VAR_4 = VAR_1;
 VAR_6 = ":";
 FUNC_2(VAR_0, 0, sizeof(struct group));
 while ((VAR_3 = FUNC_8(&VAR_4, VAR_6)) != ((void*)0)) {
  switch (VAR_7) {
  case 0:
   VAR_0->gr_name = FUNC_7(VAR_3);
   FUNC_0(VAR_0->gr_name != ((void*)0));
   break;

  case 1:
   VAR_0->gr_passwd = FUNC_7(VAR_3);
   FUNC_0(VAR_0->gr_passwd != ((void*)0));
   break;

  case 2:
   VAR_0->gr_gid = (gid_t)FUNC_9(VAR_3, &VAR_5, 10);
   if (*VAR_5 != '\0') {
    FUNC_1(VAR_0->gr_name);
    FUNC_1(VAR_0->gr_passwd);
    VAR_0->gr_name = ((void*)0);
    VAR_0->gr_passwd = ((void*)0);
    return (-1);
   }

   VAR_6 = ",";
   break;

  default:
   if (VAR_2 == ((void*)0)) {
    if (FUNC_6(VAR_3, "(null)") == 0)
     return (0);

    VAR_2 = FUNC_5();
    FUNC_0(VAR_2 != ((void*)0));

    if (FUNC_6(VAR_3, "nomem") != 0) {
     VAR_5 = FUNC_7(VAR_3);
     FUNC_0(VAR_5 != ((void*)0));
     FUNC_4(VAR_2, VAR_5);
    }
   } else {
    VAR_5 = FUNC_7(VAR_3);
    FUNC_0(VAR_5 != ((void*)0));
    FUNC_4(VAR_2, VAR_5);
   }
   break;
  }
  ++VAR_7;
 }

 if (VAR_7 < 3) {
  FUNC_1(VAR_0->gr_name);
  FUNC_1(VAR_0->gr_passwd);
  FUNC_2(VAR_0, 0, sizeof(struct group));
  return (-1);
 }

 FUNC_4(VAR_2, ((void*)0));
 VAR_0->gr_mem = VAR_2->sl_str;


 FUNC_1(VAR_2);
 return (0);
}

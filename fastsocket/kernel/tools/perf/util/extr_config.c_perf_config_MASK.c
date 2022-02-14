
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_uid; int st_size; } ;
typedef int config_fn_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,char*,void*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 char* FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,char const*) ;

int FUNC_12(config_fn_t VAR_2, void *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 const char *VAR_6 = ((void*)0);


 if (VAR_1)
  return FUNC_5(VAR_2, VAR_1, VAR_3);
 if (FUNC_7() && !FUNC_0(FUNC_8(), VAR_0)) {
  VAR_4 += FUNC_5(VAR_2, FUNC_8(),
         VAR_3);
  VAR_5 += 1;
 }

 VAR_6 = FUNC_2("HOME");
 if (FUNC_6() && VAR_6) {
  char *VAR_7 = FUNC_10(FUNC_4("%s/.perfconfig", VAR_6));
  struct stat VAR_8;

  if (VAR_7 == ((void*)0)) {
   FUNC_11("Not enough memory to process %s/.perfconfig, "
    "ignoring it.", VAR_6);
   goto out;
  }

  if (FUNC_9(VAR_7, &VAR_8) < 0)
   goto out_free;

  if (VAR_8.st_uid && (VAR_8.st_uid != FUNC_3())) {
   FUNC_11("File %s not owned by current user or root, "
    "ignoring it.", VAR_7);
   goto out_free;
  }

  if (!VAR_8.st_size)
   goto out_free;

  VAR_4 += FUNC_5(VAR_2, VAR_7, VAR_3);
  VAR_5 += 1;
out_free:
  FUNC_1(VAR_7);
 }
out:
 if (VAR_5 == 0)
  return -1;
 return VAR_4;
}

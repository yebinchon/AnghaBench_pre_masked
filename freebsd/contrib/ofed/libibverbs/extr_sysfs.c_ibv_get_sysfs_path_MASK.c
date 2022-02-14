
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int ) ;
 char const* VAR_1 ;

const char *FUNC_5(void)
{
 const char *VAR_2 = ((void*)0);

 if (VAR_1)
  return VAR_1;





 if (FUNC_2() == FUNC_1())
  VAR_2 = FUNC_0("SYSFS_PATH");

 if (VAR_2) {
  int VAR_3;
  char *VAR_4;

  VAR_1 = VAR_4 = FUNC_4(VAR_2, VAR_0);
  VAR_3 = FUNC_3(VAR_4);
  while (VAR_3 > 0 && VAR_4[VAR_3 - 1] == '/') {
   --VAR_3;
   VAR_4[VAR_3] = '\0';
  }
 } else
  VAR_1 = "/sys";

 return VAR_1;
}

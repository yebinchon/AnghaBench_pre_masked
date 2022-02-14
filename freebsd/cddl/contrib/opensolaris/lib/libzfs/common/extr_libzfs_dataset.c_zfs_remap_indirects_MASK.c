
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libzfs_handle_t ;
typedef int errbuf ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,char*) ;

int
FUNC_6(libzfs_handle_t *VAR_3, const char *VAR_4)
{
 int VAR_5;
 char VAR_6[1024];

 (void) FUNC_2(VAR_6, sizeof (VAR_6), FUNC_0(VAR_2,
     "cannot remap dataset '%s'"), VAR_4);

 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 != 0) {
  switch (VAR_5) {
  case 128:
   FUNC_4(VAR_3, FUNC_0(VAR_2,
       "pool must be upgraded"));
   (void) FUNC_3(VAR_3, VAR_1, VAR_6);
   break;
  case 129:
   (void) FUNC_3(VAR_3, VAR_0, VAR_6);
   break;
  default:
   (void) FUNC_5(VAR_3, VAR_5, VAR_6);
   break;
  }
 }

 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HINSTANCE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 (void*,char*,int ) ;


 int * VAR_1 ;

BOOL
FUNC_1 (HINSTANCE VAR_2 __attribute__ ((__unused__)),
  DWORD VAR_3, void *VAR_4)
{
  switch (VAR_3)
    {
    case 128:
      VAR_1 = FUNC_0 (VAR_4,
           "libgcc memory", VAR_0);
      return VAR_1 != ((void*)0);
    case 129:


      break;
    }
  return 1;
}

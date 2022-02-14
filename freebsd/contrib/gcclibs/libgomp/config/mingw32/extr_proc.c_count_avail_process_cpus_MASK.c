
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD_PTR ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static int
FUNC_2 ()
{
  DWORD_PTR VAR_0;
  DWORD_PTR VAR_1;

  if (FUNC_1 (FUNC_0 (),
         &VAR_0, &VAR_1))
    {
      unsigned int VAR_2;
      for (VAR_2 = 0; VAR_0 != 0; VAR_0 >>= 1)
 if (VAR_0 & 1)
   VAR_2++;
      return VAR_2;
    }
  return 1;
}

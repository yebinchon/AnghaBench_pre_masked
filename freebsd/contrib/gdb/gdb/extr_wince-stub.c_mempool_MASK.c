
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outs ;
typedef int * LPWSTR ;
typedef int * LPVOID ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static LPVOID
FUNC_2 (unsigned int VAR_0)
{
  static int VAR_1 = -1;
  static LPWSTR VAR_2[4] = {((void*)0), ((void*)0), ((void*)0), ((void*)0)};

  if (++VAR_1 >= (sizeof (VAR_2) / sizeof (VAR_2[0])))
    VAR_1 = 0;



  if (VAR_2[VAR_1])
    FUNC_0 (VAR_2[VAR_1]);
  VAR_2[VAR_1] = (LPWSTR) FUNC_1 (VAR_0);

  return VAR_2[VAR_1];
}

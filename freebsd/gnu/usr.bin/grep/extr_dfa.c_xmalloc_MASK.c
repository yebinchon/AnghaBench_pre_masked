
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static ptr_t
FUNC_4 (size_t VAR_0)
{
  ptr_t VAR_1 = FUNC_3(VAR_0);

  FUNC_1(VAR_0 != 0);
  if (!VAR_1)
    FUNC_2(FUNC_0("Memory exhausted"));
  return VAR_1;
}

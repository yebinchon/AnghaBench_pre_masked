
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ptr_t
FUNC_3 (size_t VAR_0, size_t VAR_1)
{
  ptr_t VAR_2 = FUNC_1(VAR_0, VAR_1);

  if (!VAR_2)
    FUNC_2(FUNC_0("Memory exhausted"));
  return VAR_2;
}

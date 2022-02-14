
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voidp ;
typedef int am_node ;


 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_2)
{



  if (VAR_2 < 0 || VAR_2 == VAR_1)
    return 0;

  VAR_0 = (am_node **) FUNC_1((voidp) VAR_0, VAR_2 * sizeof(am_node *));

  if (VAR_2 > VAR_1)
    FUNC_0((char *) (VAR_0 + VAR_1), 0,
   (VAR_2 - VAR_1) * sizeof(am_node *));
  VAR_1 = VAR_2;

  return 1;
}

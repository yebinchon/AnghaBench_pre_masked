
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int DIE_REF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct type** VAR_4 ;

__attribute__((used)) static struct type *
FUNC_1 (DIE_REF VAR_5)
{
  struct type *VAR_6 = ((void*)0);
  int VAR_7;

  VAR_7 = (VAR_5 - VAR_2) / 4;
  if ((VAR_7 < 0) || (VAR_7 >= VAR_3))
    {
      FUNC_0 (VAR_0, VAR_1, VAR_5);
    }
  else
    {
      VAR_6 = *(VAR_4 + VAR_7);
    }
  return (VAR_6);
}

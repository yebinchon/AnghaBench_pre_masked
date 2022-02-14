
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attribute {scalar_t__ form; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0 (struct attribute *VAR_4)
{
  return (VAR_4 == ((void*)0) ? 0 :
      VAR_4->form == VAR_1
      || VAR_4->form == VAR_2
      || VAR_4->form == VAR_3
      || VAR_4->form == VAR_0);
}

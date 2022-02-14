
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {scalar_t__ kind; scalar_t__ reg; scalar_t__ k; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct prologue_value**,struct prologue_value**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (struct prologue_value *VAR_3,
             struct prologue_value *VAR_4,
             struct prologue_value *VAR_5)
{
  FUNC_0 (&VAR_4, &VAR_5);



  if (VAR_5->kind == VAR_0
      && (VAR_4->kind == VAR_1
          || VAR_4->kind == VAR_0))
    {
      VAR_3->kind = VAR_4->kind;
      VAR_3->reg = VAR_4->reg;
      VAR_3->k = VAR_4->k - VAR_5->k;
    }


  else if (VAR_4->kind == VAR_1
           && VAR_5->kind == VAR_1
           && VAR_4->reg == VAR_5->reg)
    {
      VAR_3->kind = VAR_0;
      VAR_3->k = VAR_4->k - VAR_5->k;
    }


  else
    VAR_3->kind = VAR_2;
}

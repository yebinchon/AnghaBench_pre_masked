
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ errors; int deps; scalar_t__ buffer; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_9__ {int phony_targets; int style; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_6 (cpp_reader *VAR_5, FILE *VAR_6)
{

  if (FUNC_0 (VAR_5, VAR_4))
    FUNC_3 (VAR_5, VAR_1, ((void*)0));






  while (VAR_5->buffer)
    FUNC_1 (VAR_5);


  if (FUNC_0 (VAR_5, VAR_2.style) != VAR_0
      && VAR_6 && VAR_5->errors == 0)
    {
      FUNC_5 (VAR_5->deps, VAR_6, 72);

      if (FUNC_0 (VAR_5, VAR_2.phony_targets))
 FUNC_4 (VAR_5->deps, VAR_6);
    }


  if (FUNC_0 (VAR_5, VAR_3))
    FUNC_2 (VAR_5);

  return VAR_5->errors;
}

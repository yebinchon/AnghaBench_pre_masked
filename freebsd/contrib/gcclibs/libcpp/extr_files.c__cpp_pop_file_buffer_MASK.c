
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mi_valid; int * mi_cmacro; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_6__ {int buffer_valid; int * buffer; int * cmacro; } ;
typedef TYPE_2__ _cpp_file ;


 int FUNC_0 (void*) ;

void
FUNC_1 (cpp_reader *VAR_0, _cpp_file *VAR_1)
{


  if (VAR_0->mi_valid && VAR_1->cmacro == ((void*)0))
    VAR_1->cmacro = VAR_0->mi_cmacro;


  VAR_0->mi_valid = 0;

  if (VAR_1->buffer)
    {
      FUNC_0 ((void *) VAR_1->buffer);
      VAR_1->buffer = ((void*)0);
      VAR_1->buffer_valid = 0;
    }
}

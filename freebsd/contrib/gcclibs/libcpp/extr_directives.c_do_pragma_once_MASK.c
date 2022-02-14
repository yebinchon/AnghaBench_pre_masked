
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_7__ {int file; int * prev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_1)
{
  if (VAR_1->buffer->prev == ((void*)0))
    FUNC_2 (VAR_1, VAR_0, "#pragma once in main file");

  FUNC_1 (VAR_1);
  FUNC_0 (VAR_1, VAR_1->buffer->file);
}

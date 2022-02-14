
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* next; } ;
struct TYPE_8__ {TYPE_1__ header; } ;
typedef TYPE_2__ lang_statement_union_type ;
struct TYPE_9__ {int * map_file; } ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int * VAR_2 ;

void
FUNC_2 (lang_statement_union_type *VAR_3, int VAR_4)
{
  FILE *VAR_5 = VAR_1.map_file;

  VAR_1.map_file = VAR_2;

  if (VAR_4 < 0)
    FUNC_1 (VAR_3, VAR_0);
  else
    {
      while (VAR_3 && --VAR_4 >= 0)
 {
   FUNC_0 (VAR_3, VAR_0);
   VAR_3 = VAR_3->header.next;
 }
    }

  VAR_1.map_file = VAR_5;
}

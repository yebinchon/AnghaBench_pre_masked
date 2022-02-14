
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcpos {int first_column; int last_column; scalar_t__ last_line; scalar_t__ first_line; TYPE_1__* file; } ;
struct TYPE_2__ {int colno; scalar_t__ lineno; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_1(struct srcpos *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_2->file = VAR_1;

 VAR_2->first_line = VAR_1->lineno;
 VAR_2->first_column = VAR_1->colno;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_3[VAR_5] == '\n') {
   VAR_1->lineno++;
   VAR_1->colno = 1;
  } else if (VAR_3[VAR_5] == '\t') {
   VAR_1->colno =
    FUNC_0(VAR_1->colno, VAR_0);
  } else {
   VAR_1->colno++;
  }

 VAR_2->last_line = VAR_1->lineno;
 VAR_2->last_column = VAR_1->colno;
}

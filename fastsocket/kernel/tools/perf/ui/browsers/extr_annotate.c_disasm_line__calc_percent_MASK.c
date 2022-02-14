
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int end; int start; } ;
struct sym_hist {double sum; scalar_t__* addr; } ;
struct source_line {scalar_t__ percent; } ;
struct disasm_line {int offset; } ;
struct annotation {TYPE_1__* src; } ;
typedef size_t s64 ;
struct TYPE_2__ {int source; struct source_line* lines; } ;


 struct sym_hist* FUNC_0 (struct annotation*,int) ;
 struct disasm_line* FUNC_1 (int *,struct disasm_line*) ;
 struct annotation* FUNC_2 (struct symbol*) ;

__attribute__((used)) static double FUNC_3(struct disasm_line *VAR_0, struct symbol *VAR_1, int VAR_2)
{
 double VAR_3 = 0.0;

 if (VAR_0->offset != -1) {
  int VAR_4 = VAR_1->end - VAR_1->start;
  unsigned int VAR_5 = 0;
  struct annotation *VAR_6 = FUNC_2(VAR_1);
  struct source_line *VAR_7 = VAR_6->src->lines;
  struct sym_hist *VAR_8 = FUNC_0(VAR_6, VAR_2);
  s64 VAR_9 = VAR_0->offset;
  struct disasm_line *VAR_10;

  VAR_10 = FUNC_1(&VAR_6->src->source, VAR_0);
  while (VAR_9 < (s64)VAR_4 &&
         (VAR_10 == ((void*)0) || VAR_9 < VAR_10->offset)) {
   if (VAR_7) {
    VAR_3 += VAR_7[VAR_9].percent;
   } else
    VAR_5 += VAR_8->addr[VAR_9];

   ++VAR_9;
  }




  if (VAR_7 == ((void*)0) && VAR_8->sum)
   VAR_3 = 100.0 * VAR_5 / VAR_8->sum;
 }

 return VAR_3;
}

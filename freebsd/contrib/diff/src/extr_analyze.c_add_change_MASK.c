
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change {struct change* link; void* deleted; void* inserted; void* line1; void* line0; } ;
typedef void* lin ;


 struct change* FUNC_0 (int) ;

__attribute__((used)) static struct change *
FUNC_1 (lin VAR_0, lin VAR_1, lin VAR_2, lin VAR_3,
     struct change *VAR_4)
{
  struct change *VAR_5 = FUNC_0 (sizeof *VAR_5);

  VAR_5->line0 = VAR_0;
  VAR_5->line1 = VAR_1;
  VAR_5->inserted = VAR_3;
  VAR_5->deleted = VAR_2;
  VAR_5->link = VAR_4;
  return VAR_5;
}

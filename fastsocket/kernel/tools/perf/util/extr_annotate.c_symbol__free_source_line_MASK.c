
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct source_line {struct source_line* path; } ;
struct annotation {TYPE_1__* src; } ;
struct TYPE_2__ {struct source_line* lines; } ;


 int FUNC_0 (struct source_line*) ;
 struct annotation* FUNC_1 (struct symbol*) ;

__attribute__((used)) static void FUNC_2(struct symbol *VAR_0, int VAR_1)
{
 struct annotation *VAR_2 = FUNC_1(VAR_0);
 struct source_line *VAR_3 = VAR_2->src->lines;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_3[VAR_4].path);

 FUNC_0(VAR_3);
 VAR_2->src->lines = ((void*)0);
}

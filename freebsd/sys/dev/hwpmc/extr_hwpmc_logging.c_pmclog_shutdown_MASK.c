
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmclog_buffer {int plb_base; } ;
struct TYPE_2__ {int pdbh_plbs; int pdbh_head; } ;


 int VAR_0 ;
 struct pmclog_buffer* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pmclog_buffer*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4()
{
 struct pmclog_buffer *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  while ((VAR_5 = FUNC_0(&VAR_2[VAR_6]->pdbh_head)) != ((void*)0)) {
   FUNC_1(&VAR_2[VAR_6]->pdbh_head, VAR_5, VAR_1);
   FUNC_2(VAR_5->plb_base, VAR_0);
  }
  FUNC_2(VAR_2[VAR_6]->pdbh_plbs, VAR_0);
 }
}

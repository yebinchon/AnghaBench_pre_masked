
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_client {int max_tag; TYPE_1__** reqs; scalar_t__ tagpool; } ;
struct TYPE_2__ {scalar_t__ status; struct TYPE_2__* rc; struct TYPE_2__* tc; struct TYPE_2__* wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct p9_client *VAR_3)
{
 int VAR_4, VAR_5;


 for (VAR_4 = 0; VAR_4 < (VAR_3->max_tag/VAR_1); VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   if (VAR_3->reqs[VAR_4][VAR_5].status != VAR_2) {
    FUNC_0(VAR_0,
      "Attempting to cleanup non-free tag %d,%d\n",
      VAR_4, VAR_5);

    return;
   }
  }
 }

 if (VAR_3->tagpool)
  FUNC_2(VAR_3->tagpool);


 for (VAR_4 = 0; VAR_4 < (VAR_3->max_tag/VAR_1); VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   FUNC_1(VAR_3->reqs[VAR_4][VAR_5].wq);
   FUNC_1(VAR_3->reqs[VAR_4][VAR_5].tc);
   FUNC_1(VAR_3->reqs[VAR_4][VAR_5].rc);
  }
  FUNC_1(VAR_3->reqs[VAR_4]);
 }
 VAR_3->max_tag = 0;
}

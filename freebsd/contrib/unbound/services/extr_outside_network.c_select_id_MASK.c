
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pending* key; } ;
struct pending {unsigned int id; TYPE_1__ node; } ;
struct outside_network {int rnd; int pending; } ;
typedef int sldns_buffer ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct outside_network* VAR_2, struct pending* VAR_3,
 sldns_buffer* VAR_4)
{
 int VAR_5 = 0;
 VAR_3->id = ((unsigned)FUNC_4(VAR_2->rnd)>>8) & 0xffff;
 FUNC_0(FUNC_3(VAR_4), VAR_3->id);


 VAR_3->node.key = VAR_3;
 while(!FUNC_2(VAR_2->pending, &VAR_3->node)) {

  VAR_3->id = ((unsigned)FUNC_4(VAR_2->rnd)>>8) & 0xffff;
  FUNC_0(FUNC_3(VAR_4), VAR_3->id);
  VAR_5++;
  if(VAR_5 == VAR_0) {
   VAR_3->id=99999;
   FUNC_1("failed to generate unique ID, drop msg");
   return 0;
  }
 }
 FUNC_5(VAR_1, "inserted new pending reply id=%4.4x", VAR_3->id);
 return 1;
}

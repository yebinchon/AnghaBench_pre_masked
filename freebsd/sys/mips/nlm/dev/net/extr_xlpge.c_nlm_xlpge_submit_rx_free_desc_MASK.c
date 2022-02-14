
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int rxfreeq; int xlpge_dev; } ;
struct nlm_fmn_msg {scalar_t__* msg; } ;
typedef int msg ;


 int FUNC_0 (int ,char*) ;
 void* FUNC_1 () ;
 int FUNC_2 (struct nlm_fmn_msg*,int ,int) ;
 int FUNC_3 (int ,int,int ,struct nlm_fmn_msg*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (void*) ;

void
FUNC_6(struct nlm_xlpge_softc *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 struct nlm_fmn_msg VAR_6;
 void *VAR_7;

 for(VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_2(&VAR_6, 0, sizeof(VAR_6));
  VAR_7 = FUNC_1();
  if (!VAR_7) {
   FUNC_0(VAR_0->xlpge_dev, "Cannot allocate mbuf\n");
   break;
  }

  VAR_6.msg[0] = FUNC_5(VAR_7);
  if (VAR_6.msg[0] == 0) {
   FUNC_4("Bad ptr for %p\n", VAR_7);
   break;
  }
  VAR_3 = 1;

  VAR_5 = 0;
  while (1) {

   VAR_4 = FUNC_3(VAR_0->rxfreeq, VAR_3, 0, &VAR_6);
   if (VAR_4 == 0)
    break;
   if (VAR_5++ > 10000) {
    FUNC_4("Too many credit fails for send free desc\n");
    break;
   }
  }
 }
}

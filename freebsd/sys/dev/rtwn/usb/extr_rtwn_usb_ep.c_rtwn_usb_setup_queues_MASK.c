
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int page_count; int npubqpages; int nhqpages; int nnqpages; int nlqpages; } ;
struct rtwn_usb_softc {int ntx; struct rtwn_softc uc_sc; } ;



__attribute__((used)) static void
FUNC_0(struct rtwn_usb_softc *VAR_0)
{
 struct rtwn_softc *VAR_1 = &VAR_0->uc_sc;
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_2 = VAR_3 = 0;
 switch (VAR_0->ntx) {
 case 4:
 case 3:
  VAR_3 = 1;

 case 2:
  VAR_2 = 1;

 default:
  break;
 }
 VAR_4 = 1 + VAR_2 + VAR_3;


 VAR_5 = (VAR_1->page_count - VAR_1->npubqpages) / VAR_4;





 VAR_6 = (VAR_1->page_count - VAR_1->npubqpages) % VAR_4;

 VAR_1->nhqpages = VAR_5 + VAR_6;
 VAR_1->nnqpages = (VAR_2 ? VAR_5 : 0);
 VAR_1->nlqpages = (VAR_3 ? VAR_5 : 0);
}

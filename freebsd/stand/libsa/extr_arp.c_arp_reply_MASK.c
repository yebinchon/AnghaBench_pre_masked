
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iodesc {int myip; int * myea; } ;
struct ether_arp {scalar_t__ arp_hrd; scalar_t__ arp_pro; int arp_hln; int arp_pln; scalar_t__ arp_op; int * arp_tha; int * arp_spa; int * arp_sha; int * arp_tpa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_5 ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct iodesc*,void*,int,int *,int ) ;

void
FUNC_6(struct iodesc *VAR_6, void *VAR_7)
{
 struct ether_arp *VAR_8 = VAR_7;

 if (VAR_8->arp_hrd != FUNC_3(VAR_0) ||
     VAR_8->arp_pro != FUNC_3(VAR_4) ||
     VAR_8->arp_hln != sizeof(VAR_8->arp_sha) ||
     VAR_8->arp_pln != sizeof(VAR_8->arp_spa) )
 {




  return;
 }

 if (VAR_8->arp_op != FUNC_3(VAR_2)) {




  return;
 }


 if (FUNC_0(VAR_8->arp_tpa, &VAR_6->myip, sizeof(VAR_8->arp_tpa)))
  return;







 VAR_8->arp_op = FUNC_3(VAR_1);

 FUNC_1(VAR_8->arp_sha, VAR_8->arp_tha, sizeof(VAR_8->arp_tha));
 FUNC_1(VAR_8->arp_spa, VAR_8->arp_tpa, sizeof(VAR_8->arp_tpa));

 FUNC_1(VAR_6->myea, VAR_8->arp_sha, sizeof(VAR_8->arp_sha));
 FUNC_1(&VAR_6->myip, VAR_8->arp_spa, sizeof(VAR_8->arp_spa));





 (void) FUNC_5(VAR_6, VAR_7, sizeof(*VAR_8) + 18,
                  VAR_8->arp_tha, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hlen; struct ether_header* haddr; } ;
struct interface_info {TYPE_1__ hw_address; } ;
struct ether_header {unsigned char* ether_dhost; unsigned char* ether_shost; int ether_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,struct ether_header*,int) ;
 int FUNC_2 (unsigned char*,int,int) ;

void
FUNC_3(struct interface_info *VAR_2, unsigned char *VAR_3,
    int *VAR_4)
{
 struct ether_header VAR_5;

 FUNC_2(VAR_5.ether_dhost, 0xff, sizeof(VAR_5.ether_dhost));
 if (VAR_2->hw_address.hlen == sizeof(VAR_5.ether_shost))
  FUNC_1(VAR_5.ether_shost, VAR_2->hw_address.haddr,
      sizeof(VAR_5.ether_shost));
 else
  FUNC_2(VAR_5.ether_shost, 0x00, sizeof(VAR_5.ether_shost));

 VAR_5.ether_type = FUNC_0(VAR_0);

 FUNC_1(&VAR_3[*VAR_4], &VAR_5, VAR_1);
 *VAR_4 += VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct udphdr {scalar_t__ uh_ulen; int uh_sum; void* uh_sport; void* uh_dport; } ;
struct gre_softc {int gre_options; int gre_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct gre_softc *VAR_4, struct udphdr *VAR_5, uint16_t VAR_6)
{

 FUNC_2(&VAR_3, VAR_2);
 FUNC_0(VAR_4->gre_options & VAR_0);

 VAR_5->uh_dport = FUNC_1(VAR_1);
 VAR_5->uh_sport = FUNC_1(VAR_4->gre_port);
 VAR_5->uh_sum = VAR_6;
 VAR_5->uh_ulen = 0;
}

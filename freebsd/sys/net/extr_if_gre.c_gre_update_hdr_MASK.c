
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct grehdr {int gre_flags; int * gre_opts; } ;
struct gre_softc {int gre_options; int gre_hlen; scalar_t__ gre_key; scalar_t__ gre_oseq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct gre_softc *VAR_7, struct grehdr *VAR_8)
{
 uint32_t *VAR_9;
 uint16_t VAR_10;

 FUNC_2(&VAR_6, VAR_5);

 VAR_10 = 0;
 VAR_9 = VAR_8->gre_opts;
 if (VAR_7->gre_options & VAR_0) {
  VAR_10 |= VAR_2;
  VAR_7->gre_hlen += 2 * sizeof(uint16_t);
  *VAR_9++ = 0;
 }
 if (VAR_7->gre_key != 0) {
  VAR_10 |= VAR_3;
  VAR_7->gre_hlen += sizeof(uint32_t);
  *VAR_9++ = FUNC_0(VAR_7->gre_key);
 }
 if (VAR_7->gre_options & VAR_1) {
  VAR_10 |= VAR_4;
  VAR_7->gre_hlen += sizeof(uint32_t);
  *VAR_9++ = 0;
 } else
  VAR_7->gre_oseq = 0;
 VAR_8->gre_flags = FUNC_1(VAR_10);
}

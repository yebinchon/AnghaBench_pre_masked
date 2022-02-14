
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_tx_ring {int tx_desc_map; int tx_desc_tag; void* desc32; void* desc64; scalar_t__ next; scalar_t__ cur; scalar_t__ queued; } ;
struct nfe_softc {int nfe_flags; scalar_t__ nfe_force_tx; } ;
struct nfe_desc64 {int dummy; } ;
struct nfe_desc32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (void*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct nfe_softc *VAR_4, struct nfe_tx_ring *VAR_5)
{
 void *VAR_6;
 size_t VAR_7;

 VAR_4->nfe_force_tx = 0;
 VAR_5->queued = 0;
 VAR_5->cur = VAR_5->next = 0;
 if (VAR_4->nfe_flags & VAR_2) {
  VAR_6 = VAR_5->desc64;
  VAR_7 = sizeof (struct nfe_desc64);
 } else {
  VAR_6 = VAR_5->desc32;
  VAR_7 = sizeof (struct nfe_desc32);
 }
 FUNC_1(VAR_6, VAR_7 * VAR_3);

 FUNC_0(VAR_5->tx_desc_tag, VAR_5->tx_desc_map,
     VAR_0 | VAR_1);
}

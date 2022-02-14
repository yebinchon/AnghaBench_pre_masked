
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int nfe_flags; } ;
struct nfe_rx_ring {int rx_desc_map; int rx_desc_tag; void* desc32; void* desc64; scalar_t__ next; scalar_t__ cur; } ;
struct nfe_desc64 {int dummy; } ;
struct nfe_desc32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (void*,size_t) ;
 scalar_t__ FUNC_2 (struct nfe_softc*,int) ;

__attribute__((used)) static int
FUNC_3(struct nfe_softc *VAR_5, struct nfe_rx_ring *VAR_6)
{
 void *VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_6->cur = VAR_6->next = 0;
 if (VAR_5->nfe_flags & VAR_3) {
  VAR_7 = VAR_6->desc64;
  VAR_8 = sizeof (struct nfe_desc64);
 } else {
  VAR_7 = VAR_6->desc32;
  VAR_8 = sizeof (struct nfe_desc32);
 }
 FUNC_1(VAR_7, VAR_8 * VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (FUNC_2(VAR_5, VAR_9) != 0)
   return (VAR_2);
 }

 FUNC_0(VAR_6->rx_desc_tag, VAR_6->rx_desc_map,
     VAR_0 | VAR_1);

 return (0);
}

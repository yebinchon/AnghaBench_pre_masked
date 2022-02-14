
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
typedef int u_long ;
struct hn_softc {unsigned long hn_chim_bmap_cnt; int* hn_chim_bmap; } ;


 int FUNC_0 (int,char*) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static __inline void
FUNC_2(struct hn_softc *VAR_1, uint32_t VAR_2)
{
 u_long VAR_3;
 uint32_t VAR_4;

 VAR_4 = VAR_2 / VAR_0;
 FUNC_0(VAR_4 < VAR_1->hn_chim_bmap_cnt,
     ("invalid chimney index 0x%x", VAR_2));

 VAR_3 = 1UL << (VAR_2 % VAR_0);
 FUNC_0(VAR_1->hn_chim_bmap[VAR_4] & VAR_3,
     ("index bitmap 0x%lx, chimney index %u, "
      "bitmap idx %d, bitmask 0x%lx",
      VAR_1->hn_chim_bmap[VAR_4], VAR_2, VAR_4, VAR_3));

 FUNC_1(&VAR_1->hn_chim_bmap[VAR_4], VAR_3);
}

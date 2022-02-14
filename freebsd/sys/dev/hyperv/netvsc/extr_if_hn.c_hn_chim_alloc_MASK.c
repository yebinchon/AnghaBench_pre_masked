
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct hn_softc {int hn_chim_bmap_cnt; int hn_chim_cnt; int * hn_chim_bmap; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_3(struct hn_softc *VAR_2)
{
 int VAR_3, VAR_4 = VAR_2->hn_chim_bmap_cnt;
 u_long *VAR_5 = VAR_2->hn_chim_bmap;
 uint32_t VAR_6 = VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  int VAR_7;

  VAR_7 = FUNC_2(~VAR_5[VAR_3]);
  if (VAR_7 == 0)
   continue;

  --VAR_7;
  FUNC_0(VAR_3 * VAR_1 + VAR_7 < VAR_2->hn_chim_cnt,
      ("invalid i %d and idx %d", VAR_3, VAR_7));

  if (FUNC_1(&VAR_5[VAR_3], VAR_7))
   continue;

  VAR_6 = VAR_3 * VAR_1 + VAR_7;
  break;
 }
 return (VAR_6);
}

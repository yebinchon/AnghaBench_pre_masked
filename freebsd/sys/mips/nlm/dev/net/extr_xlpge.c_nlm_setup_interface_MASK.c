
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct nlm_xlpnae_softc {int nucores; TYPE_1__* portcfg; int * cmplx_type; int nblocks; int base; } ;
struct TYPE_2__ {int free_desc_sizes; int ucore_mask; int vlan_pri_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nlm_xlpnae_softc*,int,int,int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int,int,int ) ;
 int FUNC_4 (int ,int,int,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int ,int,int ) ;
 int FUNC_8 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_9(struct nlm_xlpnae_softc *VAR_2, int VAR_3,
    int VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    int VAR_7, int VAR_8)
{
 uint64_t VAR_9 = VAR_2->base;
 int VAR_10 = 1536;
 uint32_t VAR_11;

 if (VAR_2->cmplx_type[VAR_3] == VAR_1)
  FUNC_3(VAR_9, VAR_3, VAR_10,
      VAR_10, VAR_2->portcfg[VAR_4].vlan_pri_en);
 FUNC_1(VAR_9,
     VAR_4, VAR_2->portcfg[VAR_4].free_desc_sizes);
 FUNC_2(VAR_9,
     VAR_4, VAR_2->portcfg[VAR_4].ucore_mask);

 FUNC_8(VAR_9, VAR_4, VAR_5, VAR_6);

 if (VAR_2->cmplx_type[VAR_3] == VAR_0)
  FUNC_4(VAR_9, VAR_3, VAR_4, VAR_10, 0);

 FUNC_0(VAR_2, VAR_3, VAR_8, VAR_4, VAR_7);

 FUNC_5(VAR_9, VAR_2->nblocks);
 FUNC_7(VAR_9, VAR_3, VAR_2->cmplx_type[VAR_3], VAR_4,
     VAR_2->portcfg[VAR_4].free_desc_sizes);


 VAR_11 = (1 << VAR_2->nucores) - 1;
 FUNC_6(VAR_9, VAR_4, VAR_11);
}

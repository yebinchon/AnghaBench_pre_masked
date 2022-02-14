
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct nlm_xlpnae_softc {scalar_t__* cmplx_type; int base; TYPE_1__* portcfg; } ;
struct TYPE_3__ {int num_channels; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int,int,int,TYPE_1__*) ;
 int FUNC_1 (int ,int,int,int,int,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nlm_xlpnae_softc *VAR_7, int VAR_8,
    int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 uint32_t VAR_14;

 VAR_13 = VAR_7->portcfg[VAR_10].num_channels;

 VAR_14 = (2048 << 12) | (VAR_10 << 4) | 1;
 FUNC_3(VAR_7->base, VAR_4, VAR_14);

 VAR_14 = ((VAR_9 + VAR_13 - 1) << 22) |
     (VAR_9 << 12) | (VAR_10 << 4) | 1;
 FUNC_3(VAR_7->base, VAR_3, VAR_14);

 FUNC_0(VAR_7->base, VAR_10,
     VAR_9, VAR_13, VAR_11, VAR_7->portcfg);
 FUNC_1(VAR_7->base, VAR_10,
     VAR_9, VAR_13, VAR_11, VAR_7->portcfg);

 VAR_14 = FUNC_2(VAR_7->base, VAR_1);
 VAR_14 |= (1 << 25) | (1 << 24);
 FUNC_3(VAR_7->base, VAR_1, VAR_14);

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  FUNC_3(VAR_7->base, VAR_6,
      VAR_2);
  VAR_14 = (VAR_10 << 15) | ((VAR_9 + VAR_12) << 5);
  if (VAR_7->cmplx_type[VAR_8] == VAR_0)
   VAR_14 |= (VAR_12 << 20);
  FUNC_3(VAR_7->base, VAR_5, VAR_14 | 1);
  FUNC_3(VAR_7->base, VAR_5, VAR_14);
 }
}

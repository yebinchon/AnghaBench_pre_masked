
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_3__ {unsigned long long u64; } ;
typedef TYPE_1__ cvmx_gmxx_prtx_cfg_t ;
struct TYPE_4__ {int mac; int port; } ;
typedef TYPE_2__ cvm_oct_private_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*) ;
 scalar_t__ FUNC_11 (int) ;
 unsigned long long FUNC_12 (int ) ;
 int FUNC_13 (int ,int const) ;
 int FUNC_14 (int ,void const*,int) ;

void FUNC_15(struct ifnet *VAR_1, const void *VAR_2)
{
 cvm_oct_private_t *VAR_3 = (cvm_oct_private_t *)VAR_1->if_softc;
 cvmx_gmxx_prtx_cfg_t VAR_4;
 int VAR_5 = FUNC_9(VAR_3->port);
 int VAR_6 = FUNC_8(VAR_3->port);

 FUNC_14(VAR_3->mac, VAR_2, 6);

 if ((VAR_5 < 2) && (FUNC_11(VAR_5) != VAR_0)) {
  int VAR_7;
  const uint8_t *VAR_8 = VAR_2;
  uint64_t VAR_9 = 0;
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
   VAR_9 = (VAR_9<<8) | (uint64_t)(VAR_8[VAR_7]);

  VAR_4.u64 = FUNC_12(FUNC_0(VAR_6, VAR_5));
  FUNC_13(FUNC_0(VAR_6, VAR_5), VAR_4.u64 & ~1ull);

  FUNC_13(FUNC_7(VAR_6, VAR_5), VAR_9);
  FUNC_13(FUNC_1(VAR_6, VAR_5), VAR_8[0]);
  FUNC_13(FUNC_2(VAR_6, VAR_5), VAR_8[1]);
  FUNC_13(FUNC_3(VAR_6, VAR_5), VAR_8[2]);
  FUNC_13(FUNC_4(VAR_6, VAR_5), VAR_8[3]);
  FUNC_13(FUNC_5(VAR_6, VAR_5), VAR_8[4]);
  FUNC_13(FUNC_6(VAR_6, VAR_5), VAR_8[5]);
  FUNC_10(VAR_1);
  FUNC_13(FUNC_0(VAR_6, VAR_5), VAR_4.u64);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mwl_hal_priv {int mh_flags; int mh_40M_5G; int mh_20M_5G; int mh_40M; int mh_20M; scalar_t__ mh_cmdbuf; } ;
struct TYPE_2__ {int* calTbl; } ;
typedef int MWL_HAL_CHANNELINFO ;
typedef TYPE_1__ HostCmd_FW_GET_CALTABLE ;


 int VAR_0 ;
 int FUNC_0 (struct mwl_hal_priv*) ;
 int FUNC_1 (struct mwl_hal_priv*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int const*,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 scalar_t__ FUNC_5 (struct mwl_hal_priv*,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct mwl_hal_priv *VAR_5)
{
 const uint8_t *VAR_6;
 MWL_HAL_CHANNELINFO *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5);

 VAR_6 = ((const HostCmd_FW_GET_CALTABLE *) VAR_5->mh_cmdbuf)->calTbl;
 if (FUNC_5(VAR_5, 33, 0) == 0) {
  VAR_8 = (VAR_6[2] | (VAR_6[3] << 8)) - 12;
  if (VAR_8 > VAR_1)
   VAR_8 = VAR_1;



  FUNC_3(&VAR_5->mh_20M, &VAR_6[12], VAR_8);
 }
 if (FUNC_5(VAR_5, 34, 0) == 0) {
  VAR_8 = (VAR_6[2] | (VAR_6[3] << 8)) - 12;
  if (VAR_8 > VAR_3)
   VAR_8 = VAR_3;



  VAR_7 = &VAR_5->mh_40M;
  FUNC_3(VAR_7, &VAR_6[12], VAR_8);
 }
 if (FUNC_5(VAR_5, 35, 0) == 0) {
  VAR_8 = (VAR_6[2] | (VAR_6[3] << 8)) - 20;
  if (VAR_8 > VAR_2)
   VAR_8 = VAR_2;



  FUNC_4(&VAR_5->mh_20M_5G, &VAR_6[20], VAR_8);
 }
 if (FUNC_5(VAR_5, 36, 0) == 0) {
  VAR_8 = (VAR_6[2] | (VAR_6[3] << 8)) - 20;
  if (VAR_8 > VAR_4)
   VAR_8 = VAR_4;



  VAR_7 = &VAR_5->mh_40M_5G;
  FUNC_4(VAR_7, &VAR_6[20], VAR_8);
 }
 VAR_5->mh_flags |= VAR_0;
 FUNC_1(VAR_5);
 return 0;
}

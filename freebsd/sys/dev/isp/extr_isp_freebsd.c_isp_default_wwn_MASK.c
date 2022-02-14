
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct isp_fc {int def_wwnn; int def_wwpn; } ;
struct TYPE_6__ {int isp_dev; } ;
typedef TYPE_1__ ispsoftc_t ;
struct TYPE_7__ {int isp_wwnn_nvram; int isp_wwpn_nvram; } ;


 TYPE_4__* FUNC_0 (TYPE_1__*,int) ;
 struct isp_fc* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

uint64_t
FUNC_3(ispsoftc_t * VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 uint64_t VAR_4;
 struct isp_fc *VAR_5 = FUNC_1(VAR_0, VAR_1);


 VAR_4 = VAR_3 ? VAR_5->def_wwnn : VAR_5->def_wwpn;
 if (VAR_4)
  return (VAR_4);


 if (VAR_2) {
  VAR_4 = VAR_3 ? FUNC_0(VAR_0, VAR_1)->isp_wwnn_nvram :
      FUNC_0(VAR_0, VAR_1)->isp_wwpn_nvram;
  if (VAR_4)
   return (VAR_4);
 }


 if (VAR_1 > 0) {
  VAR_4 = VAR_3 ? FUNC_1(VAR_0, 0)->def_wwnn :
      FUNC_1(VAR_0, 0)->def_wwpn;
  if (VAR_4 == 0) {
   VAR_4 = VAR_3 ? FUNC_0(VAR_0, 0)->isp_wwnn_nvram :
       FUNC_0(VAR_0, 0)->isp_wwpn_nvram;
  }
 }


 if (VAR_4 == 0) {
  VAR_4 = 0x400000007F000000ull + FUNC_2(VAR_0->isp_dev);
  if (!VAR_3)
   VAR_4 ^= 0x0100000000000000ULL;
 }


 if (!VAR_3 && VAR_1 > 0) {





  VAR_4 ^= 0x0100000000000000ULL;
  VAR_4 ^= ((uint64_t) (VAR_1 + 1) & 0xf) << 56;
  VAR_4 ^= ((uint64_t) ((VAR_1 + 1) >> 4) & 0xf) << 52;
 }
 return (VAR_4);
}

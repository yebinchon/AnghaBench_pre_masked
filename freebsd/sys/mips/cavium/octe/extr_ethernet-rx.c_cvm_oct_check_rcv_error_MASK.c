
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_20__ {int err_code; } ;
struct TYPE_21__ {TYPE_7__ snoip; } ;
struct TYPE_18__ {int ipprt; } ;
struct TYPE_17__ {int len; } ;
struct TYPE_19__ {TYPE_5__ cn38xx; TYPE_4__ s; } ;
struct TYPE_15__ {int addr; } ;
struct TYPE_16__ {TYPE_2__ s; } ;
struct TYPE_22__ {TYPE_8__ word2; TYPE_6__ word1; TYPE_3__ packet_ptr; } ;
typedef TYPE_9__ cvmx_wqe_t ;
struct TYPE_14__ {scalar_t__ pre_chk; } ;
struct TYPE_13__ {TYPE_1__ s; int u64; } ;
typedef TYPE_10__ cvmx_gmxx_rxx_frm_ctl_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(cvmx_wqe_t *VAR_1)
{
 if ((VAR_1->word2.snoip.err_code == 10) && (VAR_1->word1.s.len <= 64)) {



 } else
 if (VAR_0 && ((VAR_1->word2.snoip.err_code == 5) || (VAR_1->word2.snoip.err_code == 7))) {






  int VAR_2 = FUNC_4(VAR_1->word1.cn38xx.ipprt);
  int VAR_3 = FUNC_3(VAR_1->word1.cn38xx.ipprt);
  cvmx_gmxx_rxx_frm_ctl_t VAR_4;
  VAR_4.u64 = FUNC_6(FUNC_0(VAR_3, VAR_2));
  if (VAR_4.s.pre_chk == 0) {

   uint8_t *VAR_5 = FUNC_5(VAR_1->packet_ptr.s.addr);
   int VAR_6 = 0;

   while (VAR_6 < VAR_1->word1.s.len-1) {
    if (*VAR_5 != 0x55)
     break;
    VAR_5++;
    VAR_6++;
   }

   if (*VAR_5 == 0xd5) {



    VAR_1->packet_ptr.s.addr += VAR_6+1;
    VAR_1->word1.s.len -= VAR_6+5;
   } else
   if ((*VAR_5 & 0xf) == 0xd) {



    VAR_1->packet_ptr.s.addr += VAR_6;
    VAR_1->word1.s.len -= VAR_6+4;
    for (VAR_6 = 0; VAR_6 < VAR_1->word1.s.len; VAR_6++) {
     *VAR_5 = ((*VAR_5&0xf0)>>4) | ((*(VAR_5+1)&0xf)<<4);
     VAR_5++;
    }
   } else {
    FUNC_1("Port %d unknown preamble, packet dropped\n", VAR_1->word1.cn38xx.ipprt);



    FUNC_2(VAR_1);
    return 1;
   }
  }
 } else {
  FUNC_1("Port %d receive error code %d, packet dropped\n", VAR_1->word1.cn38xx.ipprt, VAR_1->word2.snoip.err_code);
  FUNC_2(VAR_1);
  return 1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int AHSLength; size_t DSLength; } ;
struct TYPE_10__ {TYPE_6__ bhs; } ;
struct TYPE_13__ {int ahs_len; size_t ds_len; TYPE_1__ ipdu; } ;
struct TYPE_12__ {size_t len; TYPE_4__ pdu; } ;
typedef TYPE_3__ pduq_t ;
typedef TYPE_4__ pdu_t ;
struct TYPE_11__ {size_t maxBurstLength; } ;
struct TYPE_14__ {TYPE_2__ opt; int sid; int dataDigest; int hdrDigest; } ;
typedef TYPE_5__ isc_session_t ;
typedef TYPE_6__ bhs_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (char*,int ,size_t,size_t) ;

int
FUNC_2(isc_session_t *VAR_1, pduq_t *VAR_2)
{
     size_t VAR_3, VAR_4;
     pdu_t *VAR_5 = &VAR_2->pdu;
     bhs_t *VAR_6 = &VAR_5->ipdu.bhs;

     VAR_3 = sizeof(bhs_t);
     if(VAR_5->ahs_len) {
   VAR_3 += VAR_5->ahs_len;
   VAR_6->AHSLength = VAR_5->ahs_len / 4;
     }
     if(FUNC_0(VAR_1->hdrDigest, VAR_5))
   VAR_3 += 4;
     if(VAR_5->ds_len) {
   VAR_4 = VAR_5->ds_len;
   VAR_3 += VAR_4;

   VAR_6->DSLength = ((VAR_4 & 0x00ff0000) >> 16)
        | (VAR_4 & 0x0000ff00)
        | ((VAR_4 & 0x000000ff) << 16);



   if(VAR_3 & 03) {
        VAR_4 = 4 - (VAR_3 & 03);
        VAR_3 += VAR_4;
   }
   if(FUNC_0(VAR_1->dataDigest, VAR_5))
        VAR_3 += 4;
     }

     VAR_2->len = VAR_3;
     VAR_3 -= sizeof(bhs_t);
     if(VAR_1->opt.maxBurstLength && (VAR_3 > VAR_1->opt.maxBurstLength)) {
   FUNC_1("%d] pdu len=%zd > %d",
   VAR_1->sid, VAR_3, VAR_1->opt.maxBurstLength);

   return VAR_0;
     }
     return 0;
}

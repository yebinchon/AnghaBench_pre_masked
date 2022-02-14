
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef union ipdu_u {int dummy; } ipdu_u ;
struct thread {int dummy; } ;
struct cdev {TYPE_3__* si_drv2; } ;
struct TYPE_11__ {int ahs_len; int ds_len; int * ds_addr; int * ahs_addr; } ;
struct TYPE_10__ {int len; int * buf; TYPE_2__ pdu; } ;
typedef TYPE_1__ pduq_t ;
typedef TYPE_2__ pdu_t ;
struct TYPE_12__ {int isc; int flags; int * soc; } ;
typedef TYPE_3__ isc_session_t ;
typedef int * caddr_t ;
typedef int ahs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int * FUNC_4 (int,int ,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int,char*,int,...) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_4, caddr_t VAR_5, struct thread *VAR_6)
{
     isc_session_t *VAR_7 = VAR_4->si_drv2;
     caddr_t VAR_8;
     pduq_t *VAR_9;
     pdu_t *VAR_10;
     int VAR_11, VAR_12;

     FUNC_1(8);

     if(VAR_7->soc == ((void*)0))
   return VAR_1;

     if((VAR_9 = FUNC_5(VAR_7->isc, VAR_3)) == ((void*)0))
   return VAR_0;
     VAR_10 = &VAR_9->pdu;
     VAR_9->pdu = *(pdu_t *)VAR_5;
     if((VAR_12 = FUNC_2(VAR_7, VAR_9)) != 0)
   goto out;

     VAR_8 = ((void*)0);
     if((VAR_9->len - sizeof(union ipdu_u)) > 0) {
   VAR_9->buf = VAR_8 = FUNC_4(VAR_9->len - sizeof(union ipdu_u), VAR_2, VAR_3);
   if(VAR_9->buf == ((void*)0)) {
        VAR_12 = VAR_0;
        goto out;
   }
     }
     else
   VAR_9->buf = ((void*)0);

     FUNC_7(2, "len=%d ahs_len=%d ds_len=%d buf=%zu@%p",
     VAR_9->len, VAR_10->ahs_len, VAR_10->ds_len, VAR_9->len - sizeof(union ipdu_u), VAR_8);

     if(VAR_10->ahs_len) {

   VAR_11 = VAR_10->ahs_len;
   VAR_12 = FUNC_0(VAR_10->ahs_addr, VAR_8, VAR_11);
   if(VAR_12 != 0) {
        FUNC_7(3, "copyin ahs: error=%d", VAR_12);
        goto out;
   }
   VAR_10->ahs_addr = (ahs_t *)VAR_8;
   VAR_8 += VAR_11;
     }
     if(VAR_10->ds_len) {
   VAR_11 = VAR_10->ds_len;
   VAR_12 = FUNC_0(VAR_10->ds_addr, VAR_8, VAR_11);
   if(VAR_12 != 0) {
        FUNC_7(3, "copyin ds: error=%d", VAR_12);
        goto out;
   }
   VAR_10->ds_addr = VAR_8;
   VAR_8 += VAR_11;
   while(VAR_11 & 03) {
        VAR_11++;
        *VAR_8++ = 0;
   }
     }

     VAR_12 = FUNC_3(VAR_7, VAR_9);
     if(VAR_12 == 0)
   FUNC_8(&VAR_7->flags);
out:
     if(VAR_12)
   FUNC_6(VAR_7->isc, VAR_9);

     return VAR_12;
}

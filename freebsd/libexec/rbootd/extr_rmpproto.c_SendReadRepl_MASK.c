
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int rmp_session; int rmp_offset; int rmp_size; } ;
struct TYPE_14__ {int rmp_session; int rmp_offset; int rmp_type; void* rmp_retcode; int rmp_data; } ;
struct TYPE_13__ {int rmp_session; } ;
struct rmp_packet {scalar_t__ r_type; TYPE_3__ r_rrq; TYPE_2__ r_rrpl; TYPE_1__ r_brpl; } ;
typedef int off_t ;
struct TYPE_16__ {int rmplen; int bootfd; struct rmp_packet rmp; } ;
typedef TYPE_4__ RMPCONN ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int) ;
 int FUNC_12 (int ,char*,int ) ;

int
FUNC_13(RMPCONN *VAR_9)
{
 int VAR_10 = 0;
 RMPCONN *VAR_11;
 struct rmp_packet *VAR_12, *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;





 if ((VAR_11 = FUNC_2(VAR_9)) == ((void*)0)) {
  if ((VAR_11 = FUNC_5(VAR_9)) == ((void*)0))
   return(0);
  FUNC_12(VAR_0, "SendReadRepl: no active connection (%s)",
         FUNC_1(VAR_9));
  VAR_15++;
 }

 VAR_13 = &VAR_9->rmp;
 VAR_12 = &VAR_11->rmp;

 if (VAR_15) {
  VAR_12->r_rrpl.rmp_retcode = VAR_3;
  VAR_10 = 1;
  goto sendpkt;
 }




 if (FUNC_10(VAR_13->r_rrq.rmp_session) !=
     ((VAR_12->r_type == VAR_2)? FUNC_10(VAR_12->r_brpl.rmp_session):
                                      FUNC_10(VAR_12->r_rrpl.rmp_session))) {
  FUNC_12(VAR_0, "SendReadRepl: bad session id (%s)",
         FUNC_1(VAR_9));
  VAR_12->r_rrpl.rmp_retcode = VAR_4;
  VAR_10 = 1;
  goto sendpkt;
 }
 if (FUNC_10(VAR_13->r_rrq.rmp_size) > VAR_1)
  VAR_13->r_rrq.rmp_size = FUNC_8(VAR_1);




 FUNC_4(VAR_13->r_rrq.rmp_offset, VAR_14);
 if (FUNC_9(VAR_11->bootfd, (off_t)VAR_14, VAR_8) < 0) {
  FUNC_12(VAR_0, "SendReadRepl: lseek: %m (%s)",
         FUNC_1(VAR_9));
  VAR_12->r_rrpl.rmp_retcode = VAR_3;
  VAR_10 = 1;
  goto sendpkt;
 }




 if ((VAR_14 = FUNC_11(VAR_11->bootfd, &VAR_12->r_rrpl.rmp_data,
                  (int) FUNC_10(VAR_13->r_rrq.rmp_size))) <= 0) {
  if (VAR_14 < 0) {
   FUNC_12(VAR_0, "SendReadRepl: read: %m (%s)",
          FUNC_1(VAR_9));
   VAR_12->r_rrpl.rmp_retcode = VAR_3;
  } else {
   VAR_12->r_rrpl.rmp_retcode = VAR_5;
  }
  VAR_10 = 1;
  goto sendpkt;
 }




 VAR_12->r_rrpl.rmp_retcode = VAR_6;

sendpkt:



 VAR_12->r_rrpl.rmp_type = VAR_7;
 FUNC_0(VAR_13->r_rrq.rmp_offset, VAR_12->r_rrpl.rmp_offset);
 VAR_12->r_rrpl.rmp_session = VAR_13->r_rrq.rmp_session;

 VAR_11->rmplen = FUNC_6(VAR_14);

 VAR_10 &= FUNC_7(VAR_11);

 if (VAR_15)
  FUNC_3(VAR_11);

 return (VAR_10);
}

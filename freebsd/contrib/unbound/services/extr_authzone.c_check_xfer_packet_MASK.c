
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct auth_xfer {scalar_t__ dclass; TYPE_2__* task_transfer; int name; } ;
typedef int ssize_t ;
typedef int sldns_buffer ;
typedef int rcode ;
struct TYPE_4__ {scalar_t__ id; int ixfr_fail; int rr_scan_num; int on_ixfr_is_axfr; int got_xfr_serial; scalar_t__ incoming_xfr_serial; TYPE_1__* master; scalar_t__ on_ixfr; } ;
struct TYPE_3__ {int host; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,size_t) ;
 int * FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *,scalar_t__) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int,char*,int) ;
 int FUNC_22 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_23(sldns_buffer* VAR_11, struct auth_xfer* VAR_12,
 int* VAR_13, int* VAR_14)
{
 uint8_t* VAR_15 = FUNC_12(VAR_11);
 int VAR_16;
 if(FUNC_13(VAR_11) < VAR_0) {
  FUNC_22(VAR_10, "xfr to %s failed, packet too small",
   VAR_12->task_transfer->master->host);
  return 0;
 }
 if(!FUNC_6(VAR_15)) {
  FUNC_22(VAR_10, "xfr to %s failed, packet has no QR flag",
   VAR_12->task_transfer->master->host);
  return 0;
 }
 if(FUNC_8(VAR_15)) {
  FUNC_22(VAR_10, "xfr to %s failed, packet has TC flag",
   VAR_12->task_transfer->master->host);
  return 0;
 }

 if(FUNC_2(VAR_15) != VAR_12->task_transfer->id) {
  FUNC_22(VAR_10, "xfr to %s failed, packet wrong ID",
   VAR_12->task_transfer->master->host);
  return 0;
 }
 if(FUNC_7(VAR_15) != VAR_3) {
  char VAR_17[32];
  FUNC_21((int)FUNC_7(VAR_15), VAR_17,
   sizeof(VAR_17));

  if(VAR_12->task_transfer->on_ixfr) {
   if(FUNC_7(VAR_15) == VAR_4 ||
    FUNC_7(VAR_15) == VAR_6 ||
    FUNC_7(VAR_15) == VAR_5 ||
    FUNC_7(VAR_15) == VAR_2) {
    FUNC_22(VAR_10, "xfr to %s, fallback "
     "from IXFR to AXFR (with rcode %s)",
     VAR_12->task_transfer->master->host,
     VAR_17);
    VAR_12->task_transfer->ixfr_fail = 1;
    *VAR_13 = 0;
    return 0;
   }
  }
  FUNC_22(VAR_10, "xfr to %s failed, packet with rcode %s",
   VAR_12->task_transfer->master->host, VAR_17);
  return 0;
 }
 if(FUNC_4(VAR_15) != VAR_1) {
  FUNC_22(VAR_10, "xfr to %s failed, packet with bad opcode",
   VAR_12->task_transfer->master->host);
  return 0;
 }
 if(FUNC_5(VAR_15) > 1) {
  FUNC_22(VAR_10, "xfr to %s failed, packet has qdcount %d",
   VAR_12->task_transfer->master->host,
   (int)FUNC_5(VAR_15));
  return 0;
 }


 FUNC_19(VAR_11, VAR_0);
 for(VAR_16=0; VAR_16<(int)FUNC_5(VAR_15); VAR_16++) {
  size_t VAR_18 = FUNC_14(VAR_11);
  uint16_t VAR_19, VAR_20;
  if(FUNC_10(VAR_11) == 0) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "malformed dname",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  if(FUNC_9(VAR_11, FUNC_11(VAR_11, VAR_18),
   VAR_12->name) != 0) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "wrong qname",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  if(FUNC_18(VAR_11) < 4) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "truncated query RR",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  VAR_19 = FUNC_15(VAR_11);
  VAR_20 = FUNC_15(VAR_11);
  if(VAR_20 != VAR_12->dclass) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "wrong qclass",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  if(VAR_12->task_transfer->on_ixfr) {
   if(VAR_19 != VAR_8) {
    FUNC_22(VAR_10, "xfr to %s failed, packet "
     "with wrong qtype, expected IXFR",
    VAR_12->task_transfer->master->host);
    return 0;
   }
  } else {
   if(VAR_19 != VAR_7) {
    FUNC_22(VAR_10, "xfr to %s failed, packet "
     "with wrong qtype, expected AXFR",
    VAR_12->task_transfer->master->host);
    return 0;
   }
  }
 }




 for(VAR_16=0; VAR_16<(int)FUNC_0(VAR_15); VAR_16++) {
  size_t VAR_21 = FUNC_14(VAR_11);
  uint16_t VAR_22, VAR_23;
  if(FUNC_10(VAR_11) == 0) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "malformed dname in answer section",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  if(FUNC_18(VAR_11) < 10) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "truncated RR",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  VAR_22 = FUNC_15(VAR_11);
  (void)FUNC_15(VAR_11);
  (void)FUNC_16(VAR_11);
  VAR_23 = FUNC_15(VAR_11);
  if(FUNC_18(VAR_11) < VAR_23) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "truncated RR rdata",
    VAR_12->task_transfer->master->host);
   return 0;
  }



  if(VAR_12->task_transfer->rr_scan_num == 0 &&
   VAR_22 != VAR_9) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "malformed zone transfer, no start SOA",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  if(VAR_12->task_transfer->rr_scan_num == 1 &&
   VAR_22 != VAR_9) {


   VAR_12->task_transfer->on_ixfr_is_axfr = 1;
  }
  if(VAR_22 == VAR_9) {
   uint32_t VAR_24;
   if(VAR_23 < 22) {
    FUNC_22(VAR_10, "xfr to %s failed, packet "
     "with SOA with malformed rdata",
     VAR_12->task_transfer->master->host);
    return 0;
   }
   if(FUNC_9(VAR_11, FUNC_11(VAR_11, VAR_21),
    VAR_12->name) != 0) {
    FUNC_22(VAR_10, "xfr to %s failed, packet "
     "with SOA with wrong dname",
     VAR_12->task_transfer->master->host);
    return 0;
   }


   VAR_24 = FUNC_17(VAR_11,
    FUNC_14(VAR_11)+VAR_23-20);


   if(VAR_12->task_transfer->on_ixfr &&
    VAR_12->task_transfer->rr_scan_num == 0 &&
    FUNC_0(VAR_15)==1) {
    FUNC_22(VAR_10, "xfr to %s ended, "
     "IXFR reply that zone has serial %u",
     VAR_12->task_transfer->master->host,
     (unsigned)VAR_24);
    return 0;
   }


   if(VAR_12->task_transfer->got_xfr_serial == 0) {
    VAR_12->task_transfer->got_xfr_serial = 1;
    VAR_12->task_transfer->incoming_xfr_serial =
     VAR_24;
    FUNC_22(VAR_10, "xfr %s: contains "
     "SOA serial %u",
     VAR_12->task_transfer->master->host,
     (unsigned)VAR_24);

   } else if(!VAR_12->task_transfer->on_ixfr ||
    VAR_12->task_transfer->on_ixfr_is_axfr) {


    *VAR_14 = 1;
    FUNC_22(VAR_10, "xfr %s: last AXFR packet",
     VAR_12->task_transfer->master->host);

   } else if(VAR_12->task_transfer->incoming_xfr_serial ==
    VAR_24 && VAR_12->task_transfer->got_xfr_serial
    == 1) {
    VAR_12->task_transfer->got_xfr_serial++;


   } else if(VAR_12->task_transfer->incoming_xfr_serial ==
    VAR_24 && VAR_12->task_transfer->got_xfr_serial
    == 2) {
    FUNC_22(VAR_10, "xfr %s: last IXFR packet",
     VAR_12->task_transfer->master->host);
    *VAR_14 = 1;


   }
  }
  VAR_12->task_transfer->rr_scan_num++;


  FUNC_20(VAR_11, (ssize_t)VAR_23);
 }



 for(VAR_16=0; VAR_16<(int)FUNC_3(VAR_15); VAR_16++) {
  uint16_t VAR_25;
  if(FUNC_10(VAR_11) == 0) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "malformed dname in authority section",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  if(FUNC_18(VAR_11) < 10) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "truncated RR",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  (void)FUNC_15(VAR_11);
  (void)FUNC_15(VAR_11);
  (void)FUNC_16(VAR_11);
  VAR_25 = FUNC_15(VAR_11);
  if(FUNC_18(VAR_11) < VAR_25) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "truncated RR rdata",
    VAR_12->task_transfer->master->host);
   return 0;
  }

  FUNC_20(VAR_11, (ssize_t)VAR_25);
 }


 for(VAR_16=0; VAR_16<(int)FUNC_1(VAR_15); VAR_16++) {
  uint16_t VAR_26;
  if(FUNC_10(VAR_11) == 0) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "malformed dname in additional section",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  if(FUNC_18(VAR_11) < 10) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "truncated RR",
    VAR_12->task_transfer->master->host);
   return 0;
  }
  (void)FUNC_15(VAR_11);
  (void)FUNC_15(VAR_11);
  (void)FUNC_16(VAR_11);
  VAR_26 = FUNC_15(VAR_11);
  if(FUNC_18(VAR_11) < VAR_26) {
   FUNC_22(VAR_10, "xfr to %s failed, packet with "
    "truncated RR rdata",
    VAR_12->task_transfer->master->host);
   return 0;
  }

  FUNC_20(VAR_11, (ssize_t)VAR_26);
 }

 return 1;
}

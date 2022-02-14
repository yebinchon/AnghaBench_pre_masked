
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int addrlen; int addr; } ;
struct comm_point {scalar_t__ type; int tcp_byte_count; int buffer; TYPE_2__ repinfo; TYPE_1__* ev; scalar_t__ tcp_req_info; int tcp_is_reading; scalar_t__ ssl; } ;
typedef int ssize_t ;
struct TYPE_3__ {int ev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int *,int ) ;
 int FUNC_3 (int,void*,int,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct comm_point*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct comm_point*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,char*,...) ;
 int VAR_13 ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static int
FUNC_19(int VAR_14, struct comm_point* VAR_15, int VAR_16)
{
 ssize_t VAR_17;
 FUNC_1(VAR_15->type == VAR_11 || VAR_15->type == VAR_10);
 if(VAR_15->ssl)
  return FUNC_12(VAR_15);
 if(!VAR_15->tcp_is_reading)
  return 0;

 FUNC_1(VAR_14 != -1);
 if(VAR_15->tcp_byte_count < sizeof(uint16_t)) {

  VAR_17 = FUNC_3(VAR_14,(void*)FUNC_4(VAR_15->buffer,VAR_15->tcp_byte_count),
   sizeof(uint16_t)-VAR_15->tcp_byte_count, 0);
  if(VAR_17 == 0) {
   if(VAR_15->tcp_req_info)
    return FUNC_15(VAR_15->tcp_req_info);
   return 0;
  } else if(VAR_17 == -1) {

   if(VAR_12 == VAR_2 || VAR_12 == VAR_0)
    return 1;




   FUNC_2("read (in tcp s)", FUNC_13(VAR_12),
    &VAR_15->repinfo.addr, VAR_15->repinfo.addrlen);
   return 0;
  }
  VAR_15->tcp_byte_count += VAR_17;
  if(VAR_15->tcp_byte_count != sizeof(uint16_t))
   return 1;
  if(FUNC_8(VAR_15->buffer, 0) >
   FUNC_5(VAR_15->buffer)) {
   FUNC_17(VAR_6, "tcp: dropped larger than buffer");
   return 0;
  }
  FUNC_10(VAR_15->buffer,
   FUNC_8(VAR_15->buffer, 0));
  if(!VAR_16 &&
   FUNC_7(VAR_15->buffer) < VAR_3) {
   FUNC_17(VAR_6, "tcp: dropped bogus too short.");
   return 0;
  }
  FUNC_17(VAR_5, "Reading tcp query of length %d",
   (int)FUNC_7(VAR_15->buffer));
 }

 FUNC_1(FUNC_9(VAR_15->buffer) > 0);
 VAR_17 = FUNC_3(VAR_14, (void*)FUNC_6(VAR_15->buffer),
  FUNC_9(VAR_15->buffer), 0);
 if(VAR_17 == 0) {
  if(VAR_15->tcp_req_info)
   return FUNC_15(VAR_15->tcp_req_info);
  return 0;
 } else if(VAR_17 == -1) {

  if(VAR_12 == VAR_2 || VAR_12 == VAR_0)
   return 1;
  FUNC_2("read (in tcp r)", FUNC_13(VAR_12),
   &VAR_15->repinfo.addr, VAR_15->repinfo.addrlen);
  return 0;
 }
 FUNC_11(VAR_15->buffer, VAR_17);
 if(FUNC_9(VAR_15->buffer) <= 0) {
  FUNC_14(VAR_15);
 }
 return 1;
}

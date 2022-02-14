
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xpdu ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int uint128_t ;
struct iovec {int iov_len; void* iov_base; } ;
typedef TYPE_1__* sdp_session_p ;
struct TYPE_6__ {scalar_t__ pid; int tid; int len; } ;
typedef TYPE_2__ sdp_pdu_t ;
struct TYPE_7__ {int attr; int* value; scalar_t__ vlen; int flags; } ;
typedef TYPE_3__ sdp_attr_t ;
typedef int pp ;
typedef int lo ;
typedef int iov ;
typedef int int32_t ;
typedef int ap ;
struct TYPE_5__ {int* req; int* rsp; int* req_e; int cslen; int* cs; int tid; int imtu; int* rsp_e; void* error; int s; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int const,int*) ;
 int FUNC_4 (scalar_t__ const,int*) ;
 int FUNC_5 (int,int*) ;
 scalar_t__ VAR_12 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int*,int*,scalar_t__) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ,struct iovec*,int) ;
 int* FUNC_10 (int*,scalar_t__) ;
 int FUNC_11 (int ,struct iovec*,int) ;

int32_t
FUNC_12(void *VAR_13,
  uint32_t VAR_14, uint16_t const *VAR_15,
  uint32_t VAR_16, uint32_t const *VAR_17,
  uint32_t VAR_18, sdp_attr_t *VAR_19)
{
 struct sdp_xpdu {
  sdp_pdu_t pdu;
  uint16_t len;
 } __attribute__ ((packed)) VAR_20;

 sdp_session_p VAR_21 = (sdp_session_p) VAR_13;
 uint8_t *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
 int32_t VAR_25, VAR_26;
 uint16_t VAR_27, VAR_28;

 if (VAR_21 == ((void*)0))
  return (-1);

 if (VAR_21->req == ((void*)0) || VAR_21->rsp == ((void*)0) ||
     VAR_14 == 0 || VAR_15 == ((void*)0) || VAR_16 == 0 || VAR_17 == ((void*)0)) {
  VAR_21->error = VAR_1;
  return (-1);
 }

 VAR_22 = VAR_21->req;


 VAR_14 = VAR_14 * (sizeof(VAR_15[0]) + 1);


 for (VAR_26 = 0, VAR_25 = 0; VAR_25 < VAR_16; VAR_25 ++) {
  VAR_27 = (uint16_t) (VAR_17[VAR_25] >> 16);
  VAR_28 = (uint16_t) (VAR_17[VAR_25]);

  if (VAR_27 > VAR_28) {
   VAR_21->error = VAR_1;
   return (-1);
  }

  if (VAR_27 != VAR_28)
   VAR_26 += (sizeof(VAR_17[VAR_25]) + 1);
  else
   VAR_26 += (sizeof(VAR_27) + 1);
 }
 VAR_16 = VAR_26;


 VAR_26 = VAR_14 + sizeof(uint8_t) + sizeof(uint16_t) +

  sizeof(uint16_t) +

  VAR_16 + sizeof(uint8_t) + sizeof(uint16_t);


 if (VAR_21->req_e - VAR_22 < VAR_26) {
  VAR_21->error = VAR_4;
  return (-1);
 }


 FUNC_5(144, VAR_22);
 FUNC_3(VAR_14, VAR_22);
 for (; VAR_14 > 0; VAR_15 ++, VAR_14 -= (sizeof(VAR_15[0]) + 1)) {
  FUNC_5(129, VAR_22);
  FUNC_3(*VAR_15, VAR_22);
 }


 FUNC_3(0xffff, VAR_22);


 FUNC_5(144, VAR_22);
 FUNC_3(VAR_16, VAR_22);
 for (; VAR_16 > 0; VAR_17 ++) {
  VAR_27 = (uint16_t) (*VAR_17 >> 16);
  VAR_28 = (uint16_t) (*VAR_17);

  if (VAR_27 != VAR_28) {

   FUNC_5(136, VAR_22);
   FUNC_4(*VAR_17, VAR_22);
   VAR_16 -= (sizeof(VAR_17[0]) + 1);
  } else {

   FUNC_5(137, VAR_22);
   FUNC_3(VAR_27, VAR_22);
   VAR_16 -= (sizeof(VAR_27) + 1);
  }
 }


 VAR_21->cslen = 0;
 VAR_23 = VAR_21->rsp;

 do {
  struct iovec VAR_29[2];
  uint8_t *VAR_30 = VAR_22;


  if (VAR_21->req_e - VAR_30 < VAR_21->cslen + 1) {
   VAR_21->error = VAR_4;
   return (-1);
  }

  FUNC_5(VAR_21->cslen, VAR_30);
  if (VAR_21->cslen > 0) {
   FUNC_7(VAR_30, VAR_21->cs, VAR_21->cslen);
   VAR_30 += VAR_21->cslen;
  }


  VAR_20.pdu.pid = VAR_11;
  VAR_20.pdu.tid = FUNC_6(VAR_21->tid);
  VAR_20.pdu.len = FUNC_6(VAR_30 - VAR_21->req);


  VAR_29[0].iov_base = (void *) &VAR_20;
  VAR_29[0].iov_len = sizeof(VAR_20.pdu);
  VAR_29[1].iov_base = (void *) VAR_21->req;
  VAR_29[1].iov_len = VAR_30 - VAR_21->req;

  do {
   VAR_26 = FUNC_11(VAR_21->s, VAR_29, sizeof(VAR_29)/sizeof(VAR_29[0]));
  } while (VAR_26 < 0 && VAR_12 == VAR_0);

  if (VAR_26 < 0) {
   VAR_21->error = VAR_12;
   return (-1);
  }


  VAR_29[0].iov_base = (void *) &VAR_20;
  VAR_29[0].iov_len = sizeof(VAR_20);
  VAR_29[1].iov_base = (void *) VAR_23;
  VAR_29[1].iov_len = VAR_21->imtu;

  do {
   VAR_26 = FUNC_9(VAR_21->s, VAR_29, sizeof(VAR_29)/sizeof(VAR_29[0]));
  } while (VAR_26 < 0 && VAR_12 == VAR_0);

  if (VAR_26 < 0) {
   VAR_21->error = VAR_12;
   return (-1);
  }
  if (VAR_26 < sizeof(VAR_20)) {
   VAR_21->error = VAR_6;
   return (-1);
  }

  VAR_20.pdu.tid = FUNC_8(VAR_20.pdu.tid);
  VAR_20.pdu.len = FUNC_8(VAR_20.pdu.len);
  VAR_20.len = FUNC_8(VAR_20.len);

  if (VAR_20.pdu.pid == VAR_10 ||
      VAR_20.pdu.tid != VAR_21->tid ||
      VAR_20.pdu.len > VAR_26 ||
      VAR_20.len > VAR_20.pdu.len) {
   VAR_21->error = VAR_2;
   return (-1);
  }

  VAR_23 += VAR_20.len;
  VAR_21->tid ++;


  VAR_21->cslen = VAR_23[0];
  if (VAR_21->cslen > 0) {
   if (VAR_21->cslen > sizeof(VAR_21->cs)) {
    VAR_21->error = VAR_4;
    return (-1);
   }

   FUNC_7(VAR_21->cs, VAR_23 + 1, VAR_21->cslen);






   if (VAR_21->rsp_e - VAR_23 <= VAR_21->imtu) {
    uint32_t VAR_31, VAR_32;

    VAR_31 = VAR_21->rsp_e - VAR_21->rsp + VAR_21->imtu;
    VAR_32 = VAR_23 - VAR_21->rsp;

    VAR_24 = FUNC_10(VAR_21->rsp, VAR_31);
    if (VAR_24 == ((void*)0)) {
     VAR_21->error = VAR_5;
     return (-1);
    }

    VAR_21->rsp = VAR_24;
    VAR_21->rsp_e = VAR_21->rsp + VAR_31;
    VAR_23 = VAR_21->rsp + VAR_32;
   }
  }
 } while (VAR_21->cslen > 0);
 if (VAR_19 == ((void*)0))
  goto done;

 VAR_24 = VAR_21->rsp;


 FUNC_2(VAR_25, VAR_24);
 switch (VAR_25) {
 case 142:
  FUNC_2(VAR_26, VAR_24);
  break;

 case 144:
  FUNC_0(VAR_26, VAR_24);
  break;

 case 143:
  FUNC_1(VAR_26, VAR_24);
  break;

 default:
  VAR_21->error = VAR_3;
  return (-1);

 }

 for (; VAR_24 < VAR_23 && VAR_18 > 0; ) {

  FUNC_2(VAR_25, VAR_24);
  switch (VAR_25) {
  case 142:
   FUNC_2(VAR_26, VAR_24);
   break;

  case 144:
   FUNC_0(VAR_26, VAR_24);
   break;

  case 143:
   FUNC_1(VAR_26, VAR_24);
   break;

  default:
   VAR_21->error = VAR_3;
   return (-1);

  }


  for (; VAR_26 > 0 && VAR_18 > 0; VAR_19 ++, VAR_18 --) {

   FUNC_2(VAR_25, VAR_24);
   if (VAR_25 != 137) {
    VAR_21->error = VAR_3;
    return (-1);
   }
   FUNC_0(VAR_19->attr, VAR_24);


   switch (VAR_24[0]) {
   case 145:
    VAR_16 = 0;
    break;

   case 134:
   case 146:
   case 151:
    VAR_16 = sizeof(uint8_t);
    break;

   case 137:
   case 149:
   case 129:
    VAR_16 = sizeof(uint16_t);
    break;

   case 136:
   case 148:
   case 128:
    VAR_16 = sizeof(uint32_t);
    break;

   case 135:
   case 147:
    VAR_16 = sizeof(uint64_t);
    break;

   case 138:
   case 150:
   case 130:
    VAR_16 = sizeof(uint128_t);
    break;

   case 139:
   case 131:
   case 142:
   case 152:
    VAR_16 = VAR_24[1] + sizeof(uint8_t);
    break;

   case 141:
   case 133:
   case 144:
   case 154:
    VAR_16 = ((uint16_t)VAR_24[1] << 8)
     | ((uint16_t)VAR_24[2]);
    VAR_16 += sizeof(uint16_t);
    break;

   case 140:
   case 132:
   case 143:
   case 153:
    VAR_16 = ((uint32_t)VAR_24[1] << 24)
     | ((uint32_t)VAR_24[2] << 16)
     | ((uint32_t)VAR_24[3] << 8)
     | ((uint32_t)VAR_24[4]);
    VAR_16 += sizeof(uint32_t);
    break;

   default:
    VAR_21->error = VAR_3;
    return (-1);

   }

   VAR_16 += sizeof(uint8_t);

   if (VAR_19->value != ((void*)0)) {
    if (VAR_16 <= VAR_19->vlen) {
     VAR_19->flags = VAR_8;
     VAR_19->vlen = VAR_16;
    } else
     VAR_19->flags = VAR_9;

    FUNC_7(VAR_19->value, VAR_24, VAR_19->vlen);
   } else
    VAR_19->flags = VAR_7;

   VAR_26 -= (
    sizeof(uint8_t) + sizeof(uint16_t) +
    VAR_16
    );

   VAR_24 += VAR_16;
  }
 }
done:
 VAR_21->error = 0;

 return (0);
}

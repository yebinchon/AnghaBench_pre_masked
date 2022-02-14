
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_6__ {int engine_boots; int engine_time; } ;
struct snmp_pdu {TYPE_3__ engine; TYPE_3__ user; } ;
struct asn_buf {int asn_len; int * asn_ptr; } ;
typedef int socklen_t ;
typedef int int32_t ;
struct TYPE_7__ {int engine_boots; int engine_time; } ;
struct TYPE_5__ {scalar_t__ security_model; TYPE_4__ engine; scalar_t__ dump_pdus; TYPE_4__ user; int fd; int rxbuflen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int,int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,struct timeval*,int*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_5 (struct snmp_pdu*,int ,int) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (int ,int ,int ,struct timeval*,int) ;
 TYPE_1__ VAR_11 ;
 int FUNC_9 (struct asn_buf*,struct snmp_pdu*,int *) ;
 int FUNC_10 (struct snmp_pdu*) ;
 int FUNC_11 (struct snmp_pdu*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(struct snmp_pdu *VAR_12, struct timeval *VAR_13)
{
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;
 u_char *VAR_18;
 int VAR_19;
 struct asn_buf VAR_20;
 int32_t VAR_21;



 socklen_t VAR_22;


 if ((VAR_18 = FUNC_0(1, VAR_11.rxbuflen)) == ((void*)0)) {
  FUNC_7(&VAR_11, "%s", FUNC_12(VAR_10));
  return (-1);
 }
 VAR_14 = VAR_15 = 0;
 VAR_16 = 0;
 if (VAR_13 != ((void*)0)) {

  if (VAR_13->tv_sec != 0 || VAR_13->tv_usec != 0) {

   if (FUNC_8(VAR_11.fd, VAR_8, VAR_9,
       VAR_13, sizeof(*VAR_13)) == -1) {
    FUNC_7(&VAR_11, "setsockopt: %s",
        FUNC_12(VAR_10));
    FUNC_2(VAR_18);
    return (-1);
   }
   VAR_22 = sizeof(*VAR_13);
   if (FUNC_3(VAR_11.fd, VAR_8, VAR_9,
       VAR_13, &VAR_22) == -1) {
    FUNC_7(&VAR_11, "getsockopt: %s",
        FUNC_12(VAR_10));
    FUNC_2(VAR_18);
    return (-1);
   }







  }
  if (VAR_13->tv_sec == 0 && VAR_13->tv_usec == 0) {

   VAR_14 = 1;
   if ((VAR_16 = FUNC_1(VAR_11.fd, VAR_3, 0)) == -1) {
    FUNC_7(&VAR_11, "fcntl: %s",
        FUNC_12(VAR_10));
    FUNC_2(VAR_18);
    return (-1);
   }
   if (!(VAR_16 & VAR_5)) {
    VAR_15 = 1;
    VAR_16 |= VAR_5;
    if (FUNC_1(VAR_11.fd, VAR_4, VAR_16) == -1) {
     FUNC_7(&VAR_11, "fcntl: %s",
         FUNC_12(VAR_10));
     FUNC_2(VAR_18);
     return (-1);
    }
   }
  }
 }
 VAR_19 = FUNC_6(VAR_11.fd, VAR_18, VAR_11.rxbuflen, 0);
 VAR_17 = VAR_10;
 if (VAR_13 != ((void*)0)) {
  if (VAR_14) {
   if (VAR_15) {
    VAR_16 &= ~VAR_5;
    (void)FUNC_1(VAR_11.fd, VAR_4, VAR_16);
   }
  } else {
   VAR_13->tv_sec = 0;
   VAR_13->tv_usec = 0;
   (void)FUNC_8(VAR_11.fd, VAR_8, VAR_9,
       VAR_13, sizeof(*VAR_13));
  }
 }
 if (VAR_19 == -1) {
  FUNC_2(VAR_18);
  if (VAR_10 == VAR_0 || VAR_10 == VAR_2)
   return (0);
  FUNC_7(&VAR_11, "recv: %s", FUNC_12(VAR_17));
  return (-1);
 }
 if (VAR_19 == 0) {


  FUNC_2(VAR_18);
  FUNC_7(&VAR_11, "recv: socket closed by peer");
  VAR_10 = VAR_1;
  return (-1);
 }

 VAR_20.asn_ptr = VAR_18;
 VAR_20.asn_len = VAR_19;

 FUNC_5(VAR_12, 0, sizeof(*VAR_12));
 if (VAR_11.security_model == VAR_7) {
  FUNC_4(&VAR_12->engine, &VAR_11.engine, sizeof(VAR_12->engine));
  FUNC_4(&VAR_12->user, &VAR_11.user, sizeof(VAR_12->user));
  FUNC_11(VAR_12);
 }

 if (VAR_6 != (VAR_19 = FUNC_9(&VAR_20, VAR_12, &VAR_21))) {
  FUNC_7(&VAR_11, "snmp_decode_pdu: failed %d", VAR_19);
  FUNC_2(VAR_18);
  return (-1);
 }

 FUNC_2(VAR_18);
 if (VAR_11.dump_pdus)
  FUNC_10(VAR_12);

 VAR_11.engine.engine_time = VAR_12->engine.engine_time;
 VAR_11.engine.engine_boots = VAR_12->engine.engine_boots;

 return (+1);
}

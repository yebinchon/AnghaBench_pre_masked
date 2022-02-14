
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int16_t ;
struct mpt_softc {scalar_t__ verbose; } ;
struct TYPE_3__ {size_t MsgLength; scalar_t__ Function; int IOCStatus; } ;
typedef TYPE_1__ MSG_DEFAULT_REPLY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mpt_softc*,char*,...) ;
 int FUNC_3 (struct mpt_softc*,int ) ;
 scalar_t__ FUNC_4 (struct mpt_softc*) ;
 int FUNC_5 (struct mpt_softc*,int ,int ) ;

int
FUNC_6(struct mpt_softc *VAR_10, size_t VAR_11, void *VAR_12)
{
 int VAR_13, VAR_14;
 u_int16_t *VAR_15;
 uint32_t VAR_16;
 MSG_DEFAULT_REPLY *VAR_17;


 VAR_11 >>= 1;
 VAR_15 = (u_int16_t *)VAR_12;

 VAR_17 = (MSG_DEFAULT_REPLY *)VAR_12;


 if (FUNC_4(VAR_10) != VAR_8) {
  FUNC_2(VAR_10, "mpt_recv_handshake_cmd timeout1\n");
  return VAR_0;
 }
 VAR_16 = FUNC_3(VAR_10, VAR_6);
 *VAR_15++ = FUNC_0(VAR_16 & VAR_4);
 FUNC_5(VAR_10, VAR_7, 0);


 if (FUNC_4(VAR_10) != VAR_8) {
  FUNC_2(VAR_10, "mpt_recv_handshake_cmd timeout2\n");
  return VAR_0;
 }
 VAR_16 = FUNC_3(VAR_10, VAR_6);
 *VAR_15++ = FUNC_0(VAR_16 & VAR_4);
 FUNC_5(VAR_10, VAR_7, 0);





 if ((VAR_11 >> 1) != VAR_17->MsgLength &&
     (VAR_17->Function != VAR_1)){
  FUNC_2(VAR_10, "reply length does not match message length: "
   "got %x; expected %zx for function %x\n",
   VAR_17->MsgLength << 2, VAR_11 << 1, VAR_17->Function);
 }


 VAR_13 = (VAR_17->MsgLength << 1) - 2;
 VAR_14 = VAR_11 - 2;
 while (VAR_13--) {
  if (FUNC_4(VAR_10) != VAR_8) {
   FUNC_2(VAR_10, "mpt_recv_handshake_cmd timeout3\n");
   return VAR_0;
  }
  VAR_16 = FUNC_3(VAR_10, VAR_6);
  if (VAR_14-- > 0)
   *VAR_15++ = FUNC_0(VAR_16 & VAR_4);
  FUNC_5(VAR_10, VAR_7, 0);
 }


 if (FUNC_4(VAR_10) != VAR_8) {
  FUNC_2(VAR_10, "mpt_recv_handshake_cmd timeout4\n");
  return VAR_0;
 }
 FUNC_5(VAR_10, VAR_7, 0);

 if ((VAR_17->IOCStatus & VAR_2) != VAR_3) {
  if (VAR_10->verbose >= VAR_9)
   FUNC_1(VAR_17);
  return (VAR_5 | VAR_17->IOCStatus);
 }

 return (0);
}

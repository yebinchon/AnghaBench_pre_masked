
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct mpt_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct mpt_softc*,char*,...) ;
 size_t FUNC_5 (struct mpt_softc*) ;
 int FUNC_6 (struct mpt_softc*) ;
 scalar_t__ FUNC_7 (struct mpt_softc*) ;
 scalar_t__ FUNC_8 (struct mpt_softc*) ;
 int FUNC_9 (struct mpt_softc*,int ,size_t) ;
 int FUNC_10 (struct mpt_softc*,int ,int ) ;

int
FUNC_11(struct mpt_softc *VAR_11, size_t VAR_12, void *VAR_13)
{
 int VAR_14;
 uint32_t VAR_15, *VAR_16;


 VAR_15 = FUNC_5(VAR_11);
 if ((FUNC_2(VAR_15) != VAR_6
   && FUNC_2(VAR_15) != VAR_7
   && FUNC_2(VAR_15) != VAR_5)
  || FUNC_1(VAR_15)) {
  FUNC_4(VAR_11, "handshake aborted - invalid doorbell state\n");
  FUNC_3(VAR_15);
  return (VAR_0);
 }


 VAR_12 = (VAR_12 + 3) >> 2;
 VAR_16 = VAR_13;


 if (FUNC_0(FUNC_6(VAR_11)))
  FUNC_9(VAR_11, VAR_9, 0);





 VAR_15 = (VAR_4 << VAR_3) |
     (VAR_12 << VAR_2);
 FUNC_9(VAR_11, VAR_8, VAR_15);


 if (FUNC_8(VAR_11) != VAR_10) {
  FUNC_4(VAR_11, "mpt_send_handshake_cmd: db ignored\n");
  return (VAR_1);
 }


 FUNC_9(VAR_11, VAR_9, 0);

 if (FUNC_7(VAR_11) != VAR_10) {
  FUNC_4(VAR_11, "mpt_send_handshake_cmd: db ack timed out\n");
  return (VAR_1);
 }


 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  FUNC_10(VAR_11, VAR_8, *VAR_16++);
  if (FUNC_7(VAR_11) != VAR_10) {
   FUNC_4(VAR_11,
       "mpt_send_handshake_cmd: timeout @ index %d\n", VAR_14);
   return (VAR_1);
  }
 }
 return VAR_10;
}

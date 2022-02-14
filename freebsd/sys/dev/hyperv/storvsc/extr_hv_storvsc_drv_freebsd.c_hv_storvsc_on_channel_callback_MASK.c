
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct vstor_packet {int operation; } ;
struct vmbus_channel {int dummy; } ;
struct hv_storvsc_request {int synch_sema; int vstor_packet; } ;
struct storvsc_softc {struct hv_storvsc_request hs_reset_req; struct hv_storvsc_request hs_init_req; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;



 int VAR_1 ;
 int FUNC_1 (struct storvsc_softc*,struct vstor_packet*,struct hv_storvsc_request*) ;
 int FUNC_2 (struct storvsc_softc*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vmbus_channel*,int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_9(struct vmbus_channel *VAR_2, void *VAR_3)
{
 int VAR_4 = 0;
 struct storvsc_softc *VAR_5 = VAR_3;
 uint32_t VAR_6;
 uint64_t VAR_7;
 uint8_t VAR_8[FUNC_6(sizeof(struct vstor_packet), 8)];
 struct hv_storvsc_request *VAR_9;
 struct vstor_packet *VAR_10;

 VAR_6 = FUNC_6(VAR_1, 8);
 VAR_4 = FUNC_8(VAR_2, VAR_8, &VAR_6, &VAR_7);
 FUNC_0(VAR_4 != VAR_0, ("storvsc recvbuf is not large enough"));


 while ((VAR_4 == 0) && (VAR_6 > 0)) {
  VAR_9 = (struct hv_storvsc_request *)(uintptr_t)VAR_7;

  if ((VAR_9 == &VAR_5->hs_init_req) ||
   (VAR_9 == &VAR_5->hs_reset_req)) {
   FUNC_3(&VAR_9->vstor_packet, VAR_8,
       sizeof(struct vstor_packet));
   FUNC_7(&VAR_9->synch_sema);
  } else {
   VAR_10 = (struct vstor_packet *)VAR_8;
   switch(VAR_10->operation) {
   case 130:
    if (VAR_9 == ((void*)0))
     FUNC_4("VMBUS: storvsc received a "
         "packet with NULL request id in "
         "COMPLETEIO operation.");

    FUNC_1(VAR_5,
       VAR_10, VAR_9);
    break;
   case 128:
    FUNC_5("VMBUS: storvsc operation %d not "
        "implemented.\n", VAR_10->operation);

    break;
   case 129:
    FUNC_2(VAR_5);
    break;
   default:
    break;
   }
  }

  VAR_6 = FUNC_6(VAR_1, 8),
  VAR_4 = FUNC_8(VAR_2, VAR_8, &VAR_6,
      &VAR_7);
  FUNC_0(VAR_4 != VAR_0,
      ("storvsc recvbuf is not large enough"));




 }
}

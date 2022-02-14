
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmbus_icmsg_shutdown {int ic_haltflags; } ;
struct vmbus_icmsg_hdr {int ic_type; int ic_status; } ;
struct vmbus_ic_softc {int ic_buflen; int ic_dev; void* ic_buf; } ;
struct vmbus_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vmbus_channel*,void*,int*,int *) ;
 int FUNC_4 (struct vmbus_ic_softc*,void*,int*,int ,int ) ;
 int FUNC_5 (struct vmbus_ic_softc*,struct vmbus_channel*,void*,int,int ) ;

__attribute__((used)) static void
FUNC_6(struct vmbus_channel *VAR_7, void *VAR_8)
{
 struct vmbus_ic_softc *VAR_9 = VAR_8;
 struct vmbus_icmsg_hdr *VAR_10;
 struct vmbus_icmsg_shutdown *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;
 uint64_t VAR_15;
 void *VAR_16;




 VAR_16 = VAR_9->ic_buf;
 VAR_12 = VAR_9->ic_buflen;
 VAR_13 = FUNC_3(VAR_7, VAR_16, &VAR_12, &VAR_15);
 FUNC_0(VAR_13 != VAR_0, ("icbuf is not large enough"));
 if (VAR_13)
  return;

 if (VAR_12 < sizeof(*VAR_10)) {
  FUNC_1(VAR_9->ic_dev, "invalid data len %d\n", VAR_12);
  return;
 }
 VAR_10 = VAR_16;




 switch (VAR_10->ic_type) {
 case 129:
  VAR_13 = FUNC_4(VAR_9, VAR_16, &VAR_12,
      VAR_5, VAR_6);
  if (VAR_13)
   return;
  break;

 case 128:
  if (VAR_12 < VAR_2) {
   FUNC_1(VAR_9->ic_dev, "invalid shutdown len %d\n",
       VAR_12);
   return;
  }
  VAR_11 = VAR_16;


  if (VAR_11->ic_haltflags == 0 || VAR_11->ic_haltflags == 1) {
   FUNC_1(VAR_9->ic_dev, "shutdown requested\n");
   VAR_10->ic_status = VAR_4;
   VAR_14 = 1;
  } else {
   FUNC_1(VAR_9->ic_dev, "unknown shutdown flags "
       "0x%08x\n", VAR_11->ic_haltflags);
   VAR_10->ic_status = VAR_3;
  }
  break;

 default:
  FUNC_1(VAR_9->ic_dev, "got 0x%08x icmsg\n", VAR_10->ic_type);
  break;
 }




 FUNC_5(VAR_9, VAR_7, VAR_16, VAR_12, VAR_15);

 if (VAR_14)
  FUNC_2(VAR_1);
}

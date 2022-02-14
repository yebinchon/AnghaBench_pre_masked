
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmbus_icmsg_heartbeat {int ic_seq; } ;
struct vmbus_icmsg_hdr {int ic_type; } ;
struct vmbus_ic_softc {int ic_buflen; int ic_dev; void* ic_buf; } ;
struct vmbus_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct vmbus_channel*,void*,int*,int *) ;
 int FUNC_3 (struct vmbus_ic_softc*,void*,int*,int ,int ) ;
 int FUNC_4 (struct vmbus_ic_softc*,struct vmbus_channel*,void*,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct vmbus_channel *VAR_4, void *VAR_5)
{
 struct vmbus_ic_softc *VAR_6 = VAR_5;
 struct vmbus_icmsg_hdr *VAR_7;
 int VAR_8, VAR_9;
 uint64_t VAR_10;
 void *VAR_11;




 VAR_11 = VAR_6->ic_buf;
 VAR_8 = VAR_6->ic_buflen;
 VAR_9 = FUNC_2(VAR_4, VAR_11, &VAR_8, &VAR_10);
 FUNC_0(VAR_9 != VAR_0, ("icbuf is not large enough"));
 if (VAR_9)
  return;

 if (VAR_8 < sizeof(*VAR_7)) {
  FUNC_1(VAR_6->ic_dev, "invalid data len %d\n", VAR_8);
  return;
 }
 VAR_7 = VAR_11;




 switch (VAR_7->ic_type) {
 case 128:
  VAR_9 = FUNC_3(VAR_6, VAR_11, &VAR_8,
      VAR_1, VAR_2);
  if (VAR_9)
   return;
  break;

 case 129:

  if (VAR_8 < VAR_3) {
   FUNC_1(VAR_6->ic_dev, "invalid heartbeat len %d\n",
       VAR_8);
   return;
  }
  ((struct vmbus_icmsg_heartbeat *)VAR_11)->ic_seq++;
  break;

 default:
  FUNC_1(VAR_6->ic_dev, "got 0x%08x icmsg\n", VAR_7->ic_type);
  break;
 }




 FUNC_4(VAR_6, VAR_4, VAR_11, VAR_8, VAR_10);
}

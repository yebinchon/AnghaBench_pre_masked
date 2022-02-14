
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmbus_icmsg_timesync4 {int ic_tsflags; int ic_sent_tc; int ic_hvtime; } ;
struct vmbus_icmsg_timesync {int ic_tsflags; int ic_hvtime; } ;
struct vmbus_icmsg_hdr {int ic_type; } ;
struct vmbus_ic_softc {int ic_buflen; int ic_dev; void* ic_buf; } ;
struct vmbus_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;


 int FUNC_1 (struct vmbus_ic_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vmbus_ic_softc*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct vmbus_channel*,void*,int*,int *) ;
 int FUNC_5 (struct vmbus_ic_softc*,void*,int*,int ,int ) ;
 int FUNC_6 (struct vmbus_ic_softc*,struct vmbus_channel*,void*,int,int ) ;
 int FUNC_7 (struct vmbus_ic_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct vmbus_channel *VAR_3, void *VAR_4)
{
 struct vmbus_ic_softc *VAR_5 = VAR_4;
 struct vmbus_icmsg_hdr *VAR_6;
 int VAR_7, VAR_8;
 uint64_t VAR_9;
 void *VAR_10;




 VAR_10 = VAR_5->ic_buf;
 VAR_7 = VAR_5->ic_buflen;
 VAR_8 = FUNC_4(VAR_3, VAR_10, &VAR_7, &VAR_9);
 FUNC_0(VAR_8 != VAR_0, ("icbuf is not large enough"));
 if (VAR_8)
  return;

 if (VAR_7 < sizeof(*VAR_6)) {
  FUNC_3(VAR_5->ic_dev, "invalid data len %d\n", VAR_7);
  return;
 }
 VAR_6 = VAR_10;




 switch (VAR_6->ic_type) {
 case 129:
  VAR_8 = FUNC_5(VAR_5, VAR_10, &VAR_7,
      VAR_1, VAR_2);
  if (VAR_8)
   return;
  if (FUNC_1(VAR_5))
   FUNC_3(VAR_5->ic_dev, "RTT\n");
  break;

 case 128:
  if (FUNC_2(VAR_5)) {
   const struct vmbus_icmsg_timesync4 *VAR_11;

   if (VAR_7 < sizeof(*VAR_11)) {
    FUNC_3(VAR_5->ic_dev, "invalid timesync4 "
        "len %d\n", VAR_7);
    return;
   }
   VAR_11 = VAR_10;
   FUNC_7(VAR_5, VAR_11->ic_hvtime, VAR_11->ic_sent_tc,
       VAR_11->ic_tsflags);
  } else {
   const struct vmbus_icmsg_timesync *VAR_12;

   if (VAR_7 < sizeof(*VAR_12)) {
    FUNC_3(VAR_5->ic_dev, "invalid timesync "
        "len %d\n", VAR_7);
    return;
   }
   VAR_12 = VAR_10;
   FUNC_7(VAR_5, VAR_12->ic_hvtime, 0, VAR_12->ic_tsflags);
  }
  break;

 default:
  FUNC_3(VAR_5->ic_dev, "got 0x%08x icmsg\n", VAR_6->ic_type);
  break;
 }




 FUNC_6(VAR_5, VAR_3, VAR_10, VAR_7, VAR_9);
}

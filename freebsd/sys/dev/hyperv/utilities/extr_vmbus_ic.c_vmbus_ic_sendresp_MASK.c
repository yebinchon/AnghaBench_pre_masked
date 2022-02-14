
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmbus_icmsg_hdr {int ic_flags; } ;
struct vmbus_ic_softc {int ic_dev; } ;
struct vmbus_channel {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct vmbus_channel*,int ,int ,void*,int,int ) ;

int
FUNC_3(struct vmbus_ic_softc *VAR_3, struct vmbus_channel *VAR_4,
    void *VAR_5, int VAR_6, uint64_t VAR_7)
{
 struct vmbus_icmsg_hdr *VAR_8;
 int VAR_9;

 FUNC_0(VAR_6 >= sizeof(*VAR_8), ("invalid data length %d", VAR_6));
 VAR_8 = VAR_5;

 VAR_8->ic_flags = VAR_2 | VAR_1;
 VAR_9 = FUNC_2(VAR_4, VAR_0, 0,
     VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  FUNC_1(VAR_3->ic_dev, "resp send failed: %d\n", VAR_9);
 return (VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmbus_chan_callback_t ;
struct vmbus_ic_softc {int ic_buf; int ic_buflen; int ic_dev; } ;
struct vmbus_channel {int dummy; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct vmbus_ic_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int VAR_7 ;
 struct vmbus_ic_softc* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct vmbus_channel*,int ,int ,int *,int ,int ,struct vmbus_ic_softc*) ;
 int FUNC_8 (struct vmbus_channel*,int) ;
 struct vmbus_channel* FUNC_9 (int ) ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_10(device_t VAR_10, vmbus_chan_callback_t VAR_11)
{
 struct vmbus_ic_softc *VAR_12 = FUNC_2(VAR_10);
 struct vmbus_channel *VAR_13 = FUNC_9(VAR_10);
 struct sysctl_oid_list *VAR_14;
 struct sysctl_ctx_list *VAR_15;
 int VAR_16;

 VAR_12->ic_dev = VAR_10;
 VAR_12->ic_buflen = VAR_7;
 VAR_12->ic_buf = FUNC_6(VAR_7, VAR_3, VAR_4 | VAR_5);
 FUNC_8(VAR_13, 0);

 VAR_16 = FUNC_7(VAR_13, VAR_7, VAR_7, ((void*)0), 0,
     VAR_11, VAR_12);
 if (VAR_16) {
  FUNC_5(VAR_12->ic_buf, VAR_3);
  return (VAR_16);
 }

 VAR_15 = FUNC_3(VAR_10);
 VAR_14 = FUNC_1(FUNC_4(VAR_10));
 FUNC_0(VAR_15, VAR_14, VAR_6, "fw_version",
     VAR_2 | VAR_1 | VAR_0, VAR_12, 0,
     VAR_8, "A", "framework version");
 FUNC_0(VAR_15, VAR_14, VAR_6, "msg_version",
     VAR_2 | VAR_1 | VAR_0, VAR_12, 0,
     VAR_9, "A", "message version");

 return (0);
}

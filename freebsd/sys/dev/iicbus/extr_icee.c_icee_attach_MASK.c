
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct icee_softc {scalar_t__ size; scalar_t__ type; scalar_t__ wr_sz; TYPE_1__* cdev; int dev; int addr; } ;
typedef int device_t ;
struct TYPE_2__ {struct icee_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,scalar_t__*,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct icee_softc* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,scalar_t__,scalar_t__,...) ;
 int VAR_7 ;
 int FUNC_7 (struct icee_softc*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int *,int ,int ,int ,int,char*,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8)
{
 struct icee_softc *VAR_9 = FUNC_2(VAR_8);
 struct sysctl_ctx_list *VAR_10;
 struct sysctl_oid_list *VAR_11;

 VAR_9->dev = VAR_8;
 VAR_9->addr = FUNC_8(VAR_8);
 FUNC_7(VAR_9);
 if (VAR_9->size == 0 || VAR_9->type == 0 || VAR_9->wr_sz == 0) {
  FUNC_6(VAR_9->dev, "Missing config data, "
      "these cannot be zero: size %d type %d wr_sz %d\n",
      VAR_9->size, VAR_9->type, VAR_9->wr_sz);
  return (VAR_1);
 }
 if (VAR_6)
  FUNC_6(VAR_8, "size: %d bytes, addressing: %d-bits\n",
      VAR_9->size, VAR_9->type);
 VAR_9->cdev = FUNC_9(&VAR_7, FUNC_5(VAR_8), VAR_5,
     VAR_3, 0600, "icee%d", FUNC_5(VAR_8));
 if (VAR_9->cdev == ((void*)0)) {
  return (VAR_2);
 }
 VAR_9->cdev->si_drv1 = VAR_9;

 VAR_10 = FUNC_3(VAR_8);
 VAR_11 = FUNC_1(FUNC_4(VAR_8));
 FUNC_0(VAR_10, VAR_11, VAR_4, "address_size", VAR_0,
     &VAR_9->type, 0, "Memory array address size in bits");
 FUNC_0(VAR_10, VAR_11, VAR_4, "device_size", VAR_0,
     &VAR_9->size, 0, "Memory array capacity in bytes");
 FUNC_0(VAR_10, VAR_11, VAR_4, "write_size", VAR_0,
     &VAR_9->wr_sz, 0, "Memory array page write size in bytes");

 return (0);
}

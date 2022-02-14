
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct vport_parms {int name; } ;
struct vport {scalar_t__ port_no; int dp; } ;
struct netdev_vport {TYPE_1__* dev; } ;
struct internal_dev {struct vport* vport; } ;
struct TYPE_8__ {int features; } ;


 int VAR_0 ;
 struct vport* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vport*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct vport*) ;
 TYPE_1__* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 struct internal_dev* FUNC_7 (TYPE_1__*) ;
 struct netdev_vport* FUNC_8 (struct vport*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 struct vport* FUNC_11 (int,int *,struct vport_parms const*) ;
 int FUNC_12 (struct vport*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static struct vport *FUNC_16(const struct vport_parms *VAR_5)
{
 struct vport *VAR_6;
 struct netdev_vport *VAR_7;
 struct internal_dev *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_11(sizeof(struct netdev_vport),
    &VAR_4, VAR_5);
 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_2(VAR_6);
  goto error;
 }

 VAR_7 = FUNC_8(VAR_6);

 VAR_7->dev = FUNC_3(sizeof(struct internal_dev),
      VAR_5->name, VAR_3);
 if (!VAR_7->dev) {
  VAR_9 = -VAR_0;
  goto error_free_vport;
 }

 FUNC_4(VAR_7->dev, FUNC_10(VAR_6->dp));
 VAR_8 = FUNC_7(VAR_7->dev);
 VAR_8->vport = VAR_6;


 if (VAR_6->port_no == VAR_2)
  VAR_7->dev->features |= VAR_1;

 FUNC_14();
 VAR_9 = FUNC_13(VAR_7->dev);
 if (VAR_9)
  goto error_free_netdev;

 FUNC_5(VAR_7->dev, 1);
 FUNC_15();
 FUNC_9(VAR_7->dev);

 return VAR_6;

error_free_netdev:
 FUNC_15();
 FUNC_6(VAR_7->dev);
error_free_vport:
 FUNC_12(VAR_6);
error:
 return FUNC_0(VAR_9);
}

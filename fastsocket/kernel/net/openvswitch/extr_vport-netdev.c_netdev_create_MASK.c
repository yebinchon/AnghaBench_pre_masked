
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vport_parms {int name; } ;
struct vport {int dp; } ;
struct netdev_vport {TYPE_1__* dev; } ;
struct TYPE_5__ {int flags; scalar_t__ type; int priv_flags; struct vport* ax25_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vport* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct vport*) ;
 int FUNC_2 (struct vport*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 struct netdev_vport* FUNC_7 (struct vport*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct vport* FUNC_10 (int,int *,struct vport_parms const*) ;
 int FUNC_11 (struct vport*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static struct vport *FUNC_14(const struct vport_parms *VAR_10)
{
 struct vport *VAR_11;
 struct netdev_vport *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_10(sizeof(struct netdev_vport),
    &VAR_9, VAR_10);
 if (FUNC_1(VAR_11)) {
  VAR_13 = FUNC_2(VAR_11);
  goto error;
 }

 VAR_12 = FUNC_7(VAR_11);

 VAR_12->dev = FUNC_4(FUNC_8(VAR_11->dp), VAR_10->name);
 if (!VAR_12->dev) {
  VAR_13 = -VAR_3;
  goto error_free_vport;
 }

 if (VAR_12->dev->flags & VAR_4 ||
     VAR_12->dev->type != VAR_0 ||
     FUNC_9(VAR_12->dev)) {
  VAR_13 = -VAR_2;
  goto error_put;
 }

 VAR_13 = -VAR_1;
 FUNC_12();
 if (VAR_12->dev->ax25_ptr)
  goto error_unlock;

 VAR_12->dev->ax25_ptr = VAR_11;

 FUNC_3(&VAR_6);
 VAR_7 = VAR_8;

 FUNC_6(VAR_12->dev, 1);
 VAR_12->dev->priv_flags |= VAR_5;
 FUNC_13();

 return VAR_11;

error_unlock:
 FUNC_13();
error_put:
 FUNC_5(VAR_12->dev);
error_free_vport:
 FUNC_11(VAR_11);
error:
 return FUNC_0(VAR_13);
}

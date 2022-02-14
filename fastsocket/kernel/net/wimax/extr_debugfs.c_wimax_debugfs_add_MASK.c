
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wimax_dev {struct dentry* debugfs_dentry; struct net_device* net_dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {char* name; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int ,struct dentry*) ;
 int VAR_1 ;
 struct dentry* FUNC_3 (char*,int *) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_7 ;

int FUNC_7(struct wimax_dev *VAR_8)
{
 int VAR_9;
 struct net_device *VAR_10 = VAR_8->net_dev;
 struct device *VAR_11 = VAR_10->dev.parent;
 struct dentry *VAR_12;
 char VAR_13[128];

 FUNC_6(VAR_13, sizeof(VAR_13), "wimax:%s", VAR_10->name);
 VAR_12 = FUNC_3(VAR_13, ((void*)0));
 VAR_9 = FUNC_1(VAR_12);
 if (FUNC_0(VAR_12)) {
  if (VAR_9 == -VAR_0)
   VAR_9 = 0;
  else
   FUNC_5(VAR_11, "Can't create debugfs dentry: %d\n",
    VAR_9);
  goto out;
 }
 VAR_8->debugfs_dentry = VAR_12;
 FUNC_2("wimax_dl_", VAR_1, VAR_12);
 FUNC_2("wimax_dl_", VAR_2, VAR_12);
 FUNC_2("wimax_dl_", VAR_3, VAR_12);
 FUNC_2("wimax_dl_", VAR_4, VAR_12);
 FUNC_2("wimax_dl_", VAR_5, VAR_12);
 FUNC_2("wimax_dl_", VAR_6, VAR_12);
 FUNC_2("wimax_dl_", VAR_7, VAR_12);
 VAR_9 = 0;
out:
 return VAR_9;

error:
 FUNC_4(VAR_8->debugfs_dentry);
 return VAR_9;
}

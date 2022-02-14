
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct netprio_map {size_t* priomap; } ;
struct netdev_priomap_info {int priomap; } ;
struct net_device {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int dummy; } ;
struct TYPE_4__ {size_t prioidx; } ;
struct TYPE_3__ {struct netdev_priomap_info priomap_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct cgroup*) ;
 struct net_device* FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int ) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 struct netprio_map* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 size_t FUNC_9 (char*,char**,int) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct cgroup *VAR_5, struct cftype *VAR_6,
    const char *VAR_7)
{
 char *VAR_8 = FUNC_4(VAR_7, VAR_3);
 int VAR_9 = -VAR_0;
 u32 VAR_10 = FUNC_0(VAR_5)->prioidx;
 u32 VAR_11;
 char *VAR_12, *VAR_13;
 struct net_device *VAR_14;
 struct netprio_map *VAR_15;
 struct netdev_priomap_info *VAR_16;

 if (!VAR_8)
  return -VAR_2;




 if (FUNC_10(VAR_8) < 3)
  goto out_free_devname;

 VAR_12 = FUNC_11(VAR_8, " ");
 if (!VAR_12)
  goto out_free_devname;





 *VAR_12 = '\0';
 VAR_12++;





 if (*VAR_12 == '\0')
  goto out_free_devname;

 VAR_11 = FUNC_9(VAR_12, &VAR_13 , 10);
 if (*VAR_13 != ' ' && *VAR_13 != '\n' && *VAR_13 != '\0')
  goto out_free_devname;

 VAR_9 = -VAR_1;

 VAR_14 = FUNC_1(&VAR_4, VAR_8);
 if (!VAR_14)
  goto out_free_devname;

 VAR_9 = FUNC_12(VAR_14);
 if (VAR_9 < 0)
  goto out_put_dev;

 FUNC_7();
 VAR_16 = &FUNC_5(VAR_14)->priomap_data;
 VAR_15 = FUNC_6(VAR_16->priomap);
 if (VAR_15)
  VAR_15->priomap[VAR_10] = VAR_11;
 FUNC_8();

out_put_dev:
 FUNC_2(VAR_14);

out_free_devname:
 FUNC_3(VAR_8);
 return VAR_9;
}

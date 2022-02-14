
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netfront_info {unsigned long num_queues; TYPE_1__* txq; TYPE_2__* rxq; } ;
typedef int device_t ;
struct TYPE_4__ {int xen_intr_handle; } ;
struct TYPE_3__ {int xen_intr_handle; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct netfront_info*) ;
 int FUNC_2 (struct netfront_info*) ;
 int FUNC_3 (int ,struct netfront_info*,unsigned long) ;
 int FUNC_4 (int ,struct netfront_info*,unsigned long) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, struct netfront_info *VAR_1,
    unsigned long VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (VAR_1->txq)
  FUNC_2(VAR_1);

 if (VAR_1->rxq)
  FUNC_1(VAR_1);

 VAR_1->num_queues = 0;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != 0)
  goto out;
 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != 0)
  goto out;

 VAR_1->num_queues = VAR_2;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_1->rxq[VAR_4].xen_intr_handle = VAR_1->txq[VAR_4].xen_intr_handle;

 return (0);

out:
 FUNC_0(VAR_3 != 0, ("Error path taken without providing an error code"));
 return (VAR_3);
}

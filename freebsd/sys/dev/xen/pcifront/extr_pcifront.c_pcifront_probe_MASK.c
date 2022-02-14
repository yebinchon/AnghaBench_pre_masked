
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int dummy; } ;
struct pcifront_device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct pcifront_device* FUNC_1 (struct xenbus_device*) ;
 int FUNC_2 (struct pcifront_device*) ;
 int FUNC_3 (struct pcifront_device*) ;

__attribute__((used)) static int
FUNC_4(struct xenbus_device *VAR_0,
      const struct xenbus_device_id *VAR_1)
{
 int VAR_2 = 0;
 struct pcifront_device *VAR_3;

 FUNC_0("xenbus probing\n");

 if ((VAR_3 = FUNC_1(VAR_0)) == ((void*)0))
  goto out;

 VAR_2 = FUNC_2(VAR_3);

 out:
 if (VAR_2)
  FUNC_3(VAR_3);
 return VAR_2;
}

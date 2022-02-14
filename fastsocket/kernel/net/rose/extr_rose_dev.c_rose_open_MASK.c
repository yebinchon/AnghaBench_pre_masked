
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ dev_addr; } ;
typedef int rose_address ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1((rose_address *)VAR_0->dev_addr);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0);

 return 0;
}

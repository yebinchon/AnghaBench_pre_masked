
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {scalar_t__ data; int nodename; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct xenbus_device *VAR_0)
{
 FUNC_0("removing xenbus device node (%s)\n", VAR_0->nodename);
 if (VAR_0->data)
  FUNC_1(VAR_0->data);
 return 0;
}

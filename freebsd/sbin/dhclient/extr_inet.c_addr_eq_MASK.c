
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iaddr {scalar_t__ len; int iabuf; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(struct iaddr VAR_0, struct iaddr VAR_1)
{
 if (VAR_0 != VAR_1)
  return (0);
 return (FUNC_0(VAR_0, VAR_1, VAR_0) == 0);
}

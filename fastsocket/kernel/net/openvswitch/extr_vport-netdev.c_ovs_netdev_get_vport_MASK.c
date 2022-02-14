
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct net_device {int priv_flags; int ax25_ptr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

struct vport *FUNC_2(struct net_device *VAR_1)
{
 if (FUNC_0(VAR_1->priv_flags & VAR_0))
  return (struct vport *)
   FUNC_1(VAR_1->ax25_ptr);
 else
  return ((void*)0);
}

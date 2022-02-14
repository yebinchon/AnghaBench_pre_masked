
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct p2p_device *VAR_2,
       int VAR_3)
{
 switch (VAR_3) {
 case 0:
  VAR_2->flags &= ~(VAR_0 |
    VAR_1);
  break;
 case 1:
  VAR_2->flags |= VAR_0;
  VAR_2->flags &= ~VAR_1;
  break;
 case 2:
  VAR_2->flags |= VAR_0 |
   VAR_1;
  break;
 }
}

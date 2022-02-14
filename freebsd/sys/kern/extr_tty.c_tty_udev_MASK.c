
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {scalar_t__ t_dev; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

dev_t
FUNC_1(struct tty *VAR_1)
{

 if (VAR_1->t_dev)
  return (FUNC_0(VAR_1->t_dev));
 else
  return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_platform {int dummy; } ;


 struct bcm_platform VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

struct bcm_platform *
FUNC_1(void)
{
 if (!VAR_1)
  FUNC_0("platform data not available");

 return (&VAR_0);
}

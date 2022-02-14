
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshauthopt {int force_tun_device; } ;


 struct sshauthopt* FUNC_0 (int,int) ;

struct sshauthopt *
FUNC_1(void)
{
 struct sshauthopt *VAR_0;

 if ((VAR_0 = FUNC_0(1, sizeof(*VAR_0))) == ((void*)0))
  return ((void*)0);
 VAR_0->force_tun_device = -1;
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_priv_d {int np_refs; } ;


 int FUNC_0 () ;
 struct netmap_priv_d* FUNC_1 (int) ;

struct netmap_priv_d*
FUNC_2(void)
{
 struct netmap_priv_d *VAR_0;

 VAR_0 = FUNC_1(sizeof(struct netmap_priv_d));
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 VAR_0->np_refs = 1;
 FUNC_0();
 return VAR_0;
}

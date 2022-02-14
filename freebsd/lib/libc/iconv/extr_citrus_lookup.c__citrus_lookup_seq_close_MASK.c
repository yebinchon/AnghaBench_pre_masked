
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_lookup {int (* cl_close ) (struct _citrus_lookup*) ;struct _citrus_lookup* cl_key; } ;


 int FUNC_0 (struct _citrus_lookup*) ;
 int FUNC_1 (struct _citrus_lookup*) ;

void
FUNC_2(struct _citrus_lookup *VAR_0)
{

 FUNC_0(VAR_0->cl_key);
 (*VAR_0->cl_close)(VAR_0);
 FUNC_0(VAR_0);
}

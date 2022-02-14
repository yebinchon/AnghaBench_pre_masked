
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_lookup {int (* cl_num_entries ) (struct _citrus_lookup*) ;} ;


 int FUNC_0 (struct _citrus_lookup*) ;

int
FUNC_1(struct _citrus_lookup *VAR_0)
{

 return ((*VAR_0->cl_num_entries)(VAR_0));
}

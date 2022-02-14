
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_lookup {int (* cl_next ) (struct _citrus_lookup*,struct _region*,struct _region*) ;} ;


 int FUNC_0 (struct _citrus_lookup*,struct _region*,struct _region*) ;

int
FUNC_1(struct _citrus_lookup *VAR_0,
    struct _region *VAR_1, struct _region *VAR_2)
{

 return ((*VAR_0->cl_next)(VAR_0, VAR_1, VAR_2));
}

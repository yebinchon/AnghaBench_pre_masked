
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_lookup {int cl_rewind; scalar_t__ cl_keylen; int * cl_key; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct _citrus_lookup *VAR_0)
{

 VAR_0->cl_rewind = 1;
 FUNC_0(VAR_0->cl_key);
 VAR_0->cl_key = ((void*)0);
 VAR_0->cl_keylen = 0;
}

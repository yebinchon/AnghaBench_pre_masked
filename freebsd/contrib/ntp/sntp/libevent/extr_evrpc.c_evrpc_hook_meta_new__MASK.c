
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_hook_meta {int * evcon; int meta_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct evrpc_hook_meta* FUNC_2 (int) ;

__attribute__((used)) static struct evrpc_hook_meta *
FUNC_3(void)
{
 struct evrpc_hook_meta *VAR_0;
 VAR_0 = FUNC_2(sizeof(struct evrpc_hook_meta));
 FUNC_0(VAR_0 != ((void*)0));

 FUNC_1(&VAR_0->meta_data);
 VAR_0->evcon = ((void*)0);

 return (VAR_0);
}

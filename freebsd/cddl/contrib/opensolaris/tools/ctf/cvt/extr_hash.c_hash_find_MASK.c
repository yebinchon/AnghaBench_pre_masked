
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_data {void* hd_ret; void* hd_key; int hd_fun; int * hd_hash; } ;
typedef int hash_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int ,struct hash_data*) ;

int
FUNC_1(hash_t *VAR_1, void *VAR_2, void **VAR_3)
{
 int VAR_4;
 struct hash_data VAR_5;

 VAR_5.hd_hash = VAR_1;
 VAR_5.hd_fun = VAR_0;
 VAR_5.hd_key = VAR_2;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_5);
 if (VAR_4 && VAR_3)
  *VAR_3 = VAR_5.hd_ret;

 return (VAR_4);
}

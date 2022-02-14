
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_bridge {void* private_data; } ;
typedef void* (* bdg_update_private_data_fn_t ) (void*,void*,int*) ;


 int FUNC_0 (struct nm_bridge*) ;
 int FUNC_1 (struct nm_bridge*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct nm_bridge*,void*) ;
 struct nm_bridge* FUNC_5 (char const*,int ,int *) ;

int
FUNC_6(const char *VAR_2, bdg_update_private_data_fn_t VAR_3,
 void *VAR_4, void *VAR_5)
{
 void *VAR_6 = ((void*)0);
 struct nm_bridge *VAR_7;
 int VAR_8 = 0;

 FUNC_2();
 VAR_7 = FUNC_5(VAR_2, 0 , ((void*)0));
 if (!VAR_7) {
  VAR_8 = VAR_1;
  goto unlock_update_priv;
 }
 if (!FUNC_4(VAR_7, VAR_5)) {
  VAR_8 = VAR_0;
  goto unlock_update_priv;
 }
 FUNC_0(VAR_7);
 VAR_6 = VAR_3(VAR_7->private_data, VAR_4, &VAR_8);
 VAR_7->private_data = VAR_6;
 FUNC_1(VAR_7);

unlock_update_priv:
 FUNC_3();
 return VAR_8;
}

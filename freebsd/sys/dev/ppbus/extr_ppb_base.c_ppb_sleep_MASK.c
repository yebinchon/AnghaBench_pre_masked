
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {int ppc_lock; } ;
typedef int device_t ;


 struct ppb_data* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int,char const*,int) ;

int
FUNC_2(device_t VAR_0, void *VAR_1, int VAR_2, const char *VAR_3, int VAR_4)
{
 struct ppb_data *VAR_5 = FUNC_0(VAR_0);

 return (FUNC_1(VAR_1, VAR_5->ppc_lock, VAR_2, VAR_3, VAR_4));
}

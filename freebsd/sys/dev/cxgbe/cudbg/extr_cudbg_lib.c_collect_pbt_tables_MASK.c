
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_pbt_tables {int * pbt_data; int * lrf_table; int * pbt_static; int * pbt_dynamic; } ;
struct cudbg_init {int (* print ) (char*) ;scalar_t__ verbose; struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int size; scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct adapter*,int,int *) ;
 int FUNC_1 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_9(struct cudbg_init *VAR_7,
         struct cudbg_buffer *VAR_8,
         struct cudbg_error *VAR_9)
{
 struct cudbg_buffer VAR_10;
 struct adapter *VAR_11 = VAR_7->adap;
 struct cudbg_pbt_tables *VAR_12 = ((void*)0);
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = sizeof(struct cudbg_pbt_tables);
 VAR_10.size = VAR_13;

 VAR_16 = FUNC_2(VAR_8, VAR_10.size, &VAR_10);
 if (VAR_16)
  goto err;

 VAR_12 = (struct cudbg_pbt_tables *)VAR_10.data;


 VAR_14 = VAR_0;
 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_16 = FUNC_0(VAR_11, VAR_14 + (VAR_15 * 4), &VAR_12->pbt_dynamic[VAR_15]);
  if (VAR_16) {
   if (VAR_7->verbose)
    VAR_7->print("BUSY timeout reading"
      "CIM_HOST_ACC_CTRL\n");
   goto err1;
  }
 }




 VAR_14 = VAR_0 + (1 << 6);
 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_16 = FUNC_0(VAR_11, VAR_14 + (VAR_15 * 4), &VAR_12->pbt_static[VAR_15]);
  if (VAR_16) {
   if (VAR_7->verbose)
    VAR_7->print("BUSY timeout reading"
      "CIM_HOST_ACC_CTRL\n");
   goto err1;
  }
 }


 VAR_14 = VAR_2;
 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_16 = FUNC_0(VAR_11, VAR_14 + (VAR_15 * 4), &VAR_12->lrf_table[VAR_15]);
  if (VAR_16) {
   if (VAR_7->verbose)
    VAR_7->print("BUSY timeout reading"
      "CIM_HOST_ACC_CTRL\n");
   goto err1;
  }
 }


 VAR_14 = VAR_1;
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_16 = FUNC_0(VAR_11, VAR_14 + (VAR_15 * 4), &VAR_12->pbt_data[VAR_15]);
  if (VAR_16) {
   if (VAR_7->verbose)
    VAR_7->print("BUSY timeout reading"
      "CIM_HOST_ACC_CTRL\n");
   goto err1;
  }
 }

 VAR_16 = FUNC_8(&VAR_10, VAR_8);
 if (VAR_16)
  goto err1;

 VAR_16 = FUNC_1(&VAR_10, VAR_8);

err1:
 FUNC_3(&VAR_10, VAR_8);
err:
 return VAR_16;
}

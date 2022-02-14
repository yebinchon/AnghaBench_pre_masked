
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct struct_tp_la {scalar_t__ data; int mode; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int *,int *) ;
 int FUNC_6 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_7(struct cudbg_init *VAR_2,
    struct cudbg_buffer *VAR_3,
    struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6;
 struct struct_tp_la *VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;

 VAR_8 = sizeof(struct struct_tp_la) + VAR_1 * sizeof(u64);

 VAR_9 = FUNC_2(VAR_3, VAR_8, &VAR_6);
 if (VAR_9)
  goto err;

 VAR_7 = (struct struct_tp_la *) VAR_6.data;

 VAR_7->mode = FUNC_0(FUNC_4(VAR_5, VAR_0));
 FUNC_5(VAR_5, (u64 *)VAR_7->data, ((void*)0));

 VAR_9 = FUNC_6(&VAR_6, VAR_3);
 if (VAR_9)
  goto err1;

 VAR_9 = FUNC_1(&VAR_6, VAR_3);
err1:
 FUNC_3(&VAR_6, VAR_3);
err:
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,int *,int *) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_1,
       struct cudbg_buffer *VAR_2,
       struct cudbg_error *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adap;
 struct cudbg_buffer VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_0 * sizeof(u16);

 VAR_7 = FUNC_1(VAR_2, VAR_6, &VAR_5);
 if (VAR_7)
  goto err;

 FUNC_3(VAR_4, (u16 *)VAR_5.data, ((void*)0));

 VAR_7 = FUNC_4(&VAR_5, VAR_2);
 if (VAR_7)
  goto err1;

 VAR_7 = FUNC_0(&VAR_5, VAR_2);
err1:
 FUNC_2(&VAR_5, VAR_2);
err:
 return VAR_7;
}

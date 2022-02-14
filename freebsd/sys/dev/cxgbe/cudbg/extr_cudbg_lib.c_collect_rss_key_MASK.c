
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,int*,int) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_0,
      struct cudbg_buffer *VAR_1,
      struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_buffer VAR_4;
 u32 VAR_5;

 int VAR_6 = 0;

 VAR_5 = 10 * sizeof(u32);
 VAR_6 = FUNC_1(VAR_1, VAR_5, &VAR_4);
 if (VAR_6)
  goto err;

 FUNC_3(VAR_3, (u32 *)VAR_4.data, 1);

 VAR_6 = FUNC_4(&VAR_4, VAR_1);
 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_0(&VAR_4, VAR_1);
err1:
 FUNC_2(&VAR_4, VAR_1);
err:
 return VAR_6;
}

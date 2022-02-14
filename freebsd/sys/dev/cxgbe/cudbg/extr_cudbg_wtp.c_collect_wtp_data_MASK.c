
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int dummy; } ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_error*) ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_error*) ;

int FUNC_4(struct cudbg_init *VAR_0,
       struct cudbg_buffer *VAR_1,
       struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 int VAR_4 = -1;

 if (FUNC_0(VAR_3))
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 else if (FUNC_1(VAR_3))
  VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);

 return VAR_4;
}

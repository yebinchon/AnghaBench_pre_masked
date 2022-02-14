
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int size; scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,void*) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_2,
    struct cudbg_buffer *VAR_3,
    struct cudbg_error *VAR_4)
{
 struct cudbg_buffer VAR_5;
 struct adapter *VAR_6 = VAR_2->adap;
 u32 VAR_7;
 int VAR_8;

 VAR_7 = sizeof(u16) * VAR_1 * VAR_0;
 VAR_5.size = VAR_7;

 VAR_8 = FUNC_1(VAR_3, VAR_5.size, &VAR_5);
 if (VAR_8)
  goto err;

 FUNC_3(VAR_6, (void *)VAR_5.data);

 VAR_8 = FUNC_4(&VAR_5, VAR_3);
 if (VAR_8)
  goto err1;

 VAR_8 = FUNC_0(&VAR_5, VAR_3);

err1:
 FUNC_2(&VAR_5, VAR_3);
err:
 return VAR_8;
}

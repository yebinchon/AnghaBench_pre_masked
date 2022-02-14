
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tp_usm_stats {int dummy; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,struct tp_usm_stats*,int) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_0,
        struct cudbg_buffer *VAR_1,
        struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_buffer VAR_4;
 struct tp_usm_stats *VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_6 = sizeof(struct tp_usm_stats);

 VAR_7 = FUNC_1(VAR_1, VAR_6, &VAR_4);
 if (VAR_7)
  goto err;

 VAR_5 = (struct tp_usm_stats *) VAR_4.data;


 FUNC_3(VAR_3, VAR_5, 1);


 VAR_7 = FUNC_4(&VAR_4, VAR_1);
 if (VAR_7)
  goto err1;

 VAR_7 = FUNC_0(&VAR_4, VAR_1);

err1:
 FUNC_2(&VAR_4, VAR_1);
err:
 return VAR_7;
}

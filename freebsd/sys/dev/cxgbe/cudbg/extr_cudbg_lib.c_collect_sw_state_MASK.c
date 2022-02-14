
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sw_state {scalar_t__ os_type; int caller_string; int fw_state; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (int ,int,char*,char*) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_6(struct cudbg_init *VAR_1,
       struct cudbg_buffer *VAR_2,
       struct cudbg_error *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adap;
 struct cudbg_buffer VAR_5;
 struct sw_state *VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_7 = sizeof(struct sw_state);

 VAR_8 = FUNC_1(VAR_2, VAR_7, &VAR_5);
 if (VAR_8)
  goto err;

 VAR_6 = (struct sw_state *) VAR_5.data;

 VAR_6->fw_state = FUNC_4(VAR_4, VAR_0);
 FUNC_3(VAR_6->caller_string, sizeof(VAR_6->caller_string), "%s",
     "FreeBSD");
 VAR_6->os_type = 0;

 VAR_8 = FUNC_5(&VAR_5, VAR_2);
 if (VAR_8)
  goto err1;

 VAR_8 = FUNC_0(&VAR_5, VAR_2);

err1:
 FUNC_2(&VAR_5, VAR_2);
err:
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct struct_wc_stats {void* wr_cl_fail; void* wr_cl_success; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,void*,struct cudbg_buffer*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 void* FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_6(struct cudbg_init *VAR_2,
       struct cudbg_buffer *VAR_3,
       struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6;
 struct struct_wc_stats *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 int VAR_11 = 0;

 VAR_10 = sizeof(struct struct_wc_stats);

 VAR_11 = FUNC_1(VAR_3, VAR_10, &VAR_6);
 if (VAR_11)
  goto err;

 VAR_7 = (struct struct_wc_stats *) VAR_6.data;

 if (!FUNC_2(VAR_5)) {
  VAR_8 = FUNC_4(VAR_5, VAR_1);
  VAR_9 = FUNC_4(VAR_5, VAR_0);
  VAR_7->wr_cl_success = VAR_8 - VAR_9;
  VAR_7->wr_cl_fail = VAR_9;
 } else {
  VAR_7->wr_cl_success = 0;
  VAR_7->wr_cl_fail = 0;
 }

 VAR_11 = FUNC_5(&VAR_6, VAR_3);
 if (VAR_11)
  goto err1;

 VAR_11 = FUNC_0(&VAR_6, VAR_3);
err1:
 FUNC_3(&VAR_6, VAR_3);
err:
 return VAR_11;
}

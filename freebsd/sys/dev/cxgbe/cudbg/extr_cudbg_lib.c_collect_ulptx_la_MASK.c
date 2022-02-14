
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct struct_ulptx_la {void*** rd_data; void** rddata; void** wrptr; void** rdptr; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,size_t,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 void* FUNC_3 (struct adapter*,scalar_t__) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_5,
       struct cudbg_buffer *VAR_6,
       struct cudbg_error *VAR_7)
{
 struct adapter *VAR_8 = VAR_5->adap;
 struct cudbg_buffer VAR_9;
 struct struct_ulptx_la *VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_11 = sizeof(struct struct_ulptx_la);

 VAR_14 = FUNC_1(VAR_6, VAR_11, &VAR_9);
 if (VAR_14)
  goto err;

 VAR_10 = (struct struct_ulptx_la *) VAR_9.data;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_10->rdptr[VAR_12] = FUNC_3(VAR_8,
            VAR_1 +
            0x10 * VAR_12);
  VAR_10->wrptr[VAR_12] = FUNC_3(VAR_8,
            VAR_2 +
            0x10 * VAR_12);
  VAR_10->rddata[VAR_12] = FUNC_3(VAR_8,
             VAR_0 +
             0x10 * VAR_12);
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
   VAR_10->rd_data[VAR_12][VAR_13] =
    FUNC_3(VAR_8,
         VAR_0 + 0x10 * VAR_12);
  }
 }

 VAR_14 = FUNC_4(&VAR_9, VAR_6);
 if (VAR_14)
  goto err1;

 VAR_14 = FUNC_0(&VAR_9, VAR_6);

err1:
 FUNC_2(&VAR_9, VAR_6);
err:
 return VAR_14;

}

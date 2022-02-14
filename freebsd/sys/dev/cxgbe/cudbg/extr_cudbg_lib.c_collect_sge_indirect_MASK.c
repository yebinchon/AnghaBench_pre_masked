
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ireg_field {void* ireg_local_offset; void* ireg_offset_range; void* ireg_data; void* ireg_addr; } ;
struct ireg_buf {int* outbuf; struct ireg_field tp_pio; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int size; scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,void*,void*,int*,void*,void*) ;
 void*** VAR_0 ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_1,
    struct cudbg_buffer *VAR_2,
    struct cudbg_error *VAR_3)
{
 struct cudbg_buffer VAR_4;
 struct adapter *VAR_5 = VAR_1->adap;
 struct ireg_buf *VAR_6;
 u32 VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = sizeof(struct ireg_buf) * 2;
 VAR_4.size = VAR_7;

 VAR_9 = FUNC_1(VAR_2, VAR_4.size, &VAR_4);
 if (VAR_9)
  goto err;

 VAR_6 = (struct ireg_buf *)VAR_4.data;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  struct ireg_field *VAR_10 = &VAR_6->tp_pio;
  u32 *VAR_11 = VAR_6->outbuf;

  VAR_10->ireg_addr = VAR_0[VAR_8][0];
  VAR_10->ireg_data = VAR_0[VAR_8][1];
  VAR_10->ireg_local_offset = VAR_0[VAR_8][2];
  VAR_10->ireg_offset_range = VAR_0[VAR_8][3];

  FUNC_3(VAR_5,
    VAR_10->ireg_addr,
    VAR_10->ireg_data,
    VAR_11,
    VAR_10->ireg_offset_range,
    VAR_10->ireg_local_offset);

  VAR_6++;
 }

 VAR_9 = FUNC_4(&VAR_4, VAR_2);
 if (VAR_9)
  goto err1;

 VAR_9 = FUNC_0(&VAR_4, VAR_2);

err1:
 FUNC_2(&VAR_4, VAR_2);
err:
 return VAR_9;
}

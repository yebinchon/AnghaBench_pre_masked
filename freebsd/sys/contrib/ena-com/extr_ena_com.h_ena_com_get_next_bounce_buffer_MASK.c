
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ena_com_io_bounce_buffer_control {int buffer_size; int buffers_num; int next_to_use; int * base_buffer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u8 *FUNC_1(struct ena_com_io_bounce_buffer_control *VAR_0)
{
 u16 VAR_1, VAR_2;
 u8 *VAR_3;

 VAR_1 = VAR_0->buffer_size;
 VAR_2 = VAR_0->buffers_num;

 VAR_3 = VAR_0->base_buffer +
  (VAR_0->next_to_use++ & (VAR_2 - 1)) * VAR_1;

 FUNC_0(VAR_0->base_buffer +
  (VAR_0->next_to_use & (VAR_2 - 1)) * VAR_1);

 return VAR_3;
}

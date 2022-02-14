
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ring_buffer_per_cpu {int cpu; struct ring_buffer* buffer; } ;
struct ring_buffer_iter {scalar_t__ read_stamp; struct ring_buffer_per_cpu* cpu_buffer; } ;
struct ring_buffer_event {int type_len; scalar_t__ time_delta; } ;
struct ring_buffer {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ring_buffer_per_cpu*,int) ;




 int FUNC_2 (struct ring_buffer_iter*) ;
 int FUNC_3 (struct ring_buffer_iter*) ;
 struct ring_buffer_event* FUNC_4 (struct ring_buffer_iter*) ;
 int FUNC_5 (struct ring_buffer_event*) ;
 scalar_t__ FUNC_6 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_7 (struct ring_buffer_iter*) ;
 int FUNC_8 (struct ring_buffer*,int ,scalar_t__*) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_9(struct ring_buffer_iter *VAR_1, u64 *VAR_2)
{
 struct ring_buffer *VAR_3;
 struct ring_buffer_per_cpu *VAR_4;
 struct ring_buffer_event *VAR_5;
 int VAR_6 = 0;

 if (FUNC_7(VAR_1))
  return ((void*)0);

 VAR_4 = VAR_1->cpu_buffer;
 VAR_3 = VAR_4->buffer;

 again:
 if (FUNC_1(VAR_4, ++VAR_6 > VAR_0))
  return ((void*)0);

 if (FUNC_6(VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_4(VAR_1);

 switch (VAR_5->type_len) {
 case 130:
  if (FUNC_5(VAR_5)) {
   FUNC_3(VAR_1);
   goto again;
  }
  FUNC_2(VAR_1);
  return VAR_5;

 case 129:

  FUNC_2(VAR_1);
  goto again;

 case 128:

  FUNC_2(VAR_1);
  goto again;

 case 131:
  if (VAR_2) {
   *VAR_2 = VAR_1->read_stamp + VAR_5->time_delta;
   FUNC_8(VAR_3,
        VAR_4->cpu, VAR_2);
  }
  return VAR_5;

 default:
  FUNC_0();
 }

 return ((void*)0);
}

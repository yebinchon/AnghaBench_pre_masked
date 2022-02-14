
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ring_buffer_per_cpu {int cpu; int buffer; scalar_t__ read_stamp; } ;
struct ring_buffer_event {int type_len; scalar_t__ time_delta; } ;
struct buffer_page {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ring_buffer_per_cpu*,int) ;




 int FUNC_2 (struct ring_buffer_per_cpu*) ;
 struct buffer_page* FUNC_3 (struct ring_buffer_per_cpu*) ;
 int FUNC_4 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_5 (struct ring_buffer_per_cpu*) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_7(struct ring_buffer_per_cpu *VAR_1, u64 *VAR_2)
{
 struct ring_buffer_event *VAR_3;
 struct buffer_page *VAR_4;
 int VAR_5 = 0;

 again:






 if (FUNC_1(VAR_1, ++VAR_5 > VAR_0))
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_5(VAR_1);

 switch (VAR_3->type_len) {
 case 130:
  if (FUNC_4(VAR_3))
   FUNC_1(VAR_1, 1);
  return VAR_3;

 case 129:

  FUNC_2(VAR_1);
  goto again;

 case 128:

  FUNC_2(VAR_1);
  goto again;

 case 131:
  if (VAR_2) {
   *VAR_2 = VAR_1->read_stamp + VAR_3->time_delta;
   FUNC_6(VAR_1->buffer,
        VAR_1->cpu, VAR_2);
  }
  return VAR_3;

 default:
  FUNC_0();
 }

 return ((void*)0);
}

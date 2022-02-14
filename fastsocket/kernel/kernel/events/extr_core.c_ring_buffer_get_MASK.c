
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int refcount; } ;
struct perf_event {int rb; } ;


 int FUNC_0 (int *) ;
 struct ring_buffer* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct ring_buffer *FUNC_4(struct perf_event *VAR_0)
{
 struct ring_buffer *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0->rb);
 if (VAR_1) {
  if (!FUNC_0(&VAR_1->refcount))
   VAR_1 = ((void*)0);
 }
 FUNC_3();

 return VAR_1;
}

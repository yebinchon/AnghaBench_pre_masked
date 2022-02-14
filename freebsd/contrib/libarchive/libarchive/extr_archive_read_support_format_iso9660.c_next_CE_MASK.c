
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct read_ce_req {scalar_t__ offset; } ;
struct read_ce_queue {int cnt; struct read_ce_req* reqs; } ;



__attribute__((used)) static void
FUNC_0(struct read_ce_queue *VAR_0)
{
 uint64_t VAR_1, VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6;
 struct read_ce_req VAR_7;

 if (VAR_0->cnt < 1)
  return;




 VAR_0->reqs[0] = VAR_0->reqs[--(VAR_0->cnt)];




 VAR_4 = 0;
 VAR_1 = VAR_0->reqs[VAR_4].offset;
 for (;;) {
  VAR_5 = VAR_4 + VAR_4 + 1;
  if (VAR_5 >= VAR_0->cnt)
   return;
  VAR_2 = VAR_0->reqs[VAR_5].offset;
  VAR_6 = VAR_5 + 1;
  if (VAR_6 < VAR_0->cnt) {
   VAR_3 = VAR_0->reqs[VAR_6].offset;
   if (VAR_3 < VAR_2) {
    VAR_5 = VAR_6;
    VAR_2 = VAR_3;
   }
  }
  if (VAR_1 <= VAR_2)
   return;
  VAR_7 = VAR_0->reqs[VAR_4];
  VAR_0->reqs[VAR_4] = VAR_0->reqs[VAR_5];
  VAR_0->reqs[VAR_5] = VAR_7;
  VAR_4 = VAR_5;
 }
}

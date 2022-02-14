
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; } ;
struct trace_iterator {int * ent; TYPE_1__ seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;
 int FUNC_2 (struct trace_iterator*) ;

__attribute__((used)) static size_t
FUNC_3(size_t VAR_2, struct trace_iterator *VAR_3)
{
 size_t VAR_4;
 int VAR_5;


 for (;;) {
  VAR_4 = VAR_3->seq.len;
  VAR_5 = FUNC_1(VAR_3);
  VAR_4 = VAR_3->seq.len - VAR_4;
  if (VAR_2 < VAR_4) {
   VAR_2 = 0;
   VAR_3->seq.len -= VAR_4;
   break;
  }
  if (VAR_5 == VAR_1) {
   VAR_3->seq.len -= VAR_4;
   break;
  }

  if (VAR_5 != VAR_0)
   FUNC_2(VAR_3);
  VAR_2 -= VAR_4;
  if (!FUNC_0(VAR_3)) {
   VAR_2 = 0;
   VAR_3->ent = ((void*)0);
   break;
  }
 }

 return VAR_2;
}

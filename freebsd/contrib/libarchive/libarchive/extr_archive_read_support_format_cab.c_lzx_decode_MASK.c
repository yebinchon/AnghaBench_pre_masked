
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzx_stream {scalar_t__ avail_in; int total_in; int total_out; int next_out; scalar_t__ avail_out; struct lzx_dec* ds; } ;
struct lzx_dec {int error; scalar_t__ state; int br; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lzx_stream*,int *) ;
 int FUNC_1 (struct lzx_stream*,int) ;
 int FUNC_2 (struct lzx_stream*,int) ;

__attribute__((used)) static int
FUNC_3(struct lzx_stream *VAR_1, int VAR_2)
{
 struct lzx_dec *VAR_3 = VAR_1->ds;
 int64_t VAR_4;
 int VAR_5;

 if (VAR_3->error)
  return (VAR_3->error);

 VAR_4 = VAR_1->avail_in;
 FUNC_0(VAR_1, &(VAR_3->br));
 do {
  if (VAR_3->state < VAR_0)
   VAR_5 = FUNC_2(VAR_1, VAR_2);
  else {
   int64_t VAR_6 = VAR_1->avail_out;
   VAR_5 = FUNC_1(VAR_1, VAR_2);
   VAR_6 -= VAR_1->avail_out;
   VAR_1->next_out += VAR_6;
   VAR_1->total_out += VAR_6;
  }
 } while (VAR_5 == 100);
 VAR_1->total_in += VAR_4 - VAR_1->avail_in;
 return (VAR_5);
}

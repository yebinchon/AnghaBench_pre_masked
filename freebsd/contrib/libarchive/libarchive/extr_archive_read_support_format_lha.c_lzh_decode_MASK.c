
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzh_stream {int avail_in; int total_in; struct lzh_dec* ds; } ;
struct lzh_dec {int error; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lzh_stream*,int) ;
 int FUNC_1 (struct lzh_stream*,int) ;

__attribute__((used)) static int
FUNC_2(struct lzh_stream *VAR_1, int VAR_2)
{
 struct lzh_dec *VAR_3 = VAR_1->ds;
 int VAR_4;
 int VAR_5;

 if (VAR_3->error)
  return (VAR_3->error);

 VAR_4 = VAR_1->avail_in;
 do {
  if (VAR_3->state < VAR_0)
   VAR_5 = FUNC_1(VAR_1, VAR_2);
  else
   VAR_5 = FUNC_0(VAR_1, VAR_2);
 } while (VAR_5 == 100);
 VAR_1->total_in += VAR_4 - VAR_1->avail_in;
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct la_zstream {size_t avail_out; size_t avail_in; size_t next_out; size_t next_in; size_t total_in; size_t total_out; } ;
struct archive {int dummy; } ;
typedef enum la_zaction { ____Placeholder_la_zaction } la_zaction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,size_t,size_t) ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_3,
    struct la_zstream *VAR_4, enum la_zaction VAR_5)
{
 size_t VAR_6;

 (void)VAR_3;
 if (VAR_4->avail_out > VAR_4->avail_in)
  VAR_6 = VAR_4->avail_in;
 else
  VAR_6 = VAR_4->avail_out;
 if (VAR_6) {
  FUNC_0(VAR_4->next_out, VAR_4->next_in, VAR_6);
  VAR_4->next_in += VAR_6;
  VAR_4->avail_in -= VAR_6;
  VAR_4->total_in += VAR_6;
  VAR_4->next_out += VAR_6;
  VAR_4->avail_out -= VAR_6;
  VAR_4->total_out += VAR_6;
 }
 if (VAR_5 == VAR_2 && VAR_4->avail_in == 0)
  return (VAR_0);
 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct trace_seq {int buffer_size; int len; scalar_t__ buffer; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (scalar_t__,int,char const*,int ) ;

int
FUNC_3(struct trace_seq *VAR_0, const char *VAR_1, va_list VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);

 try_again:
 VAR_3 = (VAR_0->buffer_size - 1) - VAR_0->len;

 VAR_4 = FUNC_2(VAR_0->buffer + VAR_0->len, VAR_3, VAR_1, VAR_2);

 if (VAR_4 >= VAR_3) {
  FUNC_1(VAR_0);
  goto try_again;
 }

 VAR_0->len += VAR_4;

 return VAR_3;
}

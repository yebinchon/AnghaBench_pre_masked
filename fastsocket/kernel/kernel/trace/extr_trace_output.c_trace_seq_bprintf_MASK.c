
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int len; scalar_t__ buffer; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,char const*,int const*) ;

int FUNC_1(struct trace_seq *VAR_1, const char *VAR_2, const u32 *VAR_3)
{
 int VAR_4 = (VAR_0 - 1) - VAR_1->len;
 int VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_1->buffer + VAR_1->len, VAR_4, VAR_2, VAR_3);


 if (VAR_5 >= VAR_4)
  return 0;

 VAR_1->len += VAR_5;

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {char* buffer; int len; } ;


 int FUNC_0 (struct trace_seq*,char*,char*,unsigned char const) ;
 int FUNC_1 (struct trace_seq*,int ) ;

const char *
FUNC_2(struct trace_seq *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 const char *VAR_4 = VAR_0->buffer + VAR_0->len;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, "%s%2.2x", VAR_3 == 0 ? "" : " ", VAR_1[VAR_3]);

 FUNC_1(VAR_0, 0);

 return VAR_4;
}

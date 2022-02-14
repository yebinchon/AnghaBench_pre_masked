
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (char*,int,char*,unsigned long) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct trace_seq*,char*,...) ;

enum print_line_t
FUNC_5(unsigned long long VAR_2, struct trace_seq *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2, 1000);

 char VAR_5[21];
 char VAR_6[5];
 int VAR_7, VAR_8;
 int VAR_9;

 FUNC_2(VAR_5, "%lu", (unsigned long) VAR_2);


 VAR_7 = FUNC_4(VAR_3, "%s", VAR_5);
 if (!VAR_7)
  return VAR_1;

 VAR_8 = FUNC_3(VAR_5);


 if (VAR_8 < 7) {
  FUNC_1(VAR_6, 8 - VAR_8, "%03lu", VAR_4);
  VAR_7 = FUNC_4(VAR_3, ".%s", VAR_6);
  if (!VAR_7)
   return VAR_1;
  VAR_8 += FUNC_3(VAR_6);
 }

 VAR_7 = FUNC_4(VAR_3, " us ");
 if (!VAR_7)
  return VAR_1;


 for (VAR_9 = VAR_8; VAR_9 < 7; VAR_9++) {
  VAR_7 = FUNC_4(VAR_3, " ");
  if (!VAR_7)
   return VAR_1;
 }
 return VAR_0;
}

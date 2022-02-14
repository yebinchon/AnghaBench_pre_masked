
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
typedef int pid_t ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct trace_seq*,char*,...) ;

__attribute__((used)) static enum print_line_t
FUNC_4(struct trace_seq *VAR_4, pid_t VAR_5)
{
 char VAR_6[VAR_0];

 char VAR_7[11];
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_2(VAR_5, VAR_6);
 VAR_6[7] = '\0';
 FUNC_0(VAR_7, "%d", VAR_5);


 VAR_10 = FUNC_1(VAR_6) + FUNC_1(VAR_7) + 1;

 if (VAR_10 < VAR_1)
  VAR_8 = VAR_1 - VAR_10;


 for (VAR_11 = 0; VAR_11 < VAR_8 / 2; VAR_11++) {
  VAR_9 = FUNC_3(VAR_4, " ");
  if (!VAR_9)
   return VAR_3;
 }

 VAR_9 = FUNC_3(VAR_4, "%s-%s", VAR_6, VAR_7);
 if (!VAR_9)
  return VAR_3;


 for (VAR_11 = 0; VAR_11 < VAR_8 - (VAR_8 / 2); VAR_11++) {
  VAR_9 = FUNC_3(VAR_4, " ");
  if (!VAR_9)
   return VAR_3;
 }
 return VAR_2;
}

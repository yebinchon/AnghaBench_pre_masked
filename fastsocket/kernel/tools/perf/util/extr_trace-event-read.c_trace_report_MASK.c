
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int VAR_6 ;
 int FUNC_4 (struct pevent*) ;
 int FUNC_5 (struct pevent*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (struct pevent*) ;
 int FUNC_8 (struct pevent*) ;
 int FUNC_9 (struct pevent*) ;
 int FUNC_10 (struct pevent*) ;
 int FUNC_11 (struct pevent*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (struct pevent*) ;
 char* FUNC_14 () ;
 struct pevent* FUNC_15 (char,int ) ;
 int VAR_7 ;

ssize_t FUNC_16(int VAR_8, struct pevent **VAR_9, bool VAR_10)
{
 char VAR_11[VAR_0];
 char VAR_12[] = { 23, 8, 68 };
 char *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 ssize_t VAR_17;

 VAR_1 = 1;
 VAR_7 = VAR_10;

 VAR_4 = VAR_8;

 FUNC_12(VAR_11, 3);
 if (FUNC_3(VAR_11, VAR_12, 3) != 0)
  FUNC_1("no trace data in the file");

 FUNC_12(VAR_11, 7);
 if (FUNC_3(VAR_11, "tracing", 7) != 0)
  FUNC_1("not a trace file (missing 'tracing' tag)");

 VAR_13 = FUNC_14();
 if (VAR_14)
  FUNC_6("version = %s\n", VAR_13);
 FUNC_2(VAR_13);

 FUNC_12(VAR_11, 1);
 VAR_2 = VAR_11[0];
 VAR_3 = FUNC_0();

 *VAR_9 = FUNC_15(VAR_2, VAR_3);
 if (*VAR_9 == ((void*)0))
  FUNC_1("read_trace_init failed");

 FUNC_12(VAR_11, 1);
 VAR_5 = VAR_11[0];

 VAR_6 = FUNC_7(*VAR_9);

 FUNC_11(*VAR_9);

 FUNC_9(*VAR_9);
 FUNC_8(*VAR_9);
 FUNC_13(*VAR_9);
 FUNC_10(*VAR_9);

 VAR_17 = VAR_1 - 1;
 VAR_1 = 0;
 VAR_7 = 0;

 if (VAR_15) {
  FUNC_4(*VAR_9);
  return VAR_17;
 }
 if (VAR_16) {
  FUNC_5(*VAR_9);
  return VAR_17;
 }

 return VAR_17;
}

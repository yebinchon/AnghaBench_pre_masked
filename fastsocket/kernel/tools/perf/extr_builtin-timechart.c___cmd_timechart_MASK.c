
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_tool {int ordered_samples; int sample; int exit; int fork; int comm; } ;
struct perf_session {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 double VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 int FUNC_1 (struct perf_session*) ;
 int FUNC_2 (struct perf_session*,char*) ;
 struct perf_session* FUNC_3 (int ,int ,int ,int,struct perf_tool*) ;
 int FUNC_4 (struct perf_session*,struct perf_tool*) ;
 int FUNC_5 (char*,double,char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_10)
{
 struct perf_tool VAR_11 = {
  .comm = VAR_6,
  .fork = VAR_8,
  .exit = VAR_7,
  .sample = VAR_9,
  .ordered_samples = 1,
 };
 struct perf_session *VAR_12 = FUNC_3(VAR_4, VAR_2,
        0, 0, &VAR_11);
 int VAR_13 = -VAR_0;

 if (VAR_12 == ((void*)0))
  return -VAR_1;

 if (!FUNC_2(VAR_12, "timechart record"))
  goto out_delete;

 VAR_13 = FUNC_4(VAR_12, &VAR_11);
 if (VAR_13)
  goto out_delete;

 FUNC_0();

 FUNC_6();

 FUNC_7(VAR_10);

 FUNC_5("Written %2.1f seconds of trace to %s.\n",
  (VAR_5 - VAR_3) / 1000000000.0, VAR_10);
out_delete:
 FUNC_1(VAR_12);
 return VAR_13;
}

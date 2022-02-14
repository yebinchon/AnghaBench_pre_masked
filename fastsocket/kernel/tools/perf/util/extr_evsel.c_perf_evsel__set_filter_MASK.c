
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int dummy; } ;


 int FUNC_0 (struct perf_evsel*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,char const*) ;

int FUNC_2(struct perf_evsel *VAR_1, int VAR_2, int VAR_3,
      const char *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   int VAR_7 = FUNC_0(VAR_1, VAR_5, VAR_6),
       VAR_8 = FUNC_1(VAR_7, VAR_0, VAR_4);

   if (VAR_8)
    return VAR_8;
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct perf_evsel*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct perf_evsel *VAR_3)
{
 if (FUNC_0(VAR_3, VAR_0, VAR_1) ||
     FUNC_0(VAR_3, VAR_0, VAR_2))
  return 1;

 return 0;
}

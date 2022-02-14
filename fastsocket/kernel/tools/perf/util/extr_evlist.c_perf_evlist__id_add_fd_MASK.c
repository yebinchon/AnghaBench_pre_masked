
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int read_format; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct perf_evlist {int dummy; } ;
typedef int read_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_evlist*,struct perf_evsel*,int,int,int ) ;
 int FUNC_1 (int,int **,int) ;

__attribute__((used)) static int FUNC_2(struct perf_evlist *VAR_3,
      struct perf_evsel *VAR_4,
      int VAR_5, int VAR_6, int VAR_7)
{
 u64 VAR_8[4] = { 0, };
 int VAR_9 = 1;

 if (!(VAR_4->attr.read_format & VAR_0) ||
     FUNC_1(VAR_7, &VAR_8, sizeof(VAR_8)) == -1)
  return -1;

 if (VAR_4->attr.read_format & VAR_1)
  ++VAR_9;
 if (VAR_4->attr.read_format & VAR_2)
  ++VAR_9;

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8[VAR_9]);
 return 0;
}

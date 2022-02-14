
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target; } ;
struct trace {int host; TYPE_1__ opts; } ;
struct perf_evlist {int threads; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct trace *VAR_2, struct perf_evlist *VAR_3)
{
 int VAR_4 = FUNC_6();

 if (VAR_4)
  return VAR_4;

 FUNC_1(&VAR_2->host, "", VAR_0);
 FUNC_0(&VAR_2->host);

 if (FUNC_4(&VAR_2->opts.target)) {
  VAR_4 = FUNC_2(((void*)0), VAR_3->threads,
       VAR_1,
       &VAR_2->host);
 } else {
  VAR_4 = FUNC_3(((void*)0), VAR_1,
           &VAR_2->host);
 }

 if (VAR_4)
  FUNC_5();

 return VAR_4;
}

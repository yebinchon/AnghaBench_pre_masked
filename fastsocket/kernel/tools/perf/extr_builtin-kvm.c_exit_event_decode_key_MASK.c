
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {int dummy; } ;
struct event_key {int key; } ;


 char* FUNC_0 (struct perf_kvm_stat*,int ) ;
 int FUNC_1 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_2(struct perf_kvm_stat *VAR_0,
      struct event_key *VAR_1,
      char VAR_2[20])
{
 const char *VAR_3 = FUNC_0(VAR_0, VAR_1->key);

 FUNC_1(VAR_2, 20, "%s", VAR_3);
}

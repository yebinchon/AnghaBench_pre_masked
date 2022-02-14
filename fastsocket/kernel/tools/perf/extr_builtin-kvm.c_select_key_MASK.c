
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_kvm_stat {int sort_key; int compare; } ;
struct TYPE_2__ {int key; scalar_t__ name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_2(struct perf_kvm_stat *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
  if (!FUNC_1(VAR_0[VAR_2].name, VAR_1->sort_key)) {
   VAR_1->compare = VAR_0[VAR_2].key;
   return 1;
  }
 }

 FUNC_0("Unknown compare key:%s\n", VAR_1->sort_key);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k_dir_id; int k_objectid; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;


 char* FUNC_0 (struct cpu_key*) ;
 char* FUNC_1 (struct cpu_key*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, struct cpu_key *VAR_1)
{
 if (VAR_1)
  FUNC_2(VAR_0, "[%d %d %s %s]", VAR_1->on_disk_key.k_dir_id,
   VAR_1->on_disk_key.k_objectid, FUNC_1(VAR_1),
   FUNC_0(VAR_1));
 else
  FUNC_2(VAR_0, "[NULL]");
}

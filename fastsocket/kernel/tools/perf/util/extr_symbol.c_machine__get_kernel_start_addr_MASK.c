
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct process_args {int start; } ;
struct machine {char* root_dir; } ;
struct TYPE_2__ {scalar_t__ default_guest_kallsyms; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct process_args*,int ) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 scalar_t__ FUNC_2 (struct machine*) ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static u64 FUNC_5(struct machine *VAR_3)
{
 const char *VAR_4;
 char VAR_5[VAR_0];
 struct process_args VAR_6;

 if (FUNC_2(VAR_3)) {
  VAR_4 = "/proc/kallsyms";
 } else {
  if (FUNC_1(VAR_3))
   VAR_4 = (char *)VAR_2.default_guest_kallsyms;
  else {
   FUNC_3(VAR_5, "%s/proc/kallsyms", VAR_3->root_dir);
   VAR_4 = VAR_5;
  }
 }

 if (FUNC_4(VAR_4, "/proc/kallsyms"))
  return 0;

 if (FUNC_0(VAR_4, &VAR_6, VAR_1) <= 0)
  return 0;

 return VAR_6.start;
}

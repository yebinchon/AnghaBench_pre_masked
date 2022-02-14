
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_entry {TYPE_2__* branch_info; } ;
struct TYPE_3__ {scalar_t__ mispred; scalar_t__ predicted; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;


 int FUNC_0 (char*,size_t,char*,unsigned int,char const*) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, char *VAR_1,
        size_t VAR_2, unsigned int VAR_3){
 static const char *VAR_4 = "N/A";

 if (VAR_0->branch_info->flags.predicted)
  VAR_4 = "N";
 else if (VAR_0->branch_info->flags.mispred)
  VAR_4 = "Y";

 return FUNC_0(VAR_1, VAR_2, "%-*s", VAR_3, VAR_4);
}

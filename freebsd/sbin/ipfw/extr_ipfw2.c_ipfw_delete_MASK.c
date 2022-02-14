
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rt ;
struct TYPE_5__ {int set; int start_rule; int end_rule; scalar_t__ new_set; int flags; } ;
typedef TYPE_1__ ipfw_range_tlv ;
struct TYPE_6__ {int use_set; int do_dynamic; scalar_t__ do_force; scalar_t__ do_quiet; scalar_t__ do_pipe; scalar_t__ do_nat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 TYPE_4__ VAR_9 ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,int,...) ;

void
FUNC_12(char *VAR_10[])
{
 ipfw_range_tlv VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = VAR_1;
 int VAR_16 = 0;

 VAR_10++;
 FUNC_0("missing rule specification");
 if ( *VAR_10 && FUNC_1(*VAR_10, "set") == 0) {



  if (VAR_9.use_set)
   FUNC_4(VAR_0, "invalid syntax");
  VAR_16 = 1;
  VAR_10++;
 }


 while (*VAR_10 && FUNC_7(**VAR_10)) {
  VAR_13 = FUNC_9(*VAR_10, &VAR_12, 10);
  VAR_14 = VAR_13;
  if (*VAR_12== '-')
   VAR_14 = FUNC_9(VAR_12 + 1, ((void*)0), 10);
  VAR_10++;
  if (VAR_9.do_nat) {
   VAR_15 = FUNC_2(VAR_7, &VAR_13, sizeof VAR_13);
   if (VAR_15) {
    VAR_15 = VAR_2;
    if (VAR_9.do_quiet)
     continue;
    FUNC_10("nat %u not available", VAR_13);
   }
  } else if (VAR_9.do_pipe) {
   VAR_15 = FUNC_6(VAR_9.do_pipe, VAR_13);
  } else {
   FUNC_8(&VAR_11, 0, sizeof(VAR_11));
   if (VAR_16 != 0) {
    VAR_11.set = VAR_13 & 31;
    VAR_11.flags = VAR_6;
   } else {
    VAR_11.start_rule = VAR_13 & 0xffff;
    VAR_11.end_rule = VAR_14 & 0xffff;
    if (VAR_11.start_rule == 0 && VAR_11.end_rule == 0)
     VAR_11.flags |= VAR_3;
    else
     VAR_11.flags |= VAR_5;
    if (VAR_9.use_set != 0) {
     VAR_11.set = VAR_9.use_set - 1;
     VAR_11.flags |= VAR_6;
    }
   }
   if (VAR_9.do_dynamic == 2)
    VAR_11.flags |= VAR_4;
   VAR_13 = FUNC_3(VAR_8, &VAR_11);
   if (VAR_13 != 0) {
    VAR_15 = VAR_2;
    if (VAR_9.do_quiet)
     continue;
    FUNC_10("rule %u: setsockopt(IP_FW_XDEL)",
        VAR_11.start_rule);
   } else if (VAR_11.new_set == 0 && VAR_16 == 0 &&
       VAR_9.do_dynamic != 2) {
    VAR_15 = VAR_2;
    if (VAR_9.do_quiet)
     continue;
    if (VAR_11.start_rule != VAR_11.end_rule)
     FUNC_11("no rules rules in %u-%u range",
         VAR_11.start_rule, VAR_11.end_rule);
    else
     FUNC_11("rule %u not found",
         VAR_11.start_rule);
   }
  }
 }
 if (VAR_15 != VAR_1 && VAR_9.do_force == 0)
  FUNC_5(VAR_15);
}

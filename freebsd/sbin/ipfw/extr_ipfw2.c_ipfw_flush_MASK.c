
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rt ;
struct TYPE_5__ {scalar_t__ set; int flags; } ;
typedef TYPE_1__ ipfw_range_tlv ;
struct TYPE_6__ {scalar_t__ use_set; scalar_t__ do_pipe; int do_quiet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char) ;

void
FUNC_9(int VAR_7)
{
 ipfw_range_tlv VAR_8;

 if (!VAR_7 && !VAR_4.do_quiet) {
  int VAR_9;

  FUNC_7("Are you sure? [yn] ");
  FUNC_4(VAR_6);
  do {
   VAR_9 = FUNC_8(FUNC_5(VAR_5));
   while (VAR_9 != '\n' && FUNC_5(VAR_5) != '\n')
    if (FUNC_3(VAR_5))
     return;
  } while (VAR_9 != 'Y' && VAR_9 != 'N');
  FUNC_7("\n");
  if (VAR_9 == 'N')
   return;
 }
 if (VAR_4.do_pipe) {
  FUNC_1();
  return;
 }

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 if (VAR_4.use_set != 0) {
  VAR_8.set = VAR_4.use_set - 1;
  VAR_8.flags = VAR_2;
 } else
  VAR_8.flags = VAR_1;
 if (FUNC_0(VAR_3, &VAR_8) != 0)
   FUNC_2(VAR_0, "setsockopt(IP_FW_XDEL)");
 if (!VAR_4.do_quiet)
  FUNC_7("Flushed all %s.\n", VAR_4.do_pipe ? "pipes" : "rules");
}

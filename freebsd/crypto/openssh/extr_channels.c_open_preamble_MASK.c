
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {int self; int local_maxpacket; int local_window; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ssh*,char const*) ;
 int FUNC_3 (struct ssh*,int ) ;
 int FUNC_4 (struct ssh*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ssh *VAR_1, const char *VAR_2, Channel *VAR_3, const char *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_4(VAR_1, VAR_0)) != 0 ||
     (VAR_5 = FUNC_2(VAR_1, VAR_4)) != 0 ||
     (VAR_5 = FUNC_3(VAR_1, VAR_3->self)) != 0 ||
     (VAR_5 = FUNC_3(VAR_1, VAR_3->local_window)) != 0 ||
     (VAR_5 = FUNC_3(VAR_1, VAR_3->local_maxpacket)) != 0) {
  FUNC_0("%s: channel %i: open: %s", VAR_2, VAR_3->self, FUNC_1(VAR_5));
 }
}

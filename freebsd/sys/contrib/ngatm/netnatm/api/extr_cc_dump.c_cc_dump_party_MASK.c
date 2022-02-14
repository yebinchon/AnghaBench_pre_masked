
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dump {int dummy; } ;
struct TYPE_2__ {int epref; int flag; } ;
struct ccparty {int state; TYPE_1__ epref; } ;


 int FUNC_0 (struct dump*,char*,char const*,struct ccparty const*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct dump *VAR_0, const struct ccparty *VAR_1, const char *VAR_2)
{

 FUNC_0(VAR_0, "%s  party(%p): %u.%u %s\n", VAR_2, VAR_1,
     VAR_1->epref.flag, VAR_1->epref.epref,
     FUNC_1(VAR_1->state));
}

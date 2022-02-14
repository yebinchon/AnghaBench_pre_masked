
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {char* user; scalar_t__ valid; } ;
typedef TYPE_1__ Authctxt ;


 struct ssh* VAR_0 ;
 int FUNC_0 (char*,char*,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (struct ssh*) ;

void
FUNC_4(Authctxt *VAR_1)
{
 struct ssh *VAR_2 = VAR_0;

 FUNC_0("maximum authentication attempts exceeded for "
     "%s%.100s from %.200s port %d ssh2",
     VAR_1->valid ? "" : "invalid user ",
     VAR_1->user,
     FUNC_2(VAR_2),
     FUNC_3(VAR_2));
 FUNC_1("Too many authentication failures");

}

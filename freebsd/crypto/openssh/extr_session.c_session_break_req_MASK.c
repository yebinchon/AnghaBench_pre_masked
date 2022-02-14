
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {int ptymaster; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct ssh *VAR_0, Session *VAR_1)
{

 FUNC_1();
 FUNC_0();

 if (VAR_1->ptymaster == -1 || FUNC_2(VAR_1->ptymaster, 0) < 0)
  return 0;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mountlist ;
struct TYPE_3__ {char* ml_hostname; char* ml_directory; struct TYPE_3__* ml_next; } ;




 scalar_t__ FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(mountlist VAR_3)
{
  if (VAR_3 == ((void*)0))
    return;
  if (FUNC_0(VAR_3->ml_hostname, VAR_1, VAR_0)) {
    switch (VAR_2) {
    case 129:
      FUNC_1("%s:%s\n", VAR_3->ml_hostname, VAR_3->ml_directory);
      break;
    case 128:
      FUNC_1("%s\n", VAR_3->ml_directory);
      break;
    default:
      FUNC_1("%s\n", VAR_3->ml_hostname);
      break;
    };
  }
  if (VAR_3->ml_next)
    FUNC_2(VAR_3->ml_next);
}

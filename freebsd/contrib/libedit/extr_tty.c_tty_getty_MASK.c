
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct termios {int dummy; } ;
struct TYPE_3__ {int el_infd; } ;
typedef TYPE_1__ EditLine ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct termios*) ;

__attribute__((used)) static int
FUNC_1(EditLine *VAR_2, struct termios *VAR_3)
{
 int VAR_4;
 while ((VAR_4 = FUNC_0(VAR_2->el_infd, VAR_3)) == -1 && VAR_1 == VAR_0)
  continue;
 return VAR_4;
}

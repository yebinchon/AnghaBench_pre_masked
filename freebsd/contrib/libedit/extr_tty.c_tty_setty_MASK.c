
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
 int FUNC_0 (int ,int,struct termios const*) ;

__attribute__((used)) static int
FUNC_1(EditLine *VAR_2, int VAR_3, const struct termios *VAR_4)
{
 int VAR_5;
 while ((VAR_5 = FUNC_0(VAR_2->el_infd, VAR_3, VAR_4)) == -1 && VAR_1 == VAR_0)
  continue;
 return VAR_5;
}

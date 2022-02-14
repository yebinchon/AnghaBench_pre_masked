
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct serial*,int) ;

__attribute__((used)) static int
FUNC_4 (struct serial *VAR_3, int VAR_4)
{
  int VAR_5;

  VAR_5 = FUNC_3 (VAR_3, VAR_4);

  if (VAR_2 > 0)
    FUNC_1 (VAR_5, VAR_1);

  if (VAR_5 >= 0)
    return VAR_5;

  if (VAR_5 == VAR_0)
    FUNC_0 ("Timeout reading from remote system.");

  FUNC_2 ("xmodem.c:readchar()");
}

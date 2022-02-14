
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcflag_t ;
struct termios {int dummy; } ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct termios*,int) ;
 int FUNC_1 (int *,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(EditLine *VAR_2, struct termios *VAR_3, int VAR_4)
{
 int VAR_5;
 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++) {
  tcflag_t *VAR_6 = FUNC_0(VAR_3, VAR_5);
  *VAR_6 = FUNC_1(VAR_2, *VAR_6, VAR_4, VAR_5);
 }
}

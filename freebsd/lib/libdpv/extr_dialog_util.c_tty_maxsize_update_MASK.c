
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct winsize {int dummy; } ;
struct termios {int dummy; } ;
struct TYPE_4__ {int ws_col; int ws_row; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,TYPE_1__*) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (void*,char,int) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int,struct termios*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_7 = VAR_2;
 struct termios VAR_8;

 if (VAR_6 == ((void*)0)) {
  if ((VAR_6 = FUNC_3(sizeof(struct winsize))) == ((void*)0))
   FUNC_0(VAR_0, "Out of memory?!");
  FUNC_4((void *)VAR_6, '\0', sizeof(struct winsize));
 }

 if (!FUNC_2(VAR_7))
  VAR_7 = FUNC_5("/dev/tty", VAR_1);
 if ((FUNC_6(VAR_7, &VAR_8) < 0) || (FUNC_1(VAR_7, VAR_3, VAR_6) < 0)) {
  VAR_6->ws_row = VAR_5;
  VAR_6->ws_col = VAR_4;
 }
}

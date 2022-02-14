
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_row; int ws_col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_1(int VAR_5)
{
 int VAR_6 = VAR_2;

 struct winsize VAR_7;

 VAR_4 &= ~(1 << (VAR_5 - 1));
 if (FUNC_0(0, VAR_0, (char *) &VAR_7) >= 0) {
  if (VAR_7.ws_row > 2) VAR_3 = VAR_7.ws_row - 2;
  if (VAR_7.ws_col > 8) VAR_1 = VAR_7.ws_col - 8;
 }
 VAR_2 = VAR_6;
}

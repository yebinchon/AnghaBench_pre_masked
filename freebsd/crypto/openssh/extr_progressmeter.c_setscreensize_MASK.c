
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {scalar_t__ ws_col; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct winsize*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct winsize VAR_5;

 if (FUNC_0(VAR_2, VAR_3, &VAR_5) != -1 &&
     VAR_5.ws_col != 0) {
  if (VAR_5.ws_col > VAR_1)
   VAR_4 = VAR_1;
  else
   VAR_4 = VAR_5.ws_col;
 } else
  VAR_4 = VAR_0;
 VAR_4 += 1;
}

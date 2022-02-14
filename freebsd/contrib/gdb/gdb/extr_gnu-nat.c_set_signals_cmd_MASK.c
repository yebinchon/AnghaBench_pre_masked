
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ want_signals; scalar_t__ traced; scalar_t__ task; } ;


 struct inf* FUNC_0 () ;
 int FUNC_1 (struct inf*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_0 ();

  VAR_2->want_signals = FUNC_2 (VAR_0, "set signals");

  if (VAR_2->task && VAR_2->want_signals != VAR_2->traced)

    FUNC_1 (VAR_2, VAR_2->want_signals);
}

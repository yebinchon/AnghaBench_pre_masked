
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int dummy; } ;


 int FUNC_0 (struct ui_browser*,int,char*) ;

__attribute__((used)) static void FUNC_1(struct ui_browser *VAR_0)
{
 FUNC_0(VAR_0, 4,
  "Events are being lost, check IO/CPU overload!\n\n"
  "You may want to run 'perf' using a RT scheduler policy:\n\n"
  " perf top -r 80\n\n"
  "Or reduce the sampling frequency.");
}

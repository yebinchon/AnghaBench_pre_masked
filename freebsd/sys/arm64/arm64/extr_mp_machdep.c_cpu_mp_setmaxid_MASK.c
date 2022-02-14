
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(void)
{
 int VAR_6;

 VAR_5 = 1;
 VAR_4 = 0;

 switch(VAR_1) {
 default:
  if (VAR_2)
   FUNC_4("No CPU data, limiting to 1 core\n");
  break;
 }

 if (FUNC_1("hw.ncpu", &VAR_6)) {
  if (VAR_6 > 0 && VAR_6 < VAR_5) {
   VAR_5 = VAR_6;
   VAR_4 = VAR_6 - 1;
  }
 }
}

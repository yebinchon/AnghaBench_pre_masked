
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_8 ;
 int FUNC_4 (char*,int,int) ;

void
FUNC_5(void)
{
 u_int VAR_9;


 VAR_7 = ((FUNC_1(VAR_8) >> 20) & 0xf) + 1;
 VAR_6 = ((FUNC_1(VAR_8) >> 12) & 0xf) + 1;

 if (VAR_4 && FUNC_0(VAR_5) == 0) {
  FUNC_4("%d watchpoints and %d breakpoints supported\n",
      VAR_7, VAR_6);
 }
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  FUNC_3(VAR_2, VAR_9, 0);
  FUNC_3(VAR_3, VAR_9, 0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  FUNC_3(VAR_0, VAR_9, 0);
  FUNC_3(VAR_1, VAR_9, 0);
 }

 FUNC_2();
}

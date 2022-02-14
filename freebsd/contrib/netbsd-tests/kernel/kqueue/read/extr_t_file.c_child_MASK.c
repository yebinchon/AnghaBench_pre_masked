
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_5, VAR_6, VAR_7;

 (void)FUNC_4(1);

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  VAR_7 = FUNC_3(VAR_1, VAR_4|VAR_3, 0644);
  if (VAR_7 < 0)
   FUNC_2(VAR_0, "open()");

  VAR_6 = FUNC_5(VAR_7, "foo\n", 4);
  if (VAR_6 < 0)
   FUNC_2(VAR_0, "write()");

  (void)FUNC_1(VAR_7);
  (void)FUNC_4(1);
 }
 FUNC_0(0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_1;

 FUNC_0();
 FUNC_2(VAR_0);
 VAR_1 = FUNC_3();
 FUNC_1();
 if (VAR_1)
  FUNC_4("NFSD: Failure reading reboot recovery data\n");
}

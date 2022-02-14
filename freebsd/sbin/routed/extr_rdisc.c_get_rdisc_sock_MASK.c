
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 if (VAR_3 < 0) {
  VAR_3 = FUNC_3(VAR_0, VAR_2, VAR_1);
  if (VAR_3 < 0)
   FUNC_0(1,"rdisc_sock = socket()");
  FUNC_2(VAR_3,"rdisc_sock");
  FUNC_1();
 }
}

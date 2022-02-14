
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_4;

 VAR_4 = FUNC_0(((void*)0), "%s -d -u %s%d", VAR_2, VAR_1, VAR_3);
 if (VAR_4 && VAR_0)
  FUNC_3("mdconfig (detach) exited %s %d (ignored)",
      FUNC_2(VAR_4), FUNC_1(VAR_4));
}

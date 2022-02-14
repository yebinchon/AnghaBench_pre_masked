
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ,char const*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(((void*)0), "%s%s /dev/%s%d", VAR_0, VAR_3, VAR_1, VAR_2);
 if (VAR_4)
  FUNC_0(1, "newfs exited %s %d", FUNC_3(VAR_4),
      FUNC_2(VAR_4));
}

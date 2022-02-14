
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int ,char const*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(((void*)0), "%s -t tmpfs %s tmp %s", VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(1, "tmpfs mount exited %s %d", FUNC_3(VAR_3),
      FUNC_2(VAR_3));
}

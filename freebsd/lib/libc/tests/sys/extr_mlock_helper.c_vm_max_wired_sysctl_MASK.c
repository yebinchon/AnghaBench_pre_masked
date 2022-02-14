
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,size_t*,int *,size_t) ;

__attribute__((used)) static void
FUNC_4(u_long *VAR_2, u_long *VAR_3)
{
 size_t VAR_4;
 size_t VAR_5 = (VAR_3 == ((void*)0) ? 0 : sizeof(*VAR_3));

 if (VAR_2 == ((void*)0))
  FUNC_1("Setting the new value to %lu\n", *VAR_3);
 else {
  FUNC_0(FUNC_3(VAR_0, ((void*)0), &VAR_4,
      VAR_3, VAR_5) == 0,
      "sysctlbyname(%s) failed: %s", VAR_0, FUNC_2(VAR_1));
 }

 FUNC_0(FUNC_3(VAR_0, VAR_2, &VAR_4,
     VAR_3, VAR_5) == 0,
     "sysctlbyname(%s) failed: %s", VAR_0, FUNC_2(VAR_1));

 if (VAR_2 != ((void*)0))
  FUNC_1("Saved the old value (%lu)\n", *VAR_2);
}

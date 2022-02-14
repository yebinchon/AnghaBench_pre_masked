
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef scalar_t__ mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_1 (int const*,char*,int ) ;
 scalar_t__ FUNC_2 (int const*,char*) ;

__attribute__((used)) static int
FUNC_3(const nvlist_t *VAR_6, const nvlist_t *VAR_7)
{

 if (VAR_6 != ((void*)0))
  return (VAR_0);

 VAR_3 = (int)FUNC_1(VAR_7, "flags", 0);
 VAR_2 = (int)FUNC_1(VAR_7, "operations", 0);
 if ((VAR_3 & VAR_1) != 0)
  VAR_4 = (mode_t)FUNC_2(VAR_7, "mode");
 else
  VAR_4 = 0;

 VAR_5 = FUNC_0(VAR_7, "cap_rights", ((void*)0), ((void*)0), 0);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ mode_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int *,int) ;
 int FUNC_1 (int *,char const* const) ;
 int FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const* const) ;

__attribute__((used)) static nvlist_t *
FUNC_6(int VAR_5, const char * const *VAR_6, int VAR_7,
    mode_t VAR_8, cap_rights_t *VAR_9, int VAR_10)
{
 nvlist_t *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_2);
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_11, "flags", VAR_7);
 FUNC_2(VAR_11, "operations", VAR_10);
 if (VAR_9 != ((void*)0)) {
  FUNC_0(VAR_11, "cap_rights", VAR_9,
      sizeof(*VAR_9));
 }
 if ((VAR_7 & VAR_3) != 0)
  FUNC_2(VAR_11, "mode", (uint64_t)VAR_8);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (FUNC_5(VAR_6[VAR_12]) >= VAR_1) {
   FUNC_4(VAR_11);
   VAR_4 = VAR_0;
   return (((void*)0));
  }
  FUNC_1(VAR_11, VAR_6[VAR_12]);
 }

 return (VAR_11);
}

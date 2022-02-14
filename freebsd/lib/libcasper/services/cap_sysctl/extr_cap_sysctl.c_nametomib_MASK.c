
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t) ;
 int FUNC_2 (int *,char*,int*,size_t) ;
 scalar_t__ FUNC_3 (int const*,char*) ;
 char* FUNC_4 (int const*,char*) ;
 int FUNC_5 (int const*,int const*) ;
 int FUNC_6 (char const*,int*,size_t*) ;

__attribute__((used)) static int
FUNC_7(const nvlist_t *VAR_3, const nvlist_t *VAR_4, nvlist_t *VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;
 int VAR_8, *VAR_9;

 if (!FUNC_5(VAR_3, VAR_4))
  return (VAR_1);

 VAR_6 = FUNC_4(VAR_4, "name");
 VAR_7 = (size_t)FUNC_3(VAR_4, "size");

 VAR_9 = FUNC_1(VAR_7 * sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_6(VAR_6, VAR_9, &VAR_7);
 if (VAR_8 != 0) {
  VAR_8 = VAR_2;
  FUNC_0(VAR_9);
  return (VAR_8);
 }

 FUNC_2(VAR_5, "mib", VAR_9, VAR_7 * sizeof(*VAR_9));

 return (0);
}

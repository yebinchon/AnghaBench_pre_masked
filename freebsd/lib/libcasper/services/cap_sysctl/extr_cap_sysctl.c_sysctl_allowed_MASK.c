
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (void*) ;
 int* FUNC_2 (int const*,char*,size_t*,int *,int ) ;
 char* FUNC_3 (int const*,char*,int *) ;
 scalar_t__ FUNC_4 (int const*,int const*,size_t) ;
 int FUNC_5 (int const*,char*) ;
 char* FUNC_6 (int const*,int*,void**) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 size_t FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_10(const nvlist_t *VAR_2, const nvlist_t *VAR_3)
{
 const nvlist_t *VAR_4;
 uint64_t VAR_5, VAR_6;
 const char *VAR_7, *VAR_8, *VAR_9;
 void *VAR_10;
 size_t VAR_11, VAR_12;
 const int *VAR_13, *VAR_14;
 int VAR_15;

 if (VAR_2 == ((void*)0))
  return (1);

 VAR_14 = FUNC_2(VAR_3, "mib", &VAR_12, ((void*)0), 0);
 VAR_9 = FUNC_3(VAR_3, "name", ((void*)0));
 VAR_6 = FUNC_5(VAR_3, "operation");

 VAR_10 = ((void*)0);
 while ((VAR_8 = FUNC_6(VAR_2, &VAR_15, &VAR_10)) != ((void*)0)) {
  FUNC_0(VAR_15 == VAR_1);

  VAR_4 = FUNC_1(VAR_10);
  VAR_5 = FUNC_5(VAR_4, "operation");
  if ((VAR_6 & VAR_5) != VAR_6)
   continue;

  if (VAR_9 != ((void*)0)) {
   VAR_7 = FUNC_3(VAR_4, "name", ((void*)0));
   if (VAR_7 == ((void*)0))
    continue;
   if ((VAR_5 & VAR_0) == 0) {
    if (FUNC_7(VAR_7, VAR_9) != 0)
     continue;
   } else {
    size_t VAR_16;

    VAR_16 = FUNC_8(VAR_7);
    if (FUNC_9(VAR_7, VAR_9, VAR_16) != 0)
     continue;
    if (VAR_9[VAR_16] != '.' &&
        VAR_9[VAR_16] != '\0')
     continue;
   }
  } else {
   VAR_13 = FUNC_2(VAR_4, "mib", &VAR_11, ((void*)0), 0);
   if (VAR_13 == ((void*)0))
    continue;
   if (VAR_11 > VAR_12 || ((VAR_5 & VAR_0) == 0 &&
       VAR_11 < VAR_12))
    continue;
   if (FUNC_4(VAR_13, VAR_14, VAR_11) != 0)
    continue;
  }

  return (1);
 }

 return (0);
}

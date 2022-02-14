
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,size_t) ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int const*,int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 void* FUNC_8 (int *,char*,size_t*) ;
 int FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,void*,size_t) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (int const*,size_t,void*,size_t*,void const*,size_t) ;
 int FUNC_14 (int const*,int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (char const*,void*,size_t*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_17(const char *VAR_6, const nvlist_t *VAR_7, nvlist_t *VAR_8,
    nvlist_t *VAR_9)
{
 const char *VAR_10;
 const void *VAR_11;
 const int *VAR_12;
 void *VAR_13;
 uint64_t VAR_14;
 size_t VAR_15, VAR_16, VAR_17;
 size_t *VAR_18;
 int VAR_19;

 if (FUNC_12(VAR_6, "sysctlnametomib") == 0)
  return (FUNC_3(VAR_7, VAR_8, VAR_9));

 if (FUNC_12(VAR_6, "sysctlbyname") != 0 && FUNC_12(VAR_6, "sysctl") != 0)
  return (VAR_2);
 VAR_19 = FUNC_15(VAR_8, 0);
 if (VAR_19 != 0)
  return (VAR_19);
 if (!FUNC_14(VAR_7, VAR_8))
  return (VAR_4);

 VAR_14 = FUNC_9(VAR_8, "operation");
 if ((VAR_14 & VAR_1) != 0) {
  if (!FUNC_5(VAR_8, "newp"))
   return (VAR_2);
  VAR_11 = FUNC_8(VAR_8, "newp", &VAR_16);
  FUNC_0(VAR_11 != ((void*)0) && VAR_16 > 0);
 } else {
  VAR_11 = ((void*)0);
  VAR_16 = 0;
 }

 if ((VAR_14 & VAR_0) != 0) {
  if (FUNC_6(VAR_8, "justsize")) {
   VAR_13 = ((void*)0);
   VAR_15 = 0;
   VAR_18 = &VAR_15;
  } else {
   if (!FUNC_7(VAR_8, "oldlen"))
    return (VAR_2);
   VAR_15 = (size_t)FUNC_9(VAR_8, "oldlen");
   if (VAR_15 == 0)
    return (VAR_2);
   VAR_13 = FUNC_1(1, VAR_15);
   if (VAR_13 == ((void*)0))
    return (VAR_3);
   VAR_18 = &VAR_15;
  }
 } else {
  VAR_13 = ((void*)0);
  VAR_15 = 0;
  VAR_18 = ((void*)0);
 }

 if (FUNC_12(VAR_6, "sysctlbyname") == 0) {
  VAR_10 = FUNC_10(VAR_8, "name");
  VAR_19 = FUNC_16(VAR_10, VAR_13, VAR_18, VAR_11, VAR_16);
 } else {
  VAR_12 = FUNC_8(VAR_8, "mib", &VAR_17);
  VAR_19 = FUNC_13(VAR_12, VAR_17 / sizeof(*VAR_12), VAR_13, VAR_18, VAR_11,
      VAR_16);
 }
 if (VAR_19 != 0) {
  VAR_19 = VAR_5;
  FUNC_2(VAR_13);
  return (VAR_19);
 }

 if ((VAR_14 & VAR_0) != 0) {
  if (FUNC_6(VAR_8, "justsize"))
   FUNC_4(VAR_9, "oldlen", (uint64_t)VAR_15);
  else
   FUNC_11(VAR_9, "oldp", VAR_13, VAR_15);
 }

 return (0);
}

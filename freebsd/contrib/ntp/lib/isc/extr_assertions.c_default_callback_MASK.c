
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;
typedef int isc_assertiontype_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (void*,char const**,unsigned long*) ;
 scalar_t__ FUNC_4 (void**,int,int*) ;
 int VAR_4 ;
 char* FUNC_5 (int ,int ,int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_6, int VAR_7, isc_assertiontype_t VAR_8,
   const char *VAR_9)
{
 void *VAR_10[VAR_0];
 int VAR_11, VAR_12;
 const char *VAR_13 = ".";
 const char *VAR_14;
 isc_result_t VAR_15;

 VAR_15 = FUNC_4(VAR_10, VAR_0, &VAR_12);
  if (VAR_15 == VAR_3 && VAR_12 > 0)
   VAR_13 = ", back trace";

 FUNC_1(VAR_5, "%s:%d: %s(%s) %s%s\n",
  VAR_6, VAR_7, FUNC_2(VAR_8), VAR_9,
  FUNC_5(VAR_4, VAR_1,
          VAR_2, "failed"), VAR_13);
 if (VAR_15 == VAR_3) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   unsigned long VAR_16;

   VAR_14 = ((void*)0);
   VAR_15 = FUNC_3(VAR_10[VAR_11], &VAR_14,
        &VAR_16);
   if (VAR_15 == VAR_3) {
    FUNC_1(VAR_5, "#%d %p in %s()+0x%lx\n", VAR_11,
     VAR_10[VAR_11], VAR_14, VAR_16);
   } else {
    FUNC_1(VAR_5, "#%d %p in ??\n", VAR_11,
     VAR_10[VAR_11]);
   }
  }
 }
 FUNC_0(VAR_5);
}

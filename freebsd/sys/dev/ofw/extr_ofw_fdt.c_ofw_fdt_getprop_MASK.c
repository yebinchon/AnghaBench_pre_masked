
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int ofw_t ;
typedef int cpuid ;


 int FUNC_0 (void const*,void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__,int,int*) ;
 void* FUNC_4 (scalar_t__,int,char const*,int*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (int,size_t) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (void*,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_12(ofw_t VAR_1, phandle_t VAR_2, const char *VAR_3, void *VAR_4,
    size_t VAR_5)
{
 const void *VAR_6;
 const char *VAR_7;
 int VAR_8, VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_8(VAR_2);
 if (VAR_9 < 0)
  return (-1);

 VAR_6 = FUNC_4(VAR_0, VAR_9, VAR_3, &VAR_8);

 if (VAR_6 == ((void*)0) && FUNC_10(VAR_3, "name") == 0) {

  VAR_7 = FUNC_3(VAR_0, VAR_9, &VAR_8);
  FUNC_11(VAR_4, VAR_7, VAR_5);
  return (VAR_8 + 1);
 }

 if (VAR_6 == ((void*)0) && VAR_9 == FUNC_7(VAR_0, "/chosen")) {
  if (FUNC_10(VAR_3, "fdtbootcpu") == 0) {
   VAR_10 = FUNC_1(FUNC_2(VAR_0));
   VAR_8 = sizeof(VAR_10);
   VAR_6 = &VAR_10;
  }
  if (FUNC_10(VAR_3, "fdtmemreserv") == 0) {
   VAR_6 = (char *)VAR_0 + FUNC_6(VAR_0);
   VAR_8 = sizeof(uint64_t)*2*FUNC_5(VAR_0);
  }
 }

 if (VAR_6 == ((void*)0))
  return (-1);

 FUNC_0(VAR_6, VAR_4, FUNC_9(VAR_8, VAR_5));

 return (VAR_8);
}

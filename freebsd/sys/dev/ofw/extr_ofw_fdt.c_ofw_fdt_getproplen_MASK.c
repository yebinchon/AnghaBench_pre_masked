
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int ofw_t ;
typedef int cell_t ;


 int FUNC_0 (int ,int,int*) ;
 void* FUNC_1 (int ,int,char const*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t
FUNC_6(ofw_t VAR_1, phandle_t VAR_2, const char *VAR_3)
{
 const void *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5 < 0)
  return (-1);

 VAR_6 = -1;
 VAR_4 = FUNC_1(VAR_0, VAR_5, VAR_3, &VAR_6);

 if (VAR_4 == ((void*)0) && FUNC_5(VAR_3, "name") == 0) {

  FUNC_0(VAR_0, VAR_5, &VAR_6);
  return (VAR_6 + 1);
 }

 if (VAR_4 == ((void*)0) && VAR_5 == FUNC_3(VAR_0, "/chosen")) {
  if (FUNC_5(VAR_3, "fdtbootcpu") == 0)
   return (sizeof(cell_t));
  if (FUNC_5(VAR_3, "fdtmemreserv") == 0)
   return (sizeof(uint64_t)*2*FUNC_2(VAR_0));
 }

 if (VAR_4 == ((void*)0))
  return (-1);

 return (VAR_6);
}

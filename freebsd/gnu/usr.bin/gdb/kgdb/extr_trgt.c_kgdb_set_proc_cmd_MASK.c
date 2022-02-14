
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthr {int tid; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 struct kthr* FUNC_4 (scalar_t__) ;
 struct kthr* FUNC_5 (int) ;
 int * VAR_0 ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_1, int VAR_2)
{
 CORE_ADDR VAR_3;
 struct kthr *VAR_4;

 if (!VAR_1)
  FUNC_2 ("proc address for the new context");

 if (VAR_0 == ((void*)0))
  FUNC_1 ("only supported for core file target");

 VAR_3 = (CORE_ADDR) FUNC_6 (VAR_1);

 if (!FUNC_0 (VAR_3)) {
  VAR_4 = FUNC_5((int)VAR_3);
  if (VAR_4 == ((void*)0))
   FUNC_1 ("invalid pid");
 } else {
  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4 == ((void*)0))
   FUNC_1("invalid proc address");
 }
 FUNC_3(VAR_4->tid);
}

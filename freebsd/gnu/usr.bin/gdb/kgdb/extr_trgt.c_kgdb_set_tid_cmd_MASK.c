
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthr {scalar_t__ tid; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 struct kthr* FUNC_4 (scalar_t__) ;
 int * VAR_0 ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_1, int VAR_2)
{
 CORE_ADDR VAR_3;
 struct kthr *VAR_4;

 if (!VAR_1)
  FUNC_2 ("TID or thread address for the new context");

 VAR_3 = (CORE_ADDR) FUNC_5 (VAR_1);

 if (VAR_0 != ((void*)0) && FUNC_0 (VAR_3)) {
  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4 == ((void*)0))
   FUNC_1("invalid thread address");
  VAR_3 = VAR_4->tid;
 }
 FUNC_3(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* jmp_buf ;


 char const* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int,int,int*,int*) ;
 int VAR_4 ;
 void* FUNC_9 (void*) ;
 char* VAR_5 ;
 scalar_t__ FUNC_10 (void*) ;

__attribute__((used)) static int
FUNC_11(int VAR_6, int VAR_7)
{
 jmp_buf VAR_8;
 void *VAR_9;
 bool VAR_10, VAR_11;
 const char *VAR_12;





 if (FUNC_1())
  return (0);

 if (FUNC_8(VAR_6, VAR_7, &VAR_10, &VAR_11)) {
  if (VAR_2) {
   FUNC_5("After %d instructions (%d loads, %d stores),\n",
       VAR_2, VAR_3, VAR_4);
  }
  VAR_9 = FUNC_9(VAR_8);
  if (FUNC_10(VAR_8) == 0) {
   VAR_1 = FUNC_0();
   FUNC_4();
   if (VAR_10)
    FUNC_5("Breakpoint at\t");
   else if (VAR_11)
    FUNC_5("Watchpoint at\t");
   else
    FUNC_5("Stopped at\t");
   FUNC_3(VAR_1);
  }
  VAR_12 = VAR_5;
  FUNC_7(VAR_12 != VAR_0 ? VAR_12 : "unknown");
  FUNC_2();
  (void)FUNC_9(VAR_9);
 }

 FUNC_6(VAR_11);

 return (1);
}

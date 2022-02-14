
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HT ;


 int VAR_0 ;
 int FUNC_0 (int *,int (*) (char*)) ;
 int FUNC_1 (int *,int (*) (char*)) ;
 void* FUNC_2 () ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 () ;
 long VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,long) ;
 void* VAR_5 ;
 char* FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char*,int *,long) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_8)
{
 char *VAR_9;
 HT *VAR_10;
 long VAR_11;

 VAR_5 = FUNC_2();
 VAR_7 = FUNC_2();
 VAR_1 = ((void*)0);
 VAR_3 = 0;
 VAR_2 = 0;
 FUNC_4(VAR_8);
 VAR_9 = ((void*)0);
 VAR_10 = FUNC_2();
 VAR_11 = 0;
 for (;;) {
  char *VAR_12;

  if (FUNC_5() < 0) {
   break;
  }
  VAR_12 = FUNC_8();
  if (VAR_12 != ((void*)0)) {
   if (VAR_9 != ((void*)0)) {
    FUNC_10(VAR_9, VAR_10, VAR_11);
    FUNC_0(VAR_10, FUNC_11);
    FUNC_11(VAR_9);
   }
   VAR_9 = VAR_12;
   VAR_11 = VAR_4;
   continue;
  }
  if (VAR_9 == ((void*)0)) {
   FUNC_7(VAR_6, "no current section (line %ld)\n",
    VAR_4);
   FUNC_6(VAR_0);
  }
  if (FUNC_9(VAR_10) < 0) {
   FUNC_7(VAR_6, "wrong configuration, line %ld\n",
    VAR_4);
   FUNC_6(VAR_0);
  }
 }
 if (VAR_9 != ((void*)0)) {
  FUNC_10(VAR_9, VAR_10, VAR_11);
  FUNC_11(VAR_9);
 }
 FUNC_1(VAR_10, FUNC_11);
 FUNC_3();
}

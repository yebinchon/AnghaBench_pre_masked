
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct timespec {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct timespec*,int *,int) ;
 int FUNC_8 (struct timespec*,int *,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_3, const char *VAR_4, FILE *VAR_5)
{
 struct timespec VAR_6;
 FILE *VAR_7;
 u_char *VAR_8;
 int VAR_9;

 while (1) {




  if (VAR_2) {
   VAR_2 = 0;
   FUNC_9("rereading configuration");
   VAR_7 = FUNC_5(VAR_3, "r");
   if (VAR_7 == ((void*)0))
    FUNC_3(-1, "%s", VAR_3);
   FUNC_1(VAR_3, VAR_7);
   FUNC_4(VAR_7);

   FUNC_4(VAR_5);
   VAR_5 = FUNC_5(VAR_4, "r");
   if (VAR_5 == ((void*)0))
    FUNC_3(-1, "%s", VAR_4);
  }
  if (VAR_1) {
   FUNC_9("quitting");
   break;
  }






  VAR_9 = FUNC_0(VAR_5, &VAR_8);
  if (VAR_9 == -1)
   continue;
  if (FUNC_2(VAR_0, &VAR_6) < 0)
   FUNC_3(-1, "clock_gettime");
  FUNC_7(&VAR_6, VAR_8, VAR_9);
  FUNC_8(&VAR_6, VAR_8, VAR_9);
  FUNC_6(VAR_8);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,char*,char*,char*) ;

int
FUNC_9(char *VAR_9, char *VAR_10, int VAR_11)
{


 if (VAR_8 && !VAR_3)
  (void)FUNC_7(VAR_10);

 if (VAR_11 == VAR_4) {
  if (!VAR_3 && FUNC_6(VAR_9, VAR_10) < 0) {
   FUNC_1(VAR_6,
       "warning: cannot create symbolic link %s->%s: %s\n",
       VAR_10, VAR_9, FUNC_5(VAR_5));
   return (VAR_0);
  }
 } else if (VAR_11 == VAR_2) {
  int VAR_12;

  if (!VAR_3 && (VAR_12 = FUNC_2(VAR_9, VAR_10)) < 0) {
   struct stat VAR_13;





   if (FUNC_4(VAR_9, &VAR_13) == 0 && VAR_13.st_flags != 0 &&
       FUNC_0(VAR_9, 0) == 0) {
    VAR_12 = FUNC_2(VAR_9, VAR_10);
    FUNC_0(VAR_9, VAR_13.st_flags);
   }
   if (VAR_12 < 0) {
    FUNC_1(VAR_6, "warning: cannot create "
        "hard link %s->%s: %s\n",
        VAR_10, VAR_9, FUNC_5(VAR_5));
    return (VAR_0);
   }
  }
 } else {
  FUNC_3("linkit: unknown type %d\n", VAR_11);
  return (VAR_0);
 }
 FUNC_8(VAR_7, "Create %s link %s->%s\n",
  VAR_11 == VAR_4 ? "symbolic" : "hard", VAR_10, VAR_9);
 return (VAR_1);
}

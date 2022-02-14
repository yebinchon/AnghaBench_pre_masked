
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpbuf ;
struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct gctl_req*,char*,int ) ;
 char* FUNC_3 (char*,char*,int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct gctl_req *VAR_5, bool VAR_6, char *VAR_7,
    size_t VAR_8)
{
 char *VAR_9;

 for (;;) {
  VAR_9 = FUNC_3(
      VAR_6 ? "Enter new passphrase: " : "Enter passphrase: ",
      VAR_7, VAR_8, VAR_1 | VAR_2);
  if (VAR_9 == ((void*)0)) {
   FUNC_0(VAR_7, VAR_8);
   FUNC_2(VAR_5, "Cannot read passphrase: %s.",
       FUNC_5(VAR_3));
   return (-1);
  }

  if (VAR_6) {
   char VAR_10[VAR_0];

   VAR_9 = FUNC_3("Reenter new passphrase: ",
       VAR_10, sizeof(VAR_10),
       VAR_1 | VAR_2);
   if (VAR_9 == ((void*)0)) {
    FUNC_0(VAR_7, VAR_8);
    FUNC_2(VAR_5,
        "Cannot read passphrase: %s.",
        FUNC_5(VAR_3));
    return (-1);
   }

   if (FUNC_4(VAR_7, VAR_10) != 0) {
    FUNC_0(VAR_7, VAR_8);
    FUNC_1(VAR_4, "They didn't match.\n");
    continue;
   }
   FUNC_0(VAR_10, sizeof(VAR_10));
  }
  return (0);
 }

}

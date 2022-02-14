
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct ata_security_password {int ctrl; int password; } ;
struct ata_cmd {scalar_t__ command; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (struct ata_cmd*) ;
 int FUNC_1 (struct ata_cmd*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_4(u_int8_t VAR_3, struct ata_security_password *VAR_4)
{
 struct ata_cmd VAR_5;

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.command = VAR_3;
 FUNC_2("Issuing %s", FUNC_0(&VAR_5));

 if (VAR_4 != ((void*)0)) {
  char VAR_6[sizeof(VAR_4->password)+1];


  VAR_6[sizeof(VAR_4->password)] = '\0';
  FUNC_3(VAR_6, VAR_4->password, sizeof(VAR_4->password));
  FUNC_2(" password='%s', user='%s'",
   VAR_6,
   (VAR_4->ctrl & VAR_1) ?
   "master" : "user");

  if (VAR_3 == VAR_2) {
   FUNC_2(", mode='%s'",
          (VAR_4->ctrl & VAR_0) ?
          "maximum" : "high");
  }
 }

 FUNC_2("\n");
}

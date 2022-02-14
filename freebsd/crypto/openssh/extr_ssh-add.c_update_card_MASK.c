
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char const*,...) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 char* FUNC_2 (char*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int,int,char const*,char*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(int VAR_4, int VAR_5, const char *VAR_6)
{
 char *VAR_7 = ((void*)0);
 int VAR_8, VAR_9 = -1;

 if (VAR_5) {
  if ((VAR_7 = FUNC_2("Enter passphrase for PKCS#11: ",
      VAR_0)) == ((void*)0))
   return -1;
 }

 if ((VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7 == ((void*)0) ? "" : VAR_7,
     VAR_2, VAR_1)) == 0) {
  FUNC_0(VAR_3, "Card %s: %s\n",
      VAR_5 ? "added" : "removed", VAR_6);
  VAR_9 = 0;
 } else {
  FUNC_0(VAR_3, "Could not %s card \"%s\": %s\n",
      VAR_5 ? "add" : "remove", VAR_6, FUNC_3(VAR_8));
  VAR_9 = -1;
 }
 FUNC_1(VAR_7);
 return VAR_9;
}

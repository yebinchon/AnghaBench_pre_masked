
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;


 int FUNC_0 (struct nv*,char*,unsigned int) ;
 char* FUNC_1 (struct nv*,char*,unsigned int) ;
 int FUNC_2 (int,char*,char const*,...) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_6(struct nv *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = 0;

 for (VAR_4 = 0; ; VAR_4++) {
  VAR_2 = FUNC_1(VAR_0, "resource%u", VAR_4);
  if (VAR_2 == ((void*)0))
   break;
  FUNC_3("[%s] ", VAR_2);
  VAR_5 = FUNC_0(VAR_0, "error%u", VAR_4);
  if (VAR_5 != 0) {
   if (VAR_6 == 0)
    VAR_6 = VAR_5;
   FUNC_4("Received error %d from hastd.", VAR_5);
   continue;
  }
  VAR_3 = FUNC_1(VAR_0, "role%u", VAR_4);
  if (FUNC_5(VAR_3, VAR_1) == 0)
   FUNC_2(2, "Role unchanged (%s).", VAR_3);
  else {
   FUNC_2(1, "Role changed from %s to %s.", VAR_3,
       VAR_1);
  }
 }
 FUNC_3("%s", "");
 return (VAR_6);
}

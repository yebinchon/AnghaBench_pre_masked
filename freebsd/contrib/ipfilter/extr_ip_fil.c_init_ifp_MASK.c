
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {char* if_xname; char* if_name; int if_unit; void* if_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct ifnet** VAR_4 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,...) ;
 scalar_t__ VAR_5 ;

void
FUNC_4()
{
 struct ifnet *VAR_6, **VAR_7;
 char VAR_8[32];
 int VAR_9;
 for (VAR_7 = VAR_4; VAR_7 && (VAR_6 = *VAR_7); VAR_7++) {
  VAR_6->if_output = (void *)VAR_5;
  FUNC_3(VAR_8, "/tmp/%s%d", VAR_6->if_name, VAR_6->if_unit);
  VAR_9 = FUNC_1(VAR_8, VAR_3|VAR_0|VAR_1|VAR_2, 0600);
  if (VAR_9 == -1)
   FUNC_2("open");
  else
   FUNC_0(VAR_9);
 }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct Forward {char* connect_host; scalar_t__ listen_port; char* listen_path; char* listen_host; scalar_t__ connect_port; char* connect_path; } ;
typedef scalar_t__ OpCodes ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(OpCodes VAR_3, u_int VAR_4, const struct Forward *VAR_5)
{
 const struct Forward *VAR_6;
 u_int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = &VAR_5[VAR_7];
  if (VAR_3 == VAR_1 && VAR_6->connect_host != ((void*)0) &&
      FUNC_2(VAR_6->connect_host, "socks") != 0)
   continue;
  if (VAR_3 == VAR_2 && VAR_6->connect_host != ((void*)0) &&
      FUNC_2(VAR_6->connect_host, "socks") == 0)
   continue;
  FUNC_1("%s", FUNC_0(VAR_3));
  if (VAR_6->listen_port == VAR_0)
   FUNC_1(" %s", VAR_6->listen_path);
  else if (VAR_6->listen_host == ((void*)0))
   FUNC_1(" %d", VAR_6->listen_port);
  else {
   FUNC_1(" [%s]:%d",
       VAR_6->listen_host, VAR_6->listen_port);
  }
  if (VAR_3 != VAR_1) {
   if (VAR_6->connect_port == VAR_0)
    FUNC_1(" %s", VAR_6->connect_path);
   else if (VAR_6->connect_host == ((void*)0))
    FUNC_1(" %d", VAR_6->connect_port);
   else {
    FUNC_1(" [%s]:%d",
        VAR_6->connect_host, VAR_6->connect_port);
   }
  }
  FUNC_1("\n");
 }
}

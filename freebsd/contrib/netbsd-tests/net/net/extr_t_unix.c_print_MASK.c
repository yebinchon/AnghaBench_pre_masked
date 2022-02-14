
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_family; int sun_len; int* sun_path; } ;
typedef size_t socklen_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, struct sockaddr_un *VAR_2, socklen_t VAR_3)
{
 size_t VAR_4;

 FUNC_0("%s: client socket length: %zu\n", VAR_1, (size_t)VAR_3);
 FUNC_0("%s: client family %d\n", VAR_1, VAR_2->sun_family);



 FUNC_0("%s: socket name: ", VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3 - VAR_0; VAR_4++) {
  int VAR_5 = VAR_2->sun_path[VAR_4];
  if (VAR_5 < ' ' || '~' < VAR_5)
   FUNC_0("\\x%02x", VAR_5);
  else
   FUNC_0("%c", VAR_5);
 }
 FUNC_0("\n");
}

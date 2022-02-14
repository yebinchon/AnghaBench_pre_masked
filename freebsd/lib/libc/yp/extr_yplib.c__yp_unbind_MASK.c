
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; } ;
struct sockaddr {int dummy; } ;
struct dom_binding {int dom_socket; scalar_t__ dom_local_port; int dom_vers; int * dom_client; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dom_binding*) ;

__attribute__((used)) static void
FUNC_6(struct dom_binding *VAR_1)
{
 struct sockaddr_in VAR_2;
 socklen_t VAR_3 = sizeof(struct sockaddr_in);

 if (VAR_1->dom_client != ((void*)0)) {

  if (FUNC_3(VAR_1->dom_socket, (struct sockaddr *)&VAR_2,
      &VAR_3) == -1 || VAR_2.sin_family != VAR_0 ||
      VAR_2.sin_port != VAR_1->dom_local_port) {
   int VAR_4, VAR_5;

   VAR_5 = VAR_1->dom_socket;
   VAR_4 = FUNC_1(VAR_1->dom_socket);
   FUNC_4(VAR_1->dom_client);
   VAR_5 = FUNC_2(VAR_4, VAR_5);
   FUNC_0(VAR_4);
  } else
   FUNC_4(VAR_1->dom_client);
 }

 VAR_1->dom_client = ((void*)0);
 VAR_1->dom_socket = -1;
 VAR_1->dom_vers = -1;



}

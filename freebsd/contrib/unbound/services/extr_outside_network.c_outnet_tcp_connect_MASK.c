
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct sockaddr*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int ,struct sockaddr_storage*,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct sockaddr*,int ) ;

int
FUNC_7(int VAR_4, struct sockaddr_storage* VAR_5, socklen_t VAR_6)
{
 if(FUNC_3(VAR_4, (struct sockaddr*)VAR_5, VAR_6) == -1) {




   if(FUNC_6(
    (struct sockaddr*)VAR_5, VAR_6))
    FUNC_4("outgoing tcp: connect",
     FUNC_5(VAR_3), VAR_5, VAR_6);
   FUNC_1(VAR_4);
   return 0;
 }
 return 1;
}

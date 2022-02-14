
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pkt {int dummy; } ;
struct TYPE_4__ {int sa; } ;
typedef TYPE_1__ sockaddr_u ;
typedef int SOCKET ;
typedef int GETSOCKNAME_SOCKLEN_TYPE ;


 int VAR_0 ;
 int FUNC_0 (struct pkt*,int,int ) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int ,void*,int,int ,int *,int*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_4(
 SOCKET VAR_2,
 sockaddr_u * VAR_3,
 void * VAR_4,
 int VAR_5
 )
{
 GETSOCKNAME_SOCKLEN_TYPE VAR_6;
 int VAR_7;

 VAR_6 = sizeof(*VAR_3);
 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_5, 0,
    &VAR_3->sa, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;






 return VAR_7;
}

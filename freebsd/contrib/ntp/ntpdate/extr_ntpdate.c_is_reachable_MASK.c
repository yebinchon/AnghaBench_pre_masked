
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa; } ;
typedef TYPE_1__ sockaddr_u ;
typedef int SOCKET ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5 (sockaddr_u *VAR_1)
{
 SOCKET VAR_2;

 VAR_2 = FUNC_4(FUNC_0(VAR_1), VAR_0, 0);
 if (VAR_2 == -1) {
  return 0;
 }

 if (FUNC_3(VAR_2, &VAR_1->sa, FUNC_1(VAR_1))) {
  FUNC_2(VAR_2);
  return 0;
 }
 FUNC_2(VAR_2);
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sockaddr* FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,int ) ;

__attribute__((used)) static int FUNC_3(struct sockaddr **VAR_1, socklen_t *VAR_2,
     struct sockaddr *VAR_3, socklen_t VAR_4)
{
 *VAR_1 = FUNC_1(VAR_4);
 if (!(*VAR_1))
  return FUNC_0(VAR_0);

 FUNC_2(*VAR_1, VAR_3, VAR_4);
 *VAR_2 = VAR_4;
 return 0;
}

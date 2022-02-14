
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct peer {int dummy; } ;
typedef int sockaddr_u ;


 int FUNC_0 (int *) ;
 struct peer* FUNC_1 (int *,struct peer*,int,int ,int*) ;
 struct peer* FUNC_2 (char const*,int ,struct peer*,int) ;

struct peer *
FUNC_3(
 sockaddr_u * VAR_0,
 const char * VAR_1,
 struct peer * VAR_2,
 int VAR_3,
 u_char VAR_4,
 int * VAR_5
 )
{
 if (VAR_1 != ((void*)0))
  return FUNC_2(VAR_1, FUNC_0(VAR_0),
          VAR_2, VAR_3);
 else
  return FUNC_1(VAR_0, VAR_2, VAR_3,
          VAR_4, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int token_t ;
struct sockaddr_un {int sun_path; int sun_family; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

token_t *
FUNC_4(struct sockaddr_un *VAR_1)
{
 token_t *VAR_2;
 u_char *VAR_3;

 FUNC_2(VAR_2, VAR_3, 3 * sizeof(u_char) + FUNC_3(VAR_1->sun_path) + 1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_3, VAR_0);

 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_3, VAR_1->sun_family);
 FUNC_0(VAR_3, VAR_1->sun_path, FUNC_3(VAR_1->sun_path) + 1);

 return (VAR_2);
}

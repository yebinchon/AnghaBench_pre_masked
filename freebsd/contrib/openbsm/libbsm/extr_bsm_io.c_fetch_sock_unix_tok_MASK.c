
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int path; int family; } ;
struct TYPE_6__ {TYPE_1__ sockunix; } ;
struct TYPE_7__ {int len; TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;


 int FUNC_0 (int *,int,int ,int,int,int) ;
 int FUNC_1 (int *,int,int ,int,int) ;
 scalar_t__ FUNC_2 (void const*,char,int) ;

__attribute__((used)) static int
FUNC_3(tokenstr_t *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 u_char *VAR_4;
 int VAR_5;


 FUNC_1(VAR_1, VAR_2, VAR_0->tt.sockunix.family, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);


 VAR_4 = (u_char *)FUNC_2((const void *)(VAR_1 + VAR_0->len), '\0', 104);
 VAR_5 = (VAR_4 ? (int)(VAR_4 - (VAR_1 + VAR_0->len)) : 104) + 1;

 FUNC_0(VAR_1, VAR_2, VAR_0->tt.sockunix.path, VAR_5, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 return (0);
}

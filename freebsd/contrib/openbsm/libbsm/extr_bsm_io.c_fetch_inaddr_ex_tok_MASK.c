
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {scalar_t__ type; int * addr; } ;
struct TYPE_5__ {TYPE_2__ inaddr_ex; } ;
struct TYPE_7__ {int len; TYPE_1__ tt; } ;
typedef TYPE_3__ tokenstr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int *,int,int ,int) ;
 int FUNC_1 (int *,int,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_2(tokenstr_t *VAR_2, u_char *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.inaddr_ex.type, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 if (VAR_2->tt.inaddr_ex.type == VAR_0) {
  FUNC_0(VAR_3, VAR_4, &VAR_2->tt.inaddr_ex.addr[0],
      sizeof(VAR_2->tt.inaddr_ex.addr[0]), VAR_2->len, VAR_5);
  if (VAR_5)
   return (-1);
 } else if (VAR_2->tt.inaddr_ex.type == VAR_1) {
  FUNC_0(VAR_3, VAR_4, VAR_2->tt.inaddr_ex.addr,
      sizeof(VAR_2->tt.inaddr_ex.addr), VAR_2->len, VAR_5);
  if (VAR_5)
   return (-1);
 } else
  return (-1);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int no; int * list; } ;
struct TYPE_5__ {TYPE_2__ grps; } ;
struct TYPE_7__ {int len; TYPE_1__ tt; } ;
typedef TYPE_3__ tokenstr_t ;


 int FUNC_0 (int *,int,int,int ,int) ;
 int FUNC_1 (int *,int,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(tokenstr_t *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_1, VAR_2, VAR_0->tt.grps.no, VAR_0->len, VAR_4);
 if (VAR_4)
  return (-1);

 for (VAR_3 = 0; VAR_3<VAR_0->tt.grps.no; VAR_3++) {
  FUNC_1(VAR_1, VAR_2, VAR_0->tt.grps.list[VAR_3], VAR_0->len,
      VAR_4);
  if (VAR_4)
   return (-1);
 }

 return (0);
}

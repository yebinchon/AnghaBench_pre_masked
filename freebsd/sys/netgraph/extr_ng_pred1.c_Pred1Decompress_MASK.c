
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {int* GuessTable; size_t Hash; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_0, u_char *VAR_1, u_char *VAR_2, int VAR_3, int VAR_4)
{
 const priv_p VAR_5 = FUNC_1(VAR_0);
 int VAR_6;
 u_char VAR_7, *VAR_8;

 VAR_8 = VAR_2;
 while (VAR_3) {
  VAR_7 = *VAR_1++;
  VAR_3--;
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++, VAR_7 >>= 1) {
   if (VAR_4 <= 0)
    return(-1);
   if (VAR_7 & 0x01)

    *VAR_2 = VAR_5->GuessTable[VAR_5->Hash];
   else {
    if (!VAR_3)

     break;


    VAR_5->GuessTable[VAR_5->Hash] = *VAR_1;

    *VAR_2 = *VAR_1++;
    VAR_3--;
   }
   FUNC_0(*VAR_2++);
   VAR_4--;
  }
 }
 return (VAR_2 - VAR_8);
}

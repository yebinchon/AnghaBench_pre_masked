
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {scalar_t__* GuessTable; size_t Hash; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_0, u_char *VAR_1, u_char *VAR_2, int VAR_3)
{
 const priv_p VAR_4 = FUNC_1(VAR_0);
 int VAR_5;
 u_char VAR_6;
 u_char *VAR_7, *VAR_8;

 VAR_8 = VAR_2;
 while (VAR_3) {
  VAR_7 = VAR_2++;
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < 8 && VAR_3; VAR_5++) {
       if (VAR_4->GuessTable[VAR_4->Hash] == *VAR_1)

    VAR_6 |= (1 << VAR_5);
       else {

    VAR_4->GuessTable[VAR_4->Hash] = *VAR_1;
    *VAR_2++ = *VAR_1;
       }
       FUNC_0(*VAR_1++);
       VAR_3--;
  }
  *VAR_7 = VAR_6;
 }
 return (VAR_2 - VAR_8);
}

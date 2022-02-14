
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty*,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_1)
{
 int VAR_2, VAR_3;
 u_char VAR_4[VAR_0];

 for (;;) {
  VAR_2 = FUNC_1(VAR_1, VAR_4, sizeof(VAR_4));
  if (VAR_2 == 0)
   break;

  VAR_3 = 0;
  while (VAR_3 < VAR_2)
   FUNC_0(VAR_4[VAR_3++]);
 }
}

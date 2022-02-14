
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_1 (struct tty*,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_2)
{
 int VAR_3;
 u_char VAR_4[VAR_0];

 for (;;) {
  VAR_3 = FUNC_1(VAR_2, VAR_4, sizeof VAR_4);
  if (VAR_3 == 0)
   break;
  FUNC_0(VAR_1, VAR_4, VAR_3);
 }
}

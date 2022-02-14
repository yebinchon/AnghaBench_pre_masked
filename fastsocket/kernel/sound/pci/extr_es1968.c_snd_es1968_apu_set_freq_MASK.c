
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es1968 {int dummy; } ;


 int FUNC_0 (struct es1968*,int,int) ;
 int FUNC_1 (struct es1968*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct es1968 *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_1(VAR_0, VAR_1, 2,
      (FUNC_0(VAR_0, VAR_1, 2) & 0x00FF) |
      ((VAR_2 & 0xff) << 8) | 0x10);
 FUNC_1(VAR_0, VAR_1, 3, VAR_2 >> 8);
}

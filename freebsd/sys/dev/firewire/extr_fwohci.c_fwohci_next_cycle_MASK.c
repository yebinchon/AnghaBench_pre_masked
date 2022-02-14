
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firewire_comm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct firewire_comm *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_3 & 0x1fff;
 VAR_4 = VAR_3 >> 13;






 VAR_5 = VAR_5 + 8;
 if (VAR_5 >= 8000) {
  VAR_4++;
  VAR_5 -= 8000;
 }
 VAR_5 = FUNC_0(VAR_5, 0x10);
 if (VAR_5 >= 8000) {
  VAR_4++;
  if (VAR_5 == 8000)
   VAR_5 = 0;
  else
   VAR_5 = 0x10;
 }
 VAR_6 = ((VAR_4 << 13) | VAR_5) & 0x7ffff;

 return (VAR_6);
}

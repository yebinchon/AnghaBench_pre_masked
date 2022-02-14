
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int ac97_busy; int ac97_status; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sc_info*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct sc_info *VAR_0)
{
 int VAR_1 = 10;
 int VAR_2 = 1;

 while (VAR_1-- > 0) {
  if (FUNC_1(VAR_0, VAR_0->ac97_status, 2) & VAR_0->ac97_busy) {
   FUNC_0(100);
  } else {
   VAR_2 = 0;
   break;
  }
 }
 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int addr; int adapter; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cphy*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct cphy *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 500;
 unsigned int VAR_9;

 VAR_7 = FUNC_3(VAR_5, VAR_3, VAR_4, VAR_0,
     VAR_6 ? VAR_0 : 0);
 if (VAR_7 || VAR_6)
  return (VAR_7);

 FUNC_2(300);
 do {
  VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4, &VAR_9);
  if (VAR_7)
   return (VAR_7);
  VAR_9 &= VAR_1;
  if (VAR_9)
   FUNC_2(10);
 } while (VAR_9 && --VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_5->adapter, "PHY%d: power-up timed out (0x%x).\n",
      VAR_5->addr, VAR_9);
  return (VAR_2);
 }

 return (0);
}

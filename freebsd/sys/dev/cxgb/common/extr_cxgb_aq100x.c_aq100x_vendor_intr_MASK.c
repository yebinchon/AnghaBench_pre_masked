
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {scalar_t__ addr; int adapter; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (struct cphy*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct cphy*,int ,int,unsigned int*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct cphy *VAR_6, int *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_8 = FUNC_3(VAR_6, VAR_3, 0xfc01, &VAR_9);
 if (VAR_8)
  return (VAR_8);

 if (VAR_9 & FUNC_0(2)) {
  VAR_8 = FUNC_3(VAR_6, VAR_3, 0xcc00, &VAR_10);
  if (VAR_8)
   return (VAR_8);

  if (VAR_10 & FUNC_0(VAR_5)) {
   FUNC_1(VAR_6->adapter, "PHY%d: temperature is now %dC\n",
       VAR_6->addr, FUNC_2(VAR_6));

   FUNC_4(VAR_6->adapter, VAR_0,
       VAR_6->addr ? VAR_1 : VAR_2, 0);

   *VAR_7 |= VAR_4;
  }

  VAR_9 &= ~4;
 }

 if (VAR_9)
  FUNC_1(VAR_6->adapter, "PHY%d: unhandled vendor interrupt"
      " (0x%x)\n", VAR_6->addr, VAR_9);

 return (0);

}

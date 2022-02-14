
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int addr; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_2 (struct cphy*,int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_1, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_0,
    (VAR_6 << 8) | VAR_7);
 if (VAR_10)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < 200; VAR_9++) {
  FUNC_3(1);
  VAR_10 = FUNC_1(VAR_5, VAR_4, VAR_2, &VAR_11);
  if (VAR_10)
   return VAR_10;
  if ((VAR_11 & 3) == 1)
   return 0;
 }
 FUNC_0(VAR_5->adapter, "PHY %u i2c Write of dev.addr %x.%x = %#x timed out\n",
  VAR_5->addr, VAR_6, VAR_7, VAR_8);
 return -VAR_3;
}

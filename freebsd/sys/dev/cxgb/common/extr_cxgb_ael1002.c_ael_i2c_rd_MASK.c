
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int addr; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_2 (struct cphy*,int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_9 = FUNC_2(VAR_5, VAR_4, VAR_0,
    (VAR_6 << 8) | (1 << 8) | VAR_7);
 if (VAR_9)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < 200; VAR_8++) {
  FUNC_3(1);
  VAR_9 = FUNC_1(VAR_5, VAR_4, VAR_2, &VAR_10);
  if (VAR_9)
   return VAR_9;
  if ((VAR_10 & 3) == 1) {
   VAR_9 = FUNC_1(VAR_5, VAR_4, VAR_1,
     &VAR_11);
   if (VAR_9)
    return VAR_9;
   return VAR_11 >> 8;
  }
 }
 FUNC_0(VAR_5->adapter, "PHY %u i2c read of dev.addr %x.%x timed out\n",
  VAR_5->addr, VAR_6, VAR_7);
 return -VAR_3;
}

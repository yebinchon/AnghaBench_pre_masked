
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sonicvibes*,int ,unsigned char) ;
 int FUNC_1 (struct sonicvibes*,int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sonicvibes * VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;
 unsigned char VAR_7;

 VAR_6 = 48000 / VAR_4;
 if (VAR_6 > 8)
  VAR_6 = 8;
 if ((48000 / VAR_6) == VAR_4) {
  VAR_7 = 0x10;
 } else {
  VAR_7 = 0x00;
  FUNC_1(VAR_3, VAR_2, VAR_4);
 }
 FUNC_2(&VAR_3->reg_lock, VAR_5);
 FUNC_0(VAR_3, VAR_0, (VAR_6 - 1) << 4);
 FUNC_0(VAR_3, VAR_1, VAR_7);
 FUNC_3(&VAR_3->reg_lock, VAR_5);
}

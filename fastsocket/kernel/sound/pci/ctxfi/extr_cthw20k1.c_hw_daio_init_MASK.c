
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;
struct daio_conf {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hw*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_3, const struct daio_conf *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;



 VAR_5 = 0x94040404;


 VAR_5 &= 0xfffffffc;




 FUNC_0(VAR_3, VAR_2, 0x0);
 VAR_6 = 0x05;

 switch (VAR_4->msr) {
 case 1:
  VAR_5 |= 1;
  VAR_6 |= (0x0 << 6);
  break;
 case 2:
  VAR_5 |= 2;
  VAR_6 |= (0x1 << 6);
  break;
 case 4:
  VAR_5 |= 3;
  VAR_6 |= (0x2 << 6);
  break;
 default:
  VAR_5 |= 1;
  break;
 }

 FUNC_0(VAR_3, VAR_0, VAR_5);
 FUNC_0(VAR_3, VAR_2, VAR_6);



 FUNC_0(VAR_3, VAR_1, 0x0);
 FUNC_1(1);
 VAR_6 = 0x0a0a0a0a;
 FUNC_0(VAR_3, VAR_1, VAR_6);
 FUNC_1(1);

 return 0;
}

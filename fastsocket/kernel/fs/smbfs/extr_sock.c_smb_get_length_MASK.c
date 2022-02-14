
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (struct socket*,unsigned char*,int,int ) ;
 int FUNC_3 (unsigned char*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_4, unsigned char *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_5, 4, VAR_3);
 if (VAR_6 == -VAR_0)
  return -VAR_2;
 if (VAR_6 < 0) {
  FUNC_1("recv error = %d\n", -VAR_6);
  return VAR_6;
 }
 if (VAR_6 < 4)
  return -VAR_2;

 switch (VAR_5[0]) {
 case 0x00:
 case 0x82:
  break;

 case 0x85:
  FUNC_0("Got SESSION KEEP ALIVE\n");
  FUNC_2(VAR_4, VAR_5, 4, 0);
  return -VAR_2;

 default:
  FUNC_1("Invalid NBT packet, code=%x\n", VAR_5[0]);
  return -VAR_1;
 }


 return FUNC_3(VAR_5);
}

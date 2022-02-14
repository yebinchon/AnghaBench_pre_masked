
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char MCE_bit; int base; } ;
typedef TYPE_1__ ad1848_info ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_4(ad1848_info * VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3 = 900000;

 while (VAR_3 > 0 && FUNC_0(VAR_0->base) == 0x80)
  VAR_3--;

 if(VAR_1 < 32)
 {
  FUNC_3(((unsigned char) (VAR_1 & 0xff) | VAR_0->MCE_bit), FUNC_1(VAR_0));
  VAR_2 = FUNC_0(FUNC_2(VAR_0));
 }
 else
 {
  int VAR_4, VAR_5;

  VAR_4 = (VAR_1 & 0xff) - 32;
  VAR_5 = (((VAR_4 & 0x0f) << 4) & 0xf0) | 0x08 | ((VAR_4 & 0x10) >> 2);
  FUNC_3(((unsigned char) (23 & 0xff) | VAR_0->MCE_bit), FUNC_1(VAR_0));
  FUNC_3(((unsigned char) (VAR_5 & 0xff)), FUNC_2(VAR_0));
  VAR_2 = FUNC_0(FUNC_2(VAR_0));
 }

 return VAR_2;
}

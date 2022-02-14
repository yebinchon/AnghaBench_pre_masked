
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10codec_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct a10codec_info*,int ) ;
 int FUNC_1 (struct a10codec_info*,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(struct a10codec_info *VAR_10, int VAR_11, int VAR_12)
{
 uint32_t VAR_13;

 if (VAR_12 == VAR_9) {
  VAR_13 = FUNC_0(VAR_10, VAR_6);
  if (VAR_11) {

   VAR_13 &= ~VAR_4;
   VAR_13 &= ~VAR_3;
   VAR_13 &= ~VAR_5;
  } else {

   VAR_13 |= VAR_4;
   VAR_13 |= VAR_3;
   VAR_13 |= VAR_5;
  }
  FUNC_1(VAR_10, VAR_6, VAR_13);
 } else {
  VAR_13 = FUNC_0(VAR_10, VAR_2);
  if (VAR_11) {



   VAR_13 &= ~VAR_1;
   VAR_13 &= ~VAR_0;
   VAR_13 &= ~VAR_7;
   VAR_13 &= ~VAR_8;
  } else {



   VAR_13 |= VAR_1;
   VAR_13 |= VAR_0;
   VAR_13 |= VAR_7;
   VAR_13 |= VAR_8;
  }
  FUNC_1(VAR_10, VAR_2, VAR_13);
 }
}

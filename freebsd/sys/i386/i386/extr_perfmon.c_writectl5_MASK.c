
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quad_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (int ,int) ;

int
FUNC_1(int VAR_9)
{
 quad_t VAR_10 = 0;

 if (VAR_7[1] & (VAR_4 << 16)) {
  if (VAR_7[1] & (VAR_6 << 16))
   VAR_10 |= VAR_2 << 16;
  if (VAR_7[1] & (VAR_5 << 16))
   VAR_10 |= VAR_1 << 16;
  if (!(VAR_7[1] & (VAR_3 << 16)))
   VAR_10 |= VAR_0 << 16;
  VAR_10 |= (VAR_7[1] & 0x3f) << 16;
 }
 if (VAR_7[0] & (VAR_4 << 16)) {
  if (VAR_7[0] & (VAR_6 << 16))
   VAR_10 |= VAR_2;
  if (VAR_7[0] & (VAR_5 << 16))
   VAR_10 |= VAR_1;
  if (!(VAR_7[0] & (VAR_3 << 16)))
   VAR_10 |= VAR_0;
  VAR_10 |= VAR_7[0] & 0x3f;
 }

 FUNC_0(VAR_8[0], VAR_10);
 return 0;
}

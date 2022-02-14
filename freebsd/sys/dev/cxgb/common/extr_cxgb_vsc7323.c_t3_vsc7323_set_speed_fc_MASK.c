
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2(adapter_t *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 if (VAR_7 >= 0) {
  if (VAR_7 == VAR_3)
   VAR_10 = VAR_11 = 1;
  else if (VAR_7 == VAR_4)
   VAR_10 = 1, VAR_11 = 2;
  else if (VAR_7 == VAR_5)
   VAR_10 = VAR_11 = 3;
  else
   return -VAR_0;

  if ((VAR_12 = FUNC_1(VAR_6, FUNC_0(1, VAR_9, 0),
        0xa590 | (VAR_10 << 2))) ||
      (VAR_12 = FUNC_1(VAR_6, FUNC_0(1, VAR_9, 0xb),
        0x91 | (VAR_11 << 1))) ||
      (VAR_12 = FUNC_1(VAR_6, FUNC_0(1, VAR_9, 0xb),
        0x90 | (VAR_11 << 1))) ||
      (VAR_12 = FUNC_1(VAR_6, FUNC_0(1, VAR_9, 0),
        0xa593 | (VAR_10 << 2))))
   return VAR_12;
 }

 VAR_12 = (VAR_8 & VAR_1) ? 0x60200 : 0x20200;
 if (VAR_8 & VAR_2)
  VAR_12 |= (1 << 19);
 return FUNC_1(VAR_6, FUNC_0(1, VAR_9, 1), VAR_12);
}

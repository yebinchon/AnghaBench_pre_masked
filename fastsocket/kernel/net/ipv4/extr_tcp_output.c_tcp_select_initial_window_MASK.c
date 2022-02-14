
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef unsigned int __u32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int,unsigned int) ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_3(int VAR_6, __u32 VAR_7,
          __u32 *VAR_8, __u32 *VAR_9,
          int VAR_10, __u8 *VAR_11,
          __u32 VAR_12)
{
 unsigned int VAR_13 = (VAR_6 < 0 ? 0 : VAR_6);


 if (*VAR_9 == 0)
  (*VAR_9) = (65535 << 14);
 VAR_13 = FUNC_1(*VAR_9, VAR_13);


 if (VAR_13 > VAR_7)
  VAR_13 = (VAR_13 / VAR_7) * VAR_7;
 if (VAR_4)
  (*VAR_8) = FUNC_1(VAR_13, VAR_0);
 else
  (*VAR_8) = VAR_13;

 (*VAR_11) = 0;
 if (VAR_10) {



  VAR_13 = FUNC_0(VAR_5, VAR_3[2], VAR_2);
  VAR_13 = FUNC_2(VAR_5, VAR_13, *VAR_9);
  while (VAR_13 > 65535 && (*VAR_11) < 14) {
   VAR_13 >>= 1;
   (*VAR_11)++;
  }
 }





 if (VAR_7 > (1 << *VAR_11)) {
  int VAR_14 = VAR_1;
  if (VAR_7 > 1460)
   VAR_14 =
   FUNC_0(VAR_5, (1460 * VAR_1) / VAR_7, 2);



  if (VAR_12)
   *VAR_8 = FUNC_1(*VAR_8, VAR_12 * VAR_7);
  else
   *VAR_8 = FUNC_1(*VAR_8, VAR_14 * VAR_7);
 }


 (*VAR_9) = FUNC_1(65535U << (*VAR_11), *VAR_9);
}

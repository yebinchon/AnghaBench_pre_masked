
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(int VAR_1)
{





 int VAR_2, VAR_3, VAR_4;
 static int VAR_5[] =
 {
  261632, 277189, 293671, 311132, 329632, 349232,
  369998, 391998, 415306, 440000, 466162, 493880
 };



 VAR_3 = VAR_1 / 12;
 VAR_2 = VAR_1 % 12;

 VAR_4 = VAR_5[VAR_2];

 if (VAR_3 < 5)
  VAR_4 >>= (5 - VAR_3);
 else if (VAR_3 > 5)
  VAR_4 <<= (VAR_3 - 5);





 return VAR_4;
}

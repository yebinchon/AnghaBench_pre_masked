
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 if (VAR_2 != 0) {
  VAR_5 = VAR_0;
  VAR_0 += VAR_2;
  if (VAR_2 < 0) {
   VAR_5 += VAR_2;
   VAR_2 = -VAR_2;
  }

  for (; VAR_2 >= 0; --VAR_2, ++VAR_5) {
   VAR_6 |= FUNC_0(VAR_5, VAR_1, VAR_4);
  }
 }
 else {
  VAR_5 = VAR_1;
  VAR_1 += VAR_3;
  if (VAR_3 < 0) {
   VAR_5 += VAR_3;
   VAR_3 = -VAR_3;
  }

  for (; VAR_3 >= 0; --VAR_3, ++VAR_5) {
   VAR_6 |= FUNC_0(VAR_0, VAR_5, VAR_4);
  }
 }
 return VAR_6;
}

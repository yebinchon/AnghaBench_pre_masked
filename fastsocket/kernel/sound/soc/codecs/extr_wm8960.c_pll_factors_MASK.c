
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pll_div {int pre_div; unsigned int n; unsigned int k; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (unsigned long long,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,...) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_2, unsigned int VAR_3,
         struct _pll_div *VAR_4)
{
 unsigned long long VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;

 FUNC_1("WM8960 PLL: setting %dHz->%dHz\n", VAR_2, VAR_3);


 VAR_3 *= 4;

 VAR_7 = VAR_3 / VAR_2;
 if (VAR_7 < 6) {
  VAR_2 >>= 1;
  VAR_4->pre_div = 1;
  VAR_7 = VAR_3 / VAR_2;
 } else
  VAR_4->pre_div = 0;

 if ((VAR_7 < 6) || (VAR_7 > 12)) {
  FUNC_2("WM8960 PLL: Unsupported N=%d\n", VAR_7);
  return -VAR_0;
 }

 VAR_4->n = VAR_7;
 VAR_8 = VAR_3 % VAR_2;
 VAR_5 = VAR_1 * (long long)VAR_8;

 FUNC_0(VAR_5, VAR_2);

 VAR_6 = VAR_5 & 0xFFFFFFFF;


 if ((VAR_6 % 10) >= 5)
  VAR_6 += 5;


 VAR_6 /= 10;

 VAR_4->k = VAR_6;

 FUNC_1("WM8960 PLL: N=%x K=%x pre_div=%d\n",
   VAR_4->n, VAR_4->k, VAR_4->pre_div);

 return 0;
}

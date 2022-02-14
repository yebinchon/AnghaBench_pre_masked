
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,int,unsigned long long) ;
 int FUNC_2 (char*,int,double,int) ;

__attribute__((used)) static int
FUNC_3(char* VAR_0, int VAR_1, double VAR_2, int VAR_3)
{
 unsigned long long VAR_4 = (unsigned long long)VAR_2;
 double VAR_5 = VAR_2 - (double)VAR_4;
 int VAR_6 = 0;
 int VAR_7 = 0;


 while(VAR_4 > 0) {
  VAR_6++;
  VAR_4 /= 10;
 }
 VAR_4 = (unsigned long long)VAR_2;

 if(VAR_3 > VAR_6 && VAR_5 != 0.0) {

  VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_5, VAR_3-VAR_6);
  while(VAR_7 > 0 && VAR_0[0]=='0') {
   FUNC_0(VAR_0, VAR_0+1, --VAR_7);
  }
 }
 VAR_7 += FUNC_1(VAR_0+VAR_7, VAR_1-VAR_7, VAR_4);
 return VAR_7;
}

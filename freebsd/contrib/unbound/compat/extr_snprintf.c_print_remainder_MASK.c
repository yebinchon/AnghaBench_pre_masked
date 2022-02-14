
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,unsigned long long) ;

__attribute__((used)) static int
FUNC_1(char* VAR_0, int VAR_1, double VAR_2, int VAR_3)
{
 unsigned long long VAR_4 = 1;
 unsigned long long VAR_5;
 int VAR_6, VAR_7;
 if(VAR_3 > 19) VAR_3 = 19;
 if(VAR_1 < VAR_3) return 0;
 for(VAR_7=0; VAR_7<VAR_3; VAR_7++) {
  VAR_4 *= 10;
 }
 VAR_2 *= (double)VAR_4;
 VAR_5 = (unsigned long long)VAR_2;

 if(((unsigned long long)((VAR_2 - (double)VAR_5)*10.0)) >= 5) {
  VAR_5++;


  if(VAR_5 >= VAR_4)
   VAR_5 = VAR_4-1;
 }
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5);
 while(VAR_6 < VAR_3) {
  VAR_0[VAR_6++] = '0';
 }
 if(VAR_6 < VAR_1)
  VAR_0[VAR_6++] = '.';
 return VAR_6;
}

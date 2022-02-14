
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,unsigned long long) ;
 int FUNC_1 (char*,int,double,int) ;

__attribute__((used)) static int
FUNC_2(char* VAR_0, int VAR_1, double VAR_2, int VAR_3)
{





 unsigned long long VAR_4 = (unsigned long long)VAR_2;
 double VAR_5 = VAR_2 - (double)VAR_4;
 int VAR_6 = 0;
 if(VAR_3 != 0)
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3);
 VAR_6 += FUNC_0(VAR_0+VAR_6, VAR_1-VAR_6, VAR_4);
 return VAR_6;
}

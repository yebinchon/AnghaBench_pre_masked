
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(double VAR_0, double *VAR_1)
{
 int VAR_2;
 long VAR_3;
 double VAR_4 = VAR_0;
 double VAR_5 = 1.0;

 for (VAR_2=0;VAR_2<100;VAR_2++) {
  VAR_3 = (long)VAR_4;
  if (VAR_3 <= (VAR_4+1) && VAR_3 >= (VAR_4-1)) break;
  VAR_4 *= 0.1;
  VAR_5 *= 10.0;
 }

 if (VAR_2 == 100) {




  (*VAR_1) = 0;
  return 0;
 }

 if (VAR_2 != 0) {
  double VAR_6;
  double VAR_7;

  VAR_7 = FUNC_0(VAR_0-VAR_3*VAR_5, &VAR_6);
  (*VAR_1) = VAR_3*VAR_5 + VAR_6;
  return VAR_7;
 }

 (*VAR_1) = VAR_3;
 return VAR_4 - (*VAR_1);
}

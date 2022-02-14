
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 double const FUNC_0 (double) ;
 int FUNC_1 (int *,char*,double,...) ;

__attribute__((used)) static int
FUNC_2 (double VAR_1, void *VAR_2)
{
 FILE *VAR_3 = VAR_2;
 const double VAR_4 = 0.0000001;

 if (VAR_1 == (double)(int)VAR_1) {
  FUNC_1 (VAR_3, "%.1lf", VAR_1);
 }
 else if (FUNC_0 (VAR_1 - (double)(int)VAR_1) < VAR_4) {

  FUNC_1 (VAR_3, "%.*lg", VAR_0, VAR_1);
 }
 else {
  FUNC_1 (VAR_3, "%lf", VAR_1);
 }

 return 0;
}

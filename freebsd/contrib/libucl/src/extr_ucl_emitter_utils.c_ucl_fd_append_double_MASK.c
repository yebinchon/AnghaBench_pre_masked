
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nbuf ;


 int VAR_0 ;
 double const FUNC_0 (double) ;
 int FUNC_1 (char*,int,char*,double,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int ) ;

__attribute__((used)) static int
FUNC_4 (double VAR_1, void *VAR_2)
{
 int VAR_3 = *(int *)VAR_2;
 const double VAR_4 = 0.0000001;
 char VAR_5[64];

 if (VAR_1 == (double)(int)VAR_1) {
  FUNC_1 (VAR_5, sizeof (VAR_5), "%.1lf", VAR_1);
 }
 else if (FUNC_0 (VAR_1 - (double)(int)VAR_1) < VAR_4) {

  FUNC_1 (VAR_5, sizeof (VAR_5), "%.*lg", VAR_0, VAR_1);
 }
 else {
  FUNC_1 (VAR_5, sizeof (VAR_5), "%lf", VAR_1);
 }

 return FUNC_3 (VAR_3, VAR_5, FUNC_2 (VAR_5));
}

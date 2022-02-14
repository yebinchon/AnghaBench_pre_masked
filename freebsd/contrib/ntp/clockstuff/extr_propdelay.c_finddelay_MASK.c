
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 double FUNC_0 (double,double,double,double) ;
 int FUNC_1 (char*,int,...) ;
 double FUNC_2 (double,double,int) ;
 double FUNC_3 (double,double,int) ;

__attribute__((used)) static int
FUNC_4(
 double VAR_3,
 double VAR_4,
 double VAR_5,
 double VAR_6,
 double VAR_7,
 double *VAR_8
 )
{
 double VAR_9;
 double VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_2)
     FUNC_1("great circle distance %g km %g miles\n", VAR_9, VAR_9/VAR_0);

 VAR_11 = 1;
 while ((VAR_10 = FUNC_3(VAR_9, VAR_7, VAR_11)) < 0.0) {
  if (VAR_2)
      FUNC_1("tried %d hop%s, no good\n", VAR_11, VAR_11>1?"s":"");
  VAR_11++;
 }
 if (VAR_2)
     FUNC_1("%d hop%s okay, wave angle is %g\n", VAR_11, VAR_11>1?"s":"",
     VAR_10 / VAR_1);

 *VAR_8 = FUNC_2(VAR_9, VAR_7, VAR_11);
 return VAR_11;
}

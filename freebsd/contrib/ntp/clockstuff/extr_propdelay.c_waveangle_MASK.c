
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*,double,double,int,double) ;
 double FUNC_2 (double) ;
 scalar_t__ FUNC_3 (double) ;

__attribute__((used)) static double
FUNC_4(
 double VAR_3,
 double VAR_4,
 int VAR_5
 )
{
 double VAR_6;
 double VAR_7;

 VAR_6 = VAR_3 / (VAR_0 * (double)(2 * VAR_5));
 VAR_7 = FUNC_0((VAR_4 / (VAR_0 * FUNC_2(VAR_6))) + FUNC_3(VAR_6/2)) - VAR_6;
 if (VAR_2 >= 2)
     FUNC_1("waveangle dist %g height %g hops %d angle %g\n",
     VAR_3, VAR_4, VAR_5, VAR_7 / VAR_1);
 return VAR_7;
}

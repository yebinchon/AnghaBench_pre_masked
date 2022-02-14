
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hrtime_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,...) ;

void
FUNC_1(hrtime_t VAR_1, char *VAR_2)
{
 hrtime_t VAR_3 = VAR_1 / VAR_0;
 hrtime_t VAR_4 = VAR_3 / 60;
 hrtime_t VAR_5 = VAR_4 / 60;
 hrtime_t VAR_6 = VAR_5 / 24;

 VAR_3 -= VAR_4 * 60;
 VAR_4 -= VAR_5 * 60;
 VAR_5 -= VAR_6 * 24;

 VAR_2[0] = '\0';

 if (VAR_6)
  (void) FUNC_0(VAR_2,
      "%llud%02lluh%02llum%02llus", VAR_6, VAR_5, VAR_4, VAR_3);
 else if (VAR_5)
  (void) FUNC_0(VAR_2, "%lluh%02llum%02llus", VAR_5, VAR_4, VAR_3);
 else if (VAR_4)
  (void) FUNC_0(VAR_2, "%llum%02llus", VAR_4, VAR_3);
 else
  (void) FUNC_0(VAR_2, "%llus", VAR_3);
}

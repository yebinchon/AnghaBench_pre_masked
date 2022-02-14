
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,float) ;

void
FUNC_1(int VAR_0,char *VAR_1)
{
 if (VAR_0 < 0)
  VAR_1[0]='\0';
 else if ( VAR_0==0 )
  FUNC_0(VAR_1,"%d", VAR_0);
 else if (VAR_0< 1000)
  FUNC_0(VAR_1,"%dus", VAR_0);
 else if (VAR_0 < 1000000)
  FUNC_0(VAR_1,"%gms", (float) VAR_0 / 1000);
 else
  FUNC_0(VAR_1,"%gfs", (float) VAR_0 / 1000000);
}

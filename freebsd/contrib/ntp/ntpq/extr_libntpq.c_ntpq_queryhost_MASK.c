
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int FUNC_0 (unsigned short,unsigned short,int ,int ,char*,int *,size_t*,char const**) ;
 int FUNC_1 (char*,char const*,size_t) ;
 scalar_t__ VAR_0 ;

int FUNC_2(unsigned short VAR_1, unsigned short VAR_2, char *VAR_3, int VAR_4)
{
 const char *VAR_5;
 int VAR_6;
 size_t VAR_7;
 u_short VAR_8;

 if ( VAR_0 > 0 )
  VAR_6 = FUNC_0(VAR_1,VAR_2,0,0, (char *)0, &VAR_8, &VAR_7, &VAR_5);
 else
  return 0;

 if ( ( VAR_6 != 0) || ( VAR_7 == 0 ) )
  return 0;

 if ( VAR_7 > VAR_4)
  VAR_7 = VAR_4;



 FUNC_1(VAR_3, VAR_5, VAR_7);

 return VAR_7;
}

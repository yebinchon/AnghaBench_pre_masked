
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 char VAR_8[16];
 uint32_t VAR_9[4];

 FUNC_0(1, VAR_9);
 if ((VAR_9[2] & VAR_0) == 0)
  return (0);

 FUNC_0(VAR_7, VAR_9);
 if (VAR_9[0] < VAR_6)
  return (0);

 ((uint32_t *)&VAR_8)[0] = VAR_9[1];
 ((uint32_t *)&VAR_8)[1] = VAR_9[2];
 ((uint32_t *)&VAR_8)[2] = VAR_9[3];
 VAR_8[12] = '\0';
 if (FUNC_1(VAR_8, "Microsoft Hv") != 0)
  return (0);

 FUNC_0(VAR_5, VAR_9);
 if (VAR_9[0] != VAR_1)
  return (0);

 FUNC_0(VAR_4, VAR_9);
 if ((VAR_9[0] & VAR_2) == 0)
  return (0);
 if ((VAR_9[0] & VAR_3) == 0)
  return (0);

 return (1);
}

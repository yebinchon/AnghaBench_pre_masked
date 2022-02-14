
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,int ) ;

int FUNC_3(const char *VAR_2, off_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return (-1);

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 VAR_6 = VAR_1;
 FUNC_0(VAR_4);
 if (VAR_5 == -1)
  VAR_1 = VAR_6;

 return(VAR_5);
}

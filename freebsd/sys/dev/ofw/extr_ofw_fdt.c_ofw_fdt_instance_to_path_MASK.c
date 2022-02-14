
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int phandle_t ;
typedef int ofw_t ;
typedef int ihandle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(ofw_t VAR_0, ihandle_t VAR_1, char *VAR_2, size_t VAR_3)
{
 phandle_t VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == -1)
  return (-1);

 return (FUNC_1(VAR_4, VAR_2, VAR_3));
}

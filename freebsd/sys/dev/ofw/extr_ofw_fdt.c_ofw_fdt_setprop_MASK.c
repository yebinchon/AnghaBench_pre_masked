
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int ofw_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char const*,void const*,size_t) ;
 scalar_t__ FUNC_2 (int ,int,char const*,void const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(ofw_t VAR_1, phandle_t VAR_2, const char *VAR_3,
    const void *VAR_4, size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 < 0)
  return (-1);

 if (FUNC_2(VAR_0, VAR_6, VAR_3, VAR_4, VAR_5) != 0)

  return (FUNC_1(VAR_0, VAR_6, VAR_3, VAR_4, VAR_5));

 return (0);
}

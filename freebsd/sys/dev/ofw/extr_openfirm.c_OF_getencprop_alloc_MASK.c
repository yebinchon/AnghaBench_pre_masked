
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int ,char const*,int,void**) ;

ssize_t
FUNC_1(phandle_t VAR_0, const char *VAR_1, void **VAR_2)
{
 ssize_t VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, sizeof(pcell_t),
     VAR_2);
 if (VAR_3 < 0)
  return (VAR_3);
 else
  return (VAR_3 * sizeof(pcell_t));
}

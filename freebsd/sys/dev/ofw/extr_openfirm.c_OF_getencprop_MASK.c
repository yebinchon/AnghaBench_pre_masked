
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,char const*,int *,size_t) ;
 int FUNC_2 (int ) ;

ssize_t
FUNC_3(phandle_t VAR_0, const char *VAR_1, pcell_t *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_3 % 4 == 0, ("Need a multiple of 4 bytes"));

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 <= 0)
  return (VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_3/4; VAR_5++)
  VAR_2[VAR_5] = FUNC_2(VAR_2[VAR_5]);

 return (VAR_4);
}

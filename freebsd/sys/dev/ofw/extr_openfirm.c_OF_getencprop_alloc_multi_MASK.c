
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int ,char const*,int,void**) ;
 int FUNC_1 (int ) ;

ssize_t
FUNC_2(phandle_t VAR_0, const char *VAR_1, int VAR_2,
    void **VAR_3)
{
 ssize_t VAR_4;
 pcell_t *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 == -1)
  return (-1);

 VAR_5 = *VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_4 * VAR_2 / 4; VAR_6++)
  VAR_5[VAR_6] = FUNC_1(VAR_5[VAR_6]);

 return (VAR_4);
}

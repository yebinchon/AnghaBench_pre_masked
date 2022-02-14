
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(phandle_t VAR_3, pcell_t *VAR_4, int *VAR_5, int *VAR_6,
    int *VAR_7)
{

 if (!FUNC_1(VAR_3, "arm,versatile-vic"))
  return (VAR_0);

 *VAR_5 = FUNC_0(VAR_4[0]);
 *VAR_6 = VAR_2;
 *VAR_7 = VAR_1;

 return (0);
}

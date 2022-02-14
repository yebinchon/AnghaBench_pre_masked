
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char const*,char const*,int,int *,int*,int **) ;

int
FUNC_2(phandle_t VAR_0, const char *VAR_1,
    const char *VAR_2, int VAR_3, phandle_t *VAR_4, int *VAR_5,
    pcell_t **VAR_6)
{

 FUNC_0(VAR_3 >= 0,
     ("ofw_bus_parse_xref_list_alloc: negative index supplied"));

 return (FUNC_1(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int *,int *,int*) ;

int
FUNC_2(phandle_t VAR_4, int VAR_5, bus_space_tag_t *VAR_6,
    bus_space_handle_t *VAR_7, bus_size_t *VAR_8)
{
 bus_addr_t VAR_9;
 bus_size_t VAR_10;
 pcell_t VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_1(VAR_4, VAR_5, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_13 < 0)
  return (VAR_13);
 *VAR_6 = VAR_3;
 VAR_12 = 0;


 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_10;

 return (FUNC_0(*VAR_6, VAR_9, VAR_10, VAR_12, VAR_7));
}

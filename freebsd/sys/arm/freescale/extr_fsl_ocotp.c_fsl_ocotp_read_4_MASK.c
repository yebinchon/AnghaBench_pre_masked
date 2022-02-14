
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;

uint32_t
FUNC_3(bus_size_t VAR_3)
{

 if (VAR_3 > VAR_0)
  FUNC_2("fsl_ocotp_read_4: offset out of range");


 if (VAR_2 != ((void*)0))
  return (FUNC_0(VAR_2, VAR_3));







 if (VAR_1 == ((void*)0))
  FUNC_1();

 return (VAR_1[VAR_3 / 4]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct siba_erom_io {scalar_t__ ncores; int eio; } ;
typedef int bus_size_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,scalar_t__,...) ;

__attribute__((used)) static uint32_t
FUNC_3(struct siba_erom_io *VAR_1, u_int VAR_2, bus_size_t VAR_3)
{

 if (VAR_2 >= VAR_1->ncores)
  FUNC_2("core index %u out of range (ncores=%u)", VAR_2,
      VAR_1->ncores);

 if (VAR_3 > VAR_0 - sizeof(uint32_t))
  FUNC_2("invalid core offset %#jx", (uintmax_t)VAR_3);


 return (FUNC_1(VAR_1->eio, FUNC_0(VAR_2) + VAR_3,
     4));
}

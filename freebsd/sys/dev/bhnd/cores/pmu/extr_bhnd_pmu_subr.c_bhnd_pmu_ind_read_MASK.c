
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_io {int (* rd4 ) (int ,void*) ;int (* wr4 ) (int ,int ,void*) ;} ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,void*) ;
 int FUNC_1 (int ,void*) ;

uint32_t
FUNC_2(const struct bhnd_pmu_io *VAR_0, void *VAR_1, bus_size_t VAR_2,
    bus_size_t VAR_3, uint32_t VAR_4)
{
 VAR_0->wr4(VAR_2, VAR_4, VAR_1);
 return (VAR_0->rd4(VAR_3, VAR_1));
}

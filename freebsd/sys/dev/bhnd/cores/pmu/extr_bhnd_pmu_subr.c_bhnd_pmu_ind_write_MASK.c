
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_io {int (* rd4 ) (int ,void*) ;int (* wr4 ) (int ,int,void*) ;} ;
typedef int bus_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,void*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,int,void*) ;

void
FUNC_3(const struct bhnd_pmu_io *VAR_1, void *VAR_2, bus_size_t VAR_3,
    bus_size_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8;

 VAR_1->wr4(VAR_3, VAR_5, VAR_2);

 if (VAR_7 != VAR_0) {
  VAR_8 = VAR_1->rd4(VAR_4, VAR_2);
  VAR_8 &= ~VAR_7 | (VAR_6 & VAR_7);
 } else {
  VAR_8 = VAR_6;
 }

 VAR_1->wr4(VAR_4, VAR_8, VAR_2);
}

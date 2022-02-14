
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct atse_softc {int atse_mem_res; } ;
typedef int bus_addr_t ;


 int FUNC_0 (char*,char const*,int const,char const*,char*,int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct atse_softc *VAR_0, bus_addr_t VAR_1, uint32_t VAR_2, uint16_t VAR_3,
    const char *VAR_4, const int VAR_5, const char *VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = FUNC_2(VAR_3 & 0x0000ffff);
 FUNC_0("[%s:%d] %s W %s 0x%08x (0x%08jx) = 0x%08x\n", VAR_4, VAR_5, VAR_6,
     "atse_mem_res", VAR_2, (VAR_1 + VAR_2) * 4, VAR_7);
 FUNC_1(VAR_0->atse_mem_res, (VAR_1 + VAR_2) * 4, VAR_7);
}

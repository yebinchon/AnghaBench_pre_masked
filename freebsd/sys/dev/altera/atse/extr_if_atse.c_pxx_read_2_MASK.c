
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct atse_softc {int atse_mem_res; } ;
typedef int bus_addr_t ;


 int FUNC_0 (char*,char const*,int const,char const*,char*,int,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline uint16_t
FUNC_3(struct atse_softc *VAR_0, bus_addr_t VAR_1, uint32_t VAR_2, const char *VAR_3,
    const int VAR_4, const char *VAR_5)
{
 uint32_t VAR_6;
 uint16_t VAR_7;

 VAR_6 = FUNC_1(VAR_0->atse_mem_res, (VAR_1 + VAR_2) * 4);
 VAR_7 = FUNC_2(VAR_6) & 0x0000ffff;
 FUNC_0("[%s:%d] %s R %s 0x%08x (0x%08jx) = 0x%04x\n", VAR_3, VAR_4, VAR_5,
     "atse_mem_res", VAR_2, (VAR_1 + VAR_2) * 4, VAR_7);

 return (VAR_7);
}

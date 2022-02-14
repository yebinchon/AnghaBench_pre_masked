
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atse_softc {int atse_mem_res; } ;


 int FUNC_0 (char*,char const*,int const,char*,int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct atse_softc *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
    const char *VAR_3, const int VAR_4)
{

 VAR_2 = FUNC_2(VAR_2);
 FUNC_0("[%s:%d] CSR W %s 0x%08x (0x%08x) = 0x%08x\n", VAR_3, VAR_4,
     "atse_mem_res", VAR_1, VAR_1 * 4, VAR_2);
 FUNC_1(VAR_0->atse_mem_res, VAR_1 * 4, VAR_2);
}

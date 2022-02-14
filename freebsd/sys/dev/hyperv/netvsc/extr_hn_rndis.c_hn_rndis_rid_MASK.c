
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hn_softc {int hn_rndis_rid; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(struct hn_softc *VAR_0)
{
 uint32_t VAR_1;

again:
 VAR_1 = FUNC_0(&VAR_0->hn_rndis_rid, 1);
 if (VAR_1 == 0)
  goto again;


 return ((VAR_1 & 0xffff) << 16);
}

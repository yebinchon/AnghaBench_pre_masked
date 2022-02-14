
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ioat_softc {scalar_t__ version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ioat_softc*,int ) ;
 int FUNC_1 (struct ioat_softc*,int ) ;

__attribute__((used)) static inline uint64_t
FUNC_2(struct ioat_softc *VAR_2)
{
 uint64_t VAR_3;

 if (VAR_2->version >= VAR_1)
  VAR_3 = FUNC_0(VAR_2, VAR_0);
 else

  VAR_3 = FUNC_1(VAR_2, VAR_0);
 return (VAR_3);
}

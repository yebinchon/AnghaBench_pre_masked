
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct bxe_softc *VAR_2, uint8_t VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(VAR_2))
  VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3);

 return VAR_4;
}

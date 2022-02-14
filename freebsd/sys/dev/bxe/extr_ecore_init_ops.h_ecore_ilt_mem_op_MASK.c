
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bxe_softc *VAR_3, uint8_t VAR_4)
{
 int VAR_5 = FUNC_2(VAR_3, VAR_0, VAR_4);
 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_4);
 if (!VAR_5 && FUNC_0(VAR_3) && !FUNC_1(VAR_3))
  VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_4);

 return VAR_5;
}

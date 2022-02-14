
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bwi_softc {int dummy; } ;
struct bwi_desc32 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwi_softc*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct bwi_softc *VAR_2, uint32_t VAR_3, int VAR_4)
{
 VAR_4 = (VAR_4 + 1) % VAR_1;
 FUNC_0(VAR_2, VAR_3 + VAR_0,
      VAR_4 * sizeof(struct bwi_desc32));
}

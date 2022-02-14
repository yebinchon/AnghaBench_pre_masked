
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {scalar_t__ src_mode; scalar_t__ dst_mode; } ;
typedef int ahd_mode_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ahd_softc*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ahd_softc*) ;

__attribute__((used)) static __inline ahd_mode_state
FUNC_2(struct ahd_softc *VAR_1)
{
 if (VAR_1->src_mode == VAR_0
  || VAR_1->dst_mode == VAR_0)
  FUNC_1(VAR_1);

 return (FUNC_0(VAR_1, VAR_1->src_mode, VAR_1->dst_mode));
}

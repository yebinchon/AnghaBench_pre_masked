
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ichwd_softc {int device; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ichwd_softc*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ichwd_softc*,int ,int) ;

__attribute__((used)) static __inline void
FUNC_3(struct ichwd_softc *VAR_3)
{
 uint16_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0) & VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_4 | VAR_2);
 VAR_3->active = 0;
 FUNC_1(VAR_3->device, "timer disabled\n");
}

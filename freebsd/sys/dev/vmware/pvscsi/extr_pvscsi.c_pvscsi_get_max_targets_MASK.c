
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvscsi_softc*,int ) ;
 int FUNC_1 (struct pvscsi_softc*,int ,int *,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct pvscsi_softc *VAR_2)
{
 uint32_t VAR_3;

 FUNC_1(VAR_2, VAR_0, ((void*)0), 0);

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3 == ~0) {
  VAR_3 = 16;
 }

 return (VAR_3);
}

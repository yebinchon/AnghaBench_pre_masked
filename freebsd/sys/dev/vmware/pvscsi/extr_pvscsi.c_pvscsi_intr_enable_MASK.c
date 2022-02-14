
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {scalar_t__ use_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pvscsi_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct pvscsi_softc *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_0;
 if (VAR_3->use_msg) {
  VAR_4 |= VAR_1;
 }

 FUNC_0(VAR_3, VAR_2, VAR_4);
}

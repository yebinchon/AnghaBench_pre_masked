
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pvscsi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct pvscsi_softc *VAR_2, uint32_t VAR_3, void *VAR_4,
   uint32_t VAR_5)
{
 uint32_t *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5 % sizeof(uint32_t) == 0,
  ("command size not a multiple of 4"));

 VAR_6 = VAR_4;
 VAR_5 /= sizeof(uint32_t);

 FUNC_1(VAR_2, VAR_0, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  FUNC_1(VAR_2, VAR_1,
     VAR_6[VAR_7]);
 }
}

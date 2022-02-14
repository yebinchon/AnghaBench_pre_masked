
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct creator_softc {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct creator_softc*,int ,int ,int const) ;
 int FUNC_1 (struct creator_softc*,int ) ;
 int ** VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct creator_softc *VAR_7)
{
 int VAR_8, VAR_9;

 FUNC_1(VAR_7, 0);
 FUNC_0(VAR_7, VAR_0, VAR_4, VAR_3);
 FUNC_0(VAR_7, VAR_0, VAR_5, 0xffffff);
 FUNC_0(VAR_7, VAR_0, VAR_5, 0x0);
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  FUNC_0(VAR_7, VAR_0, VAR_4,
      VAR_8 ? VAR_1 : VAR_2);
  for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {
   FUNC_0(VAR_7, VAR_0, VAR_5,
       *(const uint32_t *)(&VAR_6[VAR_9][0]));
   FUNC_0(VAR_7, VAR_0, VAR_5,
       *(const uint32_t *)(&VAR_6[VAR_9][4]));
  }
 }
}

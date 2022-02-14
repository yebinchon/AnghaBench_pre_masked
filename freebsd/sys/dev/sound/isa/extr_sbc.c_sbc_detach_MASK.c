
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbc_softc {int child_pcm; int child_midi1; int child_midi2; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct sbc_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct sbc_softc*) ;
 int FUNC_4 (struct sbc_softc*) ;
 int FUNC_5 (struct sbc_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 struct sbc_softc *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_1);
 FUNC_1(VAR_0, VAR_1->child_midi2);
 FUNC_1(VAR_0, VAR_1->child_midi1);
 FUNC_1(VAR_0, VAR_1->child_pcm);
 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 return FUNC_0(VAR_0);
}

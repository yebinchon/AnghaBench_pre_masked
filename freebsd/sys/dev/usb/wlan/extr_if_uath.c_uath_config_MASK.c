
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct uath_write_mac {scalar_t__ data; void* len; void* reg; } ;
struct uath_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (struct uath_softc*,int ,struct uath_write_mac*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct uath_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct uath_write_mac VAR_4;
 int VAR_5;

 VAR_4.reg = FUNC_1(VAR_2);
 VAR_4.len = FUNC_1(0);
 *(uint32_t *)VAR_4.data = FUNC_1(VAR_3);

 VAR_5 = FUNC_2(VAR_1, VAR_0, &VAR_4,
     3 * sizeof (uint32_t), 0);
 if (VAR_5 != 0) {
  FUNC_0(VAR_1->sc_dev, "could not write register 0x%02x\n",
      VAR_2);
 }
 return (VAR_5);
}

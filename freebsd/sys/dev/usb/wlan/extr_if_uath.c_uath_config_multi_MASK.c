
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uath_write_mac {int data; void* len; void* reg; } ;
struct uath_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (void const*,int ,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct uath_softc*,int ,struct uath_write_mac*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct uath_softc *VAR_1, uint32_t VAR_2, const void *VAR_3,
    int VAR_4)
{
 struct uath_write_mac VAR_5;
 int VAR_6;

 VAR_5.reg = FUNC_2(VAR_2);
 VAR_5.len = FUNC_2(VAR_4);
 FUNC_0(VAR_3, VAR_5.data, VAR_4);


 VAR_6 = FUNC_3(VAR_1, VAR_0, &VAR_5,
     (VAR_4 == 0) ? sizeof (uint32_t) : 2 * sizeof (uint32_t) + VAR_4, 0);
 if (VAR_6 != 0) {
  FUNC_1(VAR_1->sc_dev,
      "could not write %d bytes to register 0x%02x\n", VAR_4, VAR_2);
 }
 return (VAR_6);
}

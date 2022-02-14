
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipu_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipu_softc*,int) ;
 int FUNC_1 (struct ipu_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ipu_softc *VAR_6, int VAR_7,
 int VAR_8)
{
 uint32_t VAR_9, VAR_10;

 VAR_9 = (VAR_7 ? VAR_4 : VAR_1)
     + (VAR_8 - 1) * sizeof(uint32_t);
 FUNC_1(VAR_6, VAR_9, 0);

 VAR_9 = (VAR_7 ? VAR_5 : VAR_2)
     + (VAR_8 - 1) * sizeof(uint32_t);
 FUNC_1(VAR_6, VAR_9, 0);

 VAR_9 = (VAR_7 ? VAR_3 : VAR_0)
     + (VAR_8 - 1) / 2 * sizeof(uint32_t);
 VAR_10 = FUNC_0(VAR_6, VAR_9);
 if (VAR_8 % 2)
  VAR_10 &= ~(0xffff);
 else
  VAR_10 &= ~(0xffff << 16);
 FUNC_1(VAR_6, VAR_9, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipu_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ipu_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct ipu_softc *VAR_2, int VAR_3,
 int VAR_4, int VAR_5, int VAR_6,
 int VAR_7, int VAR_8)
{
 uint32_t VAR_9, VAR_10;

 VAR_9 = (VAR_3 ? VAR_1 : VAR_0)
     + (VAR_4 - 1) * sizeof(uint32_t);
 VAR_10 = FUNC_2(VAR_5) |
     FUNC_1(VAR_6) |
     FUNC_0(VAR_7) | VAR_8;
 FUNC_3(VAR_2, VAR_9, VAR_10);
}

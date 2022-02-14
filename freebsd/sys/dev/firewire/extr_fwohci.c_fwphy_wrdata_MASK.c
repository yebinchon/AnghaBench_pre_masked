
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fwohci_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct fwohci_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fwohci_softc*,int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct fwohci_softc *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;

 VAR_5 &= 0xf;
 VAR_6 &= 0xff;

 VAR_7 = (VAR_2 | (VAR_5 << VAR_1) |
       (VAR_6 << VAR_3));
 FUNC_1(VAR_4, VAR_0, VAR_7);
 FUNC_0(100);

 return (FUNC_2(VAR_4, VAR_5));
}

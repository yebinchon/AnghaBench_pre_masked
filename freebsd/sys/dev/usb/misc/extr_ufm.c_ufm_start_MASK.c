
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ufm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ufm_softc*,int ,int,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct ufm_softc *VAR_3, void *VAR_4)
{
 uint8_t VAR_5;

 if (FUNC_0(VAR_3, VAR_1,
     0x00, 0xc7, &VAR_5)) {
  return (VAR_0);
 }
 if (FUNC_0(VAR_3, VAR_2,
     0x01, 0x00, &VAR_5)) {
  return (VAR_0);
 }
 if (VAR_5 & 0x1) {
  return (VAR_0);
 }
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct udl_softc {int dummy; } ;
typedef int lbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct udl_softc*,int ,int ,int,int,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct udl_softc *VAR_3, uint32_t *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_2,
     VAR_0, 0x0000, 0x0000, (uint8_t *)&VAR_5, sizeof(VAR_5));
 if (VAR_6 == VAR_1)
  *VAR_4 = FUNC_0(VAR_5);
 return (VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ucom_softc {int dummy; } ;
struct termios {int c_ospeed; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct ucom_softc *VAR_1, struct termios *VAR_2)
{
 uint8_t VAR_3;
 uint16_t VAR_4;

 if (FUNC_0(VAR_2->c_ospeed, &VAR_4, &VAR_3) || !VAR_4)
  return (VAR_0);
 return (0);
}

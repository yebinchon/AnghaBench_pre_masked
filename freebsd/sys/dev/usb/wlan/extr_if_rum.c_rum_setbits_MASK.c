
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rum_softc {int dummy; } ;


 int FUNC_0 (struct rum_softc*,int ) ;
 int FUNC_1 (struct rum_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct rum_softc *VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 return (FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0, VAR_1) | VAR_2));
}

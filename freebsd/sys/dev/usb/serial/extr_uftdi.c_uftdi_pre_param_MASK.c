
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uftdi_param_config {int dummy; } ;
struct ucom_softc {int dummy; } ;
struct termios {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ucom_softc*,struct termios*,struct uftdi_param_config*) ;

__attribute__((used)) static int
FUNC_2(struct ucom_softc *VAR_0, struct termios *VAR_1)
{
 struct uftdi_param_config VAR_2;

 FUNC_0("\n");

 return (FUNC_1(VAR_0, VAR_1, &VAR_2));
}

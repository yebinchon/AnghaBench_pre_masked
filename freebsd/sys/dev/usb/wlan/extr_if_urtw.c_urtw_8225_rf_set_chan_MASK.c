
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct urtw_softc {int sc_mtx; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,int) ;
 int FUNC_1 (struct urtw_softc*,int ,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct urtw_softc *VAR_2, int VAR_3)
{
 usb_error_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  goto fail;
 FUNC_1(VAR_2, VAR_0, VAR_1[VAR_3]);
 FUNC_2(&VAR_2->sc_mtx, 10);
fail:
 return (VAR_4);
}

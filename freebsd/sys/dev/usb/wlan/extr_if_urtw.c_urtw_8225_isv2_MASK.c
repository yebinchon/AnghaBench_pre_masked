
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint32_t ;
struct urtw_softc {int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,int ,scalar_t__*) ;
 int FUNC_1 (struct urtw_softc*,int ,int ) ;
 int FUNC_2 (struct urtw_softc*,int ,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct urtw_softc *VAR_11, int *VAR_12)
{
 uint32_t VAR_13;
 usb_error_t VAR_14;

 *VAR_12 = 1;

 FUNC_2(VAR_11, VAR_9, VAR_8);
 FUNC_2(VAR_11, VAR_10, VAR_8);
 FUNC_2(VAR_11, VAR_7, VAR_8);
 FUNC_3(&VAR_11->sc_mtx, 500);

 FUNC_1(VAR_11, VAR_2,
     VAR_0);

 VAR_14 = FUNC_0(VAR_11, VAR_4, &VAR_13);
 if (VAR_14 != 0)
  goto fail;
 if (VAR_13 != VAR_3)
  *VAR_12 = 0;
 else {
  VAR_14 = FUNC_0(VAR_11, VAR_6, &VAR_13);
  if (VAR_14 != 0)
   goto fail;
  if (VAR_13 != VAR_5)
   *VAR_12 = 0;
 }

 FUNC_1(VAR_11, VAR_2,
     VAR_1);
fail:
 return (VAR_14);
}

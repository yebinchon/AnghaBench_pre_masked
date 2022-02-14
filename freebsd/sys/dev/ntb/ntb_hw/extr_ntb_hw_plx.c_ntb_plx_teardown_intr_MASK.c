
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_plx_softc {scalar_t__ int_res; int int_rid; int int_tag; int link; } ;
typedef int device_t ;


 int FUNC_0 (struct ntb_plx_softc*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 struct ntb_plx_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1)
{
 struct ntb_plx_softc *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2->link)
  FUNC_0(VAR_2, 0xfe4, 0xf);

 if (VAR_2->int_res) {
  FUNC_2(VAR_1, VAR_2->int_res, VAR_2->int_tag);
  FUNC_1(VAR_1, VAR_0, VAR_2->int_rid,
      VAR_2->int_res);
 }
}

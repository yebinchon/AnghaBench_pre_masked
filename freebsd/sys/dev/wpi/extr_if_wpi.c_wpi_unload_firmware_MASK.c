
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_softc {int * fw_fp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct wpi_softc *VAR_1)
{
 if (VAR_1->fw_fp != ((void*)0)) {
  FUNC_0(VAR_1->fw_fp, VAR_0);
  VAR_1->fw_fp = ((void*)0);
 }
}

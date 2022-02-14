
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmds_config {int pad_ctls; int peak_c; int drive_c; int pe_c; int pll1; int pll0; } ;
struct hdmi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdmi_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct hdmi_softc *VAR_6, const struct tmds_config *VAR_7)
{

 FUNC_0(VAR_6, VAR_4, VAR_7->pll0);
 FUNC_0(VAR_6, VAR_5, VAR_7->pll1);
 FUNC_0(VAR_6, VAR_0, VAR_7->pe_c);
 FUNC_0(VAR_6, VAR_2, VAR_7->drive_c);
 FUNC_0(VAR_6, VAR_1, VAR_7->peak_c);
 FUNC_0(VAR_6, VAR_3, VAR_7->pad_ctls);
}

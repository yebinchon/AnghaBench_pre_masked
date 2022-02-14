
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_spd_infoframe {int sdi; int product; int vendor; } ;
struct hdmi_any_infoframe {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct hdmi_any_infoframe*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hdmi_spd_infoframe *VAR_0)
{
 uint8_t VAR_1[17];

 FUNC_0((struct hdmi_any_infoframe *)VAR_0);

 FUNC_3(VAR_1, 0, sizeof(VAR_1));

 FUNC_4(VAR_1, VAR_0->vendor, 8);
 FUNC_1("    vendor: %s\n", VAR_1);
 FUNC_4(VAR_1, VAR_0->product, 16);
 FUNC_1("    product: %s\n", VAR_1);
 FUNC_1("    source device information: %s (0x%x)\n",
  FUNC_2(VAR_0->sdi), VAR_0->sdi);
}

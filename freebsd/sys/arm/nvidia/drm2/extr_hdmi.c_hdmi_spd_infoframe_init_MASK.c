
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spd_infoframe {int version; int product; int vendor; int length; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdmi_spd_infoframe*,int ,int) ;
 int FUNC_1 (int ,char const*,int) ;

int FUNC_2(struct hdmi_spd_infoframe *VAR_2,
       const char *VAR_3, const char *VAR_4)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->type = VAR_0;
 VAR_2->version = 1;
 VAR_2->length = VAR_1;

 FUNC_1(VAR_2->vendor, VAR_3, sizeof(VAR_2->vendor));
 FUNC_1(VAR_2->product, VAR_4, sizeof(VAR_2->product));

 return 0;
}

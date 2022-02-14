
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_vendor_infoframe {int version; int s3d_struct; int oui; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdmi_vendor_infoframe*,int ,int) ;

int FUNC_1(struct hdmi_vendor_infoframe *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->type = VAR_2;
 VAR_3->version = 1;

 VAR_3->oui = VAR_1;





 VAR_3->s3d_struct = VAR_0;

 return 0;
}

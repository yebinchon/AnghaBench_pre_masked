
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ugd ;
struct usb_gen_descriptor {unsigned int ugd_maxlen; int ugd_report_type; int ugd_data; } ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int,int ,struct usb_gen_descriptor*) ;
 int FUNC_2 (struct usb_gen_descriptor*,int ,int) ;

int
FUNC_3(int VAR_1, enum hid_kind VAR_2, unsigned char *VAR_3, unsigned int VAR_4)
{
 struct usb_gen_descriptor VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ugd_data = FUNC_0(VAR_3);
 VAR_5.ugd_maxlen = VAR_4;
 VAR_5.ugd_report_type = VAR_2 + 1;
 return (FUNC_1(VAR_1, VAR_0, &VAR_5));
}

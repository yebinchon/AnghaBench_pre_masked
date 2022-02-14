
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ugd ;
struct usb_gen_descriptor {int ugd_maxlen; int ugd_actlen; void* ugd_data; } ;
typedef int * report_desc_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int * FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int * FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (int,int ,struct usb_gen_descriptor*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct usb_gen_descriptor*,int ,int) ;

report_desc_t
FUNC_7(int VAR_1)
{
 struct usb_gen_descriptor VAR_2;
 report_desc_t VAR_3;
 void *VAR_4;

 FUNC_6(&VAR_2, 0, sizeof(VAR_2));


 VAR_2.ugd_data = FUNC_2(((void*)0));
 VAR_2.ugd_maxlen = 65535;
 if (FUNC_4(VAR_1, VAR_0, &VAR_2) < 0) {





  return (((void*)0));

 }





 VAR_4 = FUNC_5(VAR_2.ugd_actlen);
 if (VAR_4 == ((void*)0))
  return (((void*)0));


 VAR_2.ugd_data = FUNC_2(VAR_4);
 VAR_2.ugd_maxlen = VAR_2.ugd_actlen;
 if (FUNC_4(VAR_1, VAR_0, &VAR_2) < 0) {

  FUNC_0(VAR_4);
  return (((void*)0));
 }


 if (VAR_2.ugd_actlen < 1) {

  FUNC_0(VAR_4);
  return (((void*)0));
 }


 if (((unsigned char *)VAR_4)[VAR_2.ugd_actlen -1] != 0xC0) {

  FUNC_0(VAR_4);
  return (((void*)0));
 }

 VAR_3 = FUNC_3(VAR_4, VAR_2.ugd_actlen);

 FUNC_0(VAR_4);

 return (VAR_3);
}

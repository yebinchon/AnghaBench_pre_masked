
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int * currcfg; } ;
struct TYPE_3__ {void* currextra; void* currep; void* currifc; void* currifcw; struct usb_config_descriptor* currcfg; } ;
struct usb_parse_state {int preparse; TYPE_2__ a; TYPE_1__ b; } ;
struct usb_config_descriptor {int dummy; } ;
typedef int ps ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (struct usb_parse_state*,int ,int) ;
 int FUNC_4 (struct usb_parse_state*) ;

int
FUNC_5(struct usb_config_descriptor *VAR_0,
    uint8_t *VAR_1)
{
 struct usb_parse_state VAR_2;
 uint8_t *VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 if ((VAR_1 == ((void*)0)) || (VAR_0 == ((void*)0))) {
  return (-1);
 }
 FUNC_3(&VAR_2, 0, sizeof(VAR_2));

 VAR_2.a.currcfg = FUNC_1(VAR_1);
 VAR_2.b.currcfg = VAR_0;
 if (VAR_2.a.currcfg == ((void*)0)) {

  return (-1);
 }

 VAR_2.preparse = 1;
 FUNC_4(&VAR_2);

 VAR_4 = ((uint8_t *)(VAR_2.b.currifcw) - ((uint8_t *)0));
 VAR_5 = ((uint8_t *)(VAR_2.b.currifc) - ((uint8_t *)0));
 VAR_6 = ((uint8_t *)(VAR_2.b.currep) - ((uint8_t *)0));
 VAR_7 = ((uint8_t *)(VAR_2.b.currextra) - ((uint8_t *)0));


 VAR_3 = FUNC_2(VAR_4 + VAR_5 + VAR_6 + VAR_7);
 if (VAR_3 == ((void*)0)) {

  FUNC_0(VAR_2.a.currcfg);
  return (-1);
 }


 VAR_2.b.currifcw = (void *)(VAR_3);
 VAR_2.b.currifc = (void *)(VAR_3 + VAR_4);
 VAR_2.b.currep = (void *)(VAR_3 + VAR_4 + VAR_5);
 VAR_2.b.currextra = (void *)(VAR_3 + VAR_4 + VAR_5 + VAR_6);


 VAR_2.preparse = 0;
 FUNC_4(&VAR_2);


 FUNC_0(VAR_2.a.currcfg);

 return (0);
}

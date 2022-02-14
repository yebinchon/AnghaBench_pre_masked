
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int time_t ;
struct bt_devinquiry {int clock_offset; int dev_class; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct bt_devfilter {int dummy; } ;
struct TYPE_6__ {int num_responses; } ;
typedef TYPE_1__ ng_hci_inquiry_result_ep ;
struct TYPE_7__ {int clock_offset; int uclass; int page_scan_period_mode; int page_scan_rep_mode; int bdaddr; } ;
typedef TYPE_2__ ng_hci_inquiry_response ;
struct TYPE_8__ {int* lap; void* num_responses; void* inquiry_length; } ;
typedef TYPE_3__ ng_hci_inquiry_cp ;
struct TYPE_9__ {int event; } ;
typedef TYPE_4__ ng_hci_event_pkt_t ;
typedef int buf ;
typedef int _devname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int,struct bt_devfilter*,struct bt_devfilter*) ;
 int FUNC_6 (struct bt_devfilter*,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,void**,int,int) ;
 scalar_t__ FUNC_9 (int,int ,TYPE_3__*,int) ;
 struct bt_devinquiry* FUNC_10 (int,int) ;
 int VAR_7 ;
 int FUNC_11 (struct bt_devinquiry*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (char*,int ,int) ;

int
FUNC_15(char const *VAR_8, time_t VAR_9, int VAR_10,
  struct bt_devinquiry **VAR_11)
{
 uint8_t VAR_12[320];
 char VAR_13[VAR_3];
 struct bt_devfilter VAR_14;
 ng_hci_inquiry_cp *VAR_15 = (ng_hci_inquiry_cp *) VAR_12;
 ng_hci_event_pkt_t *VAR_16 = (ng_hci_event_pkt_t *) VAR_12;
 ng_hci_inquiry_result_ep *VAR_17 = (ng_hci_inquiry_result_ep *)(VAR_16+1);
 ng_hci_inquiry_response *VAR_18;
 struct bt_devinquiry *VAR_19;
 int VAR_20, VAR_21;

 if (VAR_11 == ((void*)0)) {
  VAR_7 = VAR_0;
  return (-1);
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_14(VAR_13, 0, sizeof(VAR_13));
  VAR_8 = VAR_13;

  VAR_21 = FUNC_4(VAR_6, VAR_13);
  if (VAR_21 <= 0) {
   if (VAR_21 == 0)
    *VAR_11 = ((void*)0);

   return (VAR_21);
  }
 }

 VAR_20 = FUNC_7(VAR_8);
 if (VAR_20 < 0)
  return (-1);

 if (FUNC_5(VAR_20, ((void*)0), &VAR_14) < 0) {
  FUNC_3(VAR_20);
  return (-1);
 }

 FUNC_6(&VAR_14, 129);
 FUNC_6(&VAR_14, 128);

 if (FUNC_5(VAR_20, &VAR_14, ((void*)0)) < 0) {
  FUNC_3(VAR_20);
  return (-1);
 }


 VAR_15->lap[0] = 0x33;
 VAR_15->lap[1] = 0x8b;
 VAR_15->lap[2] = 0x9e;







 if (VAR_9 <= 0)
  VAR_9 = 5;
 else if (VAR_9 == 1)
  VAR_9 = 2;
 else if (VAR_9 > 62)
  VAR_9 = 62;

 VAR_15->inquiry_length = (uint8_t)((VAR_9 * 100) / 128);

 if (VAR_10 <= 0 || VAR_10 > 255)
  VAR_10 = 8;
 VAR_15->num_responses = (uint8_t) VAR_10;

 VAR_19 = *VAR_11 = FUNC_10(VAR_10, sizeof(struct bt_devinquiry));
 if (VAR_19 == ((void*)0)) {
  FUNC_3(VAR_20);
  VAR_7 = VAR_2;
  return (-1);
 }

 if (FUNC_9(VAR_20,
  FUNC_1(VAR_5, VAR_4),
   VAR_15, sizeof(*VAR_15)) < 0) {
  FUNC_11(VAR_19);
  FUNC_3(VAR_20);
  return (-1);
 }

wait_for_more:

 VAR_21 = FUNC_8(VAR_20, VAR_12, sizeof(VAR_12), VAR_9);
 if (VAR_21 < 0) {
  FUNC_11(VAR_19);
  FUNC_3(VAR_20);
  return (-1);
 }

 if (VAR_21 < sizeof(ng_hci_event_pkt_t)) {
  FUNC_11(VAR_19);
  FUNC_3(VAR_20);
  VAR_7 = VAR_1;
  return (-1);
 }

 switch (VAR_16->event) {
 case 129:
  break;

 case 128:
  VAR_18 = (ng_hci_inquiry_response *)(VAR_17 + 1);

  for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_17->num_responses, VAR_10); VAR_21 ++) {
   FUNC_2(&VAR_19->bdaddr, &VAR_18->bdaddr);
   VAR_19->pscan_rep_mode = VAR_18->page_scan_rep_mode;
   VAR_19->pscan_period_mode = VAR_18->page_scan_period_mode;
   FUNC_13(VAR_19->dev_class, VAR_18->uclass, sizeof(VAR_19->dev_class));
   VAR_19->clock_offset = FUNC_12(VAR_18->clock_offset);

   VAR_18 ++;
   VAR_19 ++;
   VAR_10 --;
  }


 default:
  goto wait_for_more;

 }

 FUNC_3(VAR_20);

 return (VAR_19 - *VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_features {int features; scalar_t__ status; } ;
struct hci_dev {int* features; int pkt_type; int esco_type; int name; } ;


 int FUNC_0 (char*,int ,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_25, struct sk_buff *VAR_26)
{
 struct hci_rp_read_local_features *VAR_27 = (void *) VAR_26->data;

 FUNC_0("%s status 0x%x", VAR_25->name, VAR_27->status);

 if (VAR_27->status)
  return;

 FUNC_1(VAR_25->features, VAR_27->features, 8);




 if (VAR_25->features[0] & VAR_15)
  VAR_25->pkt_type |= (VAR_11 | VAR_9);

 if (VAR_25->features[0] & VAR_16)
  VAR_25->pkt_type |= (VAR_12 | VAR_10);

 if (VAR_25->features[1] & VAR_23) {
  VAR_25->pkt_type |= (VAR_13);
  VAR_25->esco_type |= (VAR_7);
 }

 if (VAR_25->features[1] & VAR_24) {
  VAR_25->pkt_type |= (VAR_14);
  VAR_25->esco_type |= (VAR_8);
 }

 if (VAR_25->features[3] & VAR_20)
  VAR_25->esco_type |= (VAR_4);

 if (VAR_25->features[4] & VAR_21)
  VAR_25->esco_type |= (VAR_5);

 if (VAR_25->features[4] & VAR_22)
  VAR_25->esco_type |= (VAR_6);

 if (VAR_25->features[5] & VAR_18)
  VAR_25->esco_type |= (VAR_0);

 if (VAR_25->features[5] & VAR_19)
  VAR_25->esco_type |= (VAR_2);

 if (VAR_25->features[5] & VAR_17)
  VAR_25->esco_type |= (VAR_1 | VAR_3);

 FUNC_0("%s features 0x%.2x%.2x%.2x%.2x%.2x%.2x%.2x%.2x", VAR_25->name,
     VAR_25->features[0], VAR_25->features[1],
     VAR_25->features[2], VAR_25->features[3],
     VAR_25->features[4], VAR_25->features[5],
     VAR_25->features[6], VAR_25->features[7]);
}

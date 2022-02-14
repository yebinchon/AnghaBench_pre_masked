
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,void (*) (struct hci_dev*,unsigned long),unsigned long,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline int FUNC_4(struct hci_dev *VAR_2, void (*VAR_3)(struct hci_dev *VAR_4, unsigned long VAR_5),
    unsigned long VAR_6, __u32 VAR_7)
{
 int VAR_8;

 if (!FUNC_3(VAR_1, &VAR_2->flags))
  return -VAR_0;


 FUNC_1(VAR_2);
 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_6, VAR_7);
 FUNC_2(VAR_2);

 return VAR_8;
}

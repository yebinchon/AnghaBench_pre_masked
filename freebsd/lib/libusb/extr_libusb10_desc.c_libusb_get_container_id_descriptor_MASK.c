
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_context {int dummy; } ;
struct libusb_container_id_descriptor {scalar_t__ bDevCapabilityType; int ContainerID; int bReserved; int bDescriptorType; scalar_t__ bLength; } ;
struct libusb_bos_dev_capability_descriptor {scalar_t__ bDevCapabilityType; scalar_t__ bLength; int * dev_capability_data; int bDescriptorType; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct libusb_container_id_descriptor* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

int
FUNC_2(struct libusb_context *VAR_5,
    struct libusb_bos_dev_capability_descriptor *VAR_6,
    struct libusb_container_id_descriptor **VAR_7)
{
 struct libusb_container_id_descriptor *VAR_8;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) ||
     VAR_6->bDevCapabilityType != VAR_0)
  return (VAR_2);
 if (VAR_6->bLength < VAR_1)
  return (VAR_3);

 VAR_8 = FUNC_0(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (VAR_4);

 VAR_8->bLength = VAR_1;
 VAR_8->bDescriptorType = VAR_6->bDescriptorType;
 VAR_8->bDevCapabilityType = VAR_6->bDevCapabilityType;
 VAR_8->bReserved = VAR_6->dev_capability_data[0];
 FUNC_1(VAR_8->ContainerID, VAR_6->dev_capability_data + 1,
     sizeof(VAR_8->ContainerID));

 *VAR_7 = VAR_8;
 return (0);
}

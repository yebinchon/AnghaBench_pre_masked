
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int vendor; int device; int subvendor; int subdevice; int class; int class_mask; } ;


 int FUNC_0 (char*,char*,int,unsigned char) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*,unsigned char) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1,
   struct pci_device_id *VAR_2, char *VAR_3)
{

 unsigned char VAR_4, VAR_5, VAR_6,
  VAR_7, VAR_8, VAR_9;

 VAR_2->vendor = FUNC_1(VAR_2->vendor);
 VAR_2->device = FUNC_1(VAR_2->device);
 VAR_2->subvendor = FUNC_1(VAR_2->subvendor);
 VAR_2->subdevice = FUNC_1(VAR_2->subdevice);
 VAR_2->class = FUNC_1(VAR_2->class);
 VAR_2->class_mask = FUNC_1(VAR_2->class_mask);

 FUNC_3(VAR_3, "pci:");
 FUNC_0(VAR_3, "v", VAR_2->vendor != VAR_0, VAR_2->vendor);
 FUNC_0(VAR_3, "d", VAR_2->device != VAR_0, VAR_2->device);
 FUNC_0(VAR_3, "sv", VAR_2->subvendor != VAR_0, VAR_2->subvendor);
 FUNC_0(VAR_3, "sd", VAR_2->subdevice != VAR_0, VAR_2->subdevice);

 VAR_4 = (VAR_2->class) >> 16;
 VAR_7 = (VAR_2->class_mask) >> 16;
 VAR_5 = (VAR_2->class) >> 8;
 VAR_8 = (VAR_2->class_mask) >> 8;
 VAR_6 = VAR_2->class;
 VAR_9 = VAR_2->class_mask;

 if ((VAR_7 != 0 && VAR_7 != 0xFF)
     || (VAR_8 != 0 && VAR_8 != 0xFF)
     || (VAR_9 != 0 && VAR_9 != 0xFF)) {
  FUNC_4("Can't handle masks in %s:%04X\n",
       VAR_1, VAR_2->class_mask);
  return 0;
 }

 FUNC_0(VAR_3, "bc", VAR_7 == 0xFF, VAR_4);
 FUNC_0(VAR_3, "sc", VAR_8 == 0xFF, VAR_5);
 FUNC_0(VAR_3, "i", VAR_9 == 0xFF, VAR_6);
 FUNC_2(VAR_3);
 return 1;
}

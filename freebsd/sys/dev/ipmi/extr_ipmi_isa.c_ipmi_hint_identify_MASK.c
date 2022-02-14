
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_get_info {int address; int io_mode; int offset; int iface_type; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ipmi_get_info*,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (char const*,int,char*,int*) ;
 scalar_t__ FUNC_6 (char const*,int,char*,char const**) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, struct ipmi_get_info *VAR_6)
{
 const char *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;


 VAR_8 = FUNC_2(VAR_5);
 VAR_10 = FUNC_3(VAR_5);
 if (FUNC_6(VAR_8, VAR_10, "mode", &VAR_7) != 0)
  return (0);


 FUNC_1(VAR_6, sizeof(struct ipmi_get_info));
 if (FUNC_7(VAR_7, "KCS") == 0) {
  VAR_6->iface_type = VAR_1;
  VAR_6->address = 0xca2;
  VAR_6->io_mode = 1;
  VAR_6->offset = 1;
 } else if (FUNC_7(VAR_7, "SMIC") == 0) {
  VAR_6->iface_type = VAR_2;
  VAR_6->address = 0xca9;
  VAR_6->io_mode = 1;
  VAR_6->offset = 1;
 } else if (FUNC_7(VAR_7, "BT") == 0) {
  VAR_6->iface_type = VAR_0;
  VAR_6->address = 0xe4;
  VAR_6->io_mode = 1;
  VAR_6->offset = 1;
 } else {
  FUNC_4(VAR_5, "Invalid mode %s\n", VAR_7);
  return (0);
 }





 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  FUNC_0(VAR_5, VAR_4, VAR_9);
  FUNC_0(VAR_5, VAR_3, VAR_9);
 }


 if (FUNC_5(VAR_8, VAR_10, "port", &VAR_11) == 0 && VAR_11 != 0) {
  VAR_6->address = VAR_11;
  VAR_6->io_mode = 1;
 } else if (FUNC_5(VAR_8, VAR_10, "maddr", &VAR_11) == 0 &&
     VAR_11 != 0) {
  VAR_6->address = VAR_11;
  VAR_6->io_mode = 0;
 }


 if (FUNC_5(VAR_8, VAR_10, "spacing", &VAR_11) == 0) {
  switch (VAR_11) {
  case 8:
   VAR_6->offset = 1;
   break;
  case 16:
   VAR_6->offset = 2;
   break;
  case 32:
   VAR_6->offset = 4;
   break;
  default:
   FUNC_4(VAR_5, "Invalid register spacing\n");
   return (0);
  }
 }
 return (1);
}

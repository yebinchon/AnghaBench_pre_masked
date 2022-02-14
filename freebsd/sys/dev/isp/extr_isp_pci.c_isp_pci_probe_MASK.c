
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9)
{
 switch ((FUNC_1(VAR_9) << 16) | (FUNC_3(VAR_9))) {
 case 149:
  FUNC_0(VAR_9, "Qlogic ISP 1020/1040 PCI SCSI Adapter");
  break;
 case 148:
  FUNC_0(VAR_9, "Qlogic ISP 1080 PCI SCSI Adapter");
  break;
 case 146:
  FUNC_0(VAR_9, "Qlogic ISP 1240 PCI SCSI Adapter");
  break;
 case 145:
  FUNC_0(VAR_9, "Qlogic ISP 1280 PCI SCSI Adapter");
  break;
 case 150:
  FUNC_0(VAR_9, "Qlogic ISP 10160 PCI SCSI Adapter");
  break;
 case 147:
  if (FUNC_2(VAR_9) == VAR_0) {
   return (VAR_2);
  }
  FUNC_0(VAR_9, "Qlogic ISP 12160 PCI SCSI Adapter");
  break;
 case 143:
  FUNC_0(VAR_9, "Qlogic ISP 2100 PCI FC-AL Adapter");
  break;
 case 142:
  FUNC_0(VAR_9, "Qlogic ISP 2200 PCI FC-AL Adapter");
  break;
 case 141:
  FUNC_0(VAR_9, "Qlogic ISP 2300 PCI FC-AL Adapter");
  break;
 case 140:
  FUNC_0(VAR_9, "Qlogic ISP 2312 PCI FC-AL Adapter");
  break;
 case 139:
  FUNC_0(VAR_9, "Qlogic ISP 2322 PCI FC-AL Adapter");
  break;
 case 138:
  FUNC_0(VAR_9, "Qlogic ISP 2422 PCI FC-AL Adapter");
  break;
 case 137:
  FUNC_0(VAR_9, "Qlogic ISP 2432 PCI FC-AL Adapter");
  break;
 case 136:
  FUNC_0(VAR_9, "Qlogic ISP 2532 PCI FC-AL Adapter");
  break;
 case 131:
  FUNC_0(VAR_9, "Qlogic ISP 5432 PCI FC-AL Adapter");
  break;
 case 130:
  FUNC_0(VAR_9, "Qlogic ISP 6312 PCI FC-AL Adapter");
  break;
 case 129:
  FUNC_0(VAR_9, "Qlogic ISP 6322 PCI FC-AL Adapter");
  break;
 case 144:
  FUNC_0(VAR_9, "Qlogic ISP 2031 PCI FC-AL Adapter");
  break;
 case 128:
  FUNC_0(VAR_9, "Qlogic ISP 8031 PCI FCoE Adapter");
  break;
 case 135:
  FUNC_0(VAR_9, "Qlogic ISP 2684 PCI FC Adapter");
  break;
 case 134:
  FUNC_0(VAR_9, "Qlogic ISP 2692 PCI FC Adapter");
  break;
 case 133:
  FUNC_0(VAR_9, "Qlogic ISP 2714 PCI FC Adapter");
  break;
 case 132:
  FUNC_0(VAR_9, "Qlogic ISP 2722 PCI FC Adapter");
  break;
 default:
  return (VAR_2);
 }
 if (VAR_8 == 0 && VAR_7) {
  FUNC_4("Qlogic ISP Driver, FreeBSD Version %d.%d, "
      "Core Version %d.%d\n",
      VAR_5, VAR_6,
      VAR_3, VAR_4);
  VAR_8++;
 }




 return (VAR_1);
}

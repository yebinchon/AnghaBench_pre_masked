
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_2("SUNW,fas", VAR_3) == 0) {
  FUNC_0(VAR_2, "Sun FAS366 Fast-Wide SCSI");
         return (VAR_0);
 } else if (FUNC_2("esp", VAR_3) == 0) {
  FUNC_0(VAR_2, "Sun ESP SCSI/Sun FAS Fast-SCSI");
         return (VAR_0);
 }

 return (VAR_1);
}

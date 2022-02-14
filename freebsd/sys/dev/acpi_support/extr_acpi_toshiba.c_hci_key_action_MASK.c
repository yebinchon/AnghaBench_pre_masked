
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_toshiba_softc {int video_handle; } ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct acpi_toshiba_softc *VAR_3, ACPI_HANDLE VAR_4, UINT32 VAR_5)
{
 UINT32 VAR_6;

 FUNC_0(VAR_2);
 switch (VAR_5) {
 case 130:

  FUNC_3(VAR_4, VAR_0, &VAR_6);
  if (VAR_6-- == 0)
   VAR_6 = 0;
  else
   FUNC_3(VAR_4, VAR_1, &VAR_6);
  break;
 case 129:

  FUNC_3(VAR_4, VAR_0, &VAR_6);
  if (VAR_6++ == 7)
   VAR_6 = 7;
  else
   FUNC_3(VAR_4, VAR_1, &VAR_6);
  break;
 case 131:

  FUNC_4(VAR_4, VAR_0, &VAR_6);
  VAR_6 = (VAR_6 + 1) % 7;
  FUNC_4(VAR_3->video_handle, VAR_1, &VAR_6);
  break;
 case 128:

  FUNC_2(VAR_4, VAR_0, &VAR_6);
  VAR_6 = (VAR_6 != 0) ? 0 : 1;
  FUNC_2(VAR_4, VAR_1, &VAR_6);
  break;
 case 132:

  FUNC_1(VAR_4, VAR_0, &VAR_6);
  VAR_6 = (VAR_6 != 0) ? 0 : 1;
  FUNC_1(VAR_4, VAR_1, &VAR_6);
  break;
 }
}

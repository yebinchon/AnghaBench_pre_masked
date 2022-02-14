
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int dummy; } ;
struct acpi_panasonic_softc {int dev; } ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_softc*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct acpi_panasonic_softc *VAR_4, ACPI_HANDLE VAR_5,
    UINT32 VAR_6)
{
 struct acpi_softc *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_4->dev);

 FUNC_0(VAR_3);
 switch (VAR_6) {
 case 1:

  FUNC_4(VAR_5, VAR_0, &VAR_9);
  FUNC_5(VAR_5, VAR_0, &VAR_10);
  FUNC_3(VAR_5, VAR_0, &VAR_8);
  VAR_8 -= VAR_9 / VAR_1;
  if (VAR_8 < VAR_10)
   VAR_8 = VAR_10;
  else if (VAR_8 > VAR_9)
   VAR_8 = VAR_9;
  FUNC_3(VAR_5, VAR_2, &VAR_8);
  break;
 case 2:

  FUNC_4(VAR_5, VAR_0, &VAR_9);
  FUNC_5(VAR_5, VAR_0, &VAR_10);
  FUNC_3(VAR_5, VAR_0, &VAR_8);
  VAR_8 += VAR_9 / VAR_1;
  if (VAR_8 < VAR_10)
   VAR_8 = VAR_10;
  else if (VAR_8 > VAR_9)
   VAR_8 = VAR_9;
  FUNC_3(VAR_5, VAR_2, &VAR_8);
  break;
 case 4:

  FUNC_6(VAR_5, VAR_0, &VAR_8);
  if (VAR_8)
   VAR_8 = 0;
  else
   VAR_8 = 1;
  FUNC_6(VAR_5, VAR_2, &VAR_8);
  break;
 case 7:

  FUNC_2(VAR_7);
  break;
 }
}

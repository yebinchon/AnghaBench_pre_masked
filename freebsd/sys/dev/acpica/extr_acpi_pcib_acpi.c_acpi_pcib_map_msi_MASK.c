
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct acpi_hpcib_softc {int ap_addr; int ap_segment; } ;
typedef int * device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int,int *,int *) ;
 int * FUNC_3 (int *) ;
 struct acpi_hpcib_softc* FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_0, device_t VAR_1, int VAR_2, uint64_t *VAR_3,
    uint32_t *VAR_4)
{
 struct acpi_hpcib_softc *VAR_5;
 device_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_0);
 VAR_8 = FUNC_2(FUNC_3(VAR_6), VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_8)
  return (VAR_8);

 VAR_5 = FUNC_4(VAR_0);
 if (VAR_5->ap_addr == -1)
  return (0);

 VAR_7 = FUNC_5(VAR_5->ap_segment, 0, FUNC_1(VAR_5->ap_addr),
     FUNC_0(VAR_5->ap_addr));
 if (VAR_7 != ((void*)0))
  FUNC_6(VAR_7, *VAR_3);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef int * ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7, device_t VAR_8, char **VAR_9, char **VAR_10)
{
    ACPI_HANDLE VAR_11;
    ACPI_OBJECT_TYPE VAR_12;
    int VAR_13;
    int VAR_14;

    VAR_11 = FUNC_1(VAR_8);
    if (VAR_9 == ((void*)0) || VAR_11 == ((void*)0))
 return (VAR_6);
    VAR_12 = FUNC_2(VAR_8);
    if (VAR_12 != VAR_2 && VAR_12 != VAR_3)
 return (VAR_6);


    for (VAR_14 = 0; VAR_9[VAR_14] != ((void*)0); VAR_14++) {
 VAR_13 = FUNC_0(VAR_11, VAR_9[VAR_14]);
 if (VAR_13 == VAR_1)
     continue;

 if (VAR_10 != ((void*)0)) {
     *VAR_10 = VAR_9[VAR_14];
 }
 return ((VAR_13 == VAR_0)?
      VAR_4 : VAR_5);
    }
    return (VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_interface {char** data; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char) ;
 char** FUNC_2 (int,int ,int ) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_2, struct acpi_interface *VAR_3)
{
 char *VAR_4;
 size_t VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = VAR_2;
 while (FUNC_1(*VAR_4) || *VAR_4 == ',')
  VAR_4++;
 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 == 0)
  return (0);
 VAR_4 = FUNC_3(VAR_4, VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  if (VAR_4[VAR_6] == ',')
   VAR_4[VAR_6] = '\0';
 VAR_6 = VAR_7 = 0;
 while (VAR_6 < VAR_5)
  if (FUNC_1(VAR_4[VAR_6]) || VAR_4[VAR_6] == '\0')
   VAR_6++;
  else {
   VAR_6 += FUNC_4(VAR_4 + VAR_6) + 1;
   VAR_7++;
  }
 if (VAR_7 == 0) {
  FUNC_0(VAR_4, VAR_0);
  return (0);
 }
 VAR_3->data = FUNC_2(sizeof(*VAR_3->data) * VAR_7, VAR_0, VAR_1);
 VAR_3->num = VAR_7;
 VAR_6 = VAR_7 = 0;
 while (VAR_6 < VAR_5)
  if (FUNC_1(VAR_4[VAR_6]) || VAR_4[VAR_6] == '\0')
   VAR_6++;
  else {
   VAR_3->data[VAR_7] = VAR_4 + VAR_6;
   VAR_6 += FUNC_4(VAR_4 + VAR_6) + 1;
   VAR_7++;
  }

 return (VAR_7);
}

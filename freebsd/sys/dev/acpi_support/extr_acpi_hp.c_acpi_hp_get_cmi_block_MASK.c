
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int device_t ;
typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_8__ {int Value; } ;
struct TYPE_12__ {scalar_t__ Type; TYPE_1__ Integer; } ;
struct TYPE_11__ {TYPE_3__* Pointer; int * member_1; int member_0; } ;
struct TYPE_9__ {int Count; TYPE_5__* Elements; } ;
struct TYPE_10__ {scalar_t__ Type; TYPE_2__ Package; } ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char const*,int ,TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_4__*) ;
 char* FUNC_3 (TYPE_5__*,char*,int) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8, const char* VAR_9, UINT8 VAR_10,
    char* VAR_11, size_t VAR_12, UINT32* VAR_13, int VAR_14)
{
 ACPI_OBJECT *VAR_15;
 ACPI_BUFFER VAR_16 = { VAR_0, ((void*)0) };
 int VAR_17;
 int VAR_18;
 int VAR_19 = 255;
 int VAR_20 = 0;
 int VAR_21 = 0;
 char VAR_22[VAR_19];
 int VAR_23;

 VAR_18 = 0;
 VAR_11[0] = 0;
 if (FUNC_0(FUNC_1(VAR_8, VAR_9, VAR_10, &VAR_16))) {
  FUNC_2(&VAR_16);
  return (-VAR_7);
 }
 VAR_15 = VAR_16.Pointer;
 if (!VAR_15 || VAR_15->Type != VAR_5) {
  FUNC_2(&VAR_16);
  return (-VAR_7);
 }


 if (VAR_15->Package.Count < 8 ||
     VAR_15->Package.Elements[0].Type != VAR_6 ||
     VAR_15->Package.Elements[1].Type != VAR_6 ||
     VAR_15->Package.Elements[2].Type != VAR_6 ||
     VAR_15->Package.Elements[3].Type != VAR_4 ||
     VAR_15->Package.Elements[4].Type != VAR_4 ||
     VAR_15->Package.Elements[5].Type != VAR_4 ||
     VAR_15->Package.Elements[6].Type != VAR_4 ||
     VAR_15->Package.Elements[7].Type != VAR_4) {
  FUNC_2(&VAR_16);
  return (-VAR_7);
 }


 VAR_21 = 8 + VAR_15->Package.Elements[7].Integer.Value;
 if (VAR_15->Package.Count <= VAR_21) {
  FUNC_2(&VAR_16);
  return (-VAR_7);
 }
 if (VAR_15->Package.Elements[VAR_21].Type == VAR_4)
  VAR_21 += 1 + VAR_15->Package.Elements[VAR_21].Integer.Value;


 if (VAR_15->Package.Count <= VAR_21 + 1 ||
     VAR_15->Package.Elements[VAR_21].Type != VAR_6 ||
     VAR_15->Package.Elements[VAR_21+1].Type != VAR_4) {
  FUNC_2(&VAR_16);
  return (-VAR_7);
 }
 VAR_23 = VAR_21 + 1;
 if (VAR_15->Package.Count <= VAR_21 +
         VAR_15->Package.Elements[VAR_23].Integer.Value) {
  FUNC_2(&VAR_16);
  return (-VAR_7);
 }

 if (VAR_14 & VAR_3) {
  FUNC_4(VAR_11, FUNC_3(
      &VAR_15->Package.Elements[2], VAR_22, VAR_19), VAR_12);
  VAR_18 += 48;
  while (FUNC_5(VAR_11) < VAR_18)
   FUNC_4(VAR_11, " ", VAR_12);
 }
 FUNC_4(VAR_11, FUNC_3(
     &VAR_15->Package.Elements[0], VAR_22, VAR_19), VAR_12);
 VAR_18 += 43;
 while (FUNC_5(VAR_11) < VAR_18)
  FUNC_4(VAR_11, " ", VAR_12);
 FUNC_4(VAR_11, FUNC_3(
     &VAR_15->Package.Elements[VAR_21], VAR_22, VAR_19), VAR_12);
 VAR_18 += 21;
 while (FUNC_5(VAR_11) < VAR_18)
  FUNC_4(VAR_11, " ", VAR_12);
 for (VAR_17 = 0; VAR_17 < FUNC_5(VAR_11); ++VAR_17)
  if (VAR_11[VAR_17] == '\\')
   VAR_11[VAR_17] = '/';
 if (VAR_14 & VAR_1) {
  for (VAR_17 = VAR_23 + 1; VAR_17 < VAR_23 + 1 +
      VAR_15->Package.Elements[VAR_23].Integer.Value; ++VAR_17) {
   FUNC_3(
       &VAR_15->Package.Elements[VAR_17], VAR_22, VAR_19);
   if (FUNC_5(VAR_22) > 1 ||
       (FUNC_5(VAR_22) == 1 &&
       VAR_22[0] != ' ')) {
    if (VAR_20)
     FUNC_4(VAR_11, "/", VAR_12);
    else
     FUNC_4(VAR_11, " (", VAR_12);
    FUNC_4(VAR_11, VAR_22, VAR_12);
    VAR_20 = 1;
   }
  }
 }
 if (VAR_20)
  FUNC_4(VAR_11, ")", VAR_12);
 if (VAR_14 & VAR_2) {
  FUNC_4(VAR_11, VAR_15->Package.Elements[3].Integer.Value ?
      " [ReadOnly]" : "", VAR_12);
  FUNC_4(VAR_11, VAR_15->Package.Elements[4].Integer.Value ?
      "" : " [NOUI]", VAR_12);
  FUNC_4(VAR_11, VAR_15->Package.Elements[5].Integer.Value ?
      " [RPP]" : "", VAR_12);
 }
 *VAR_13 = (UINT32) VAR_15->Package.Elements[6].Integer.Value;
 FUNC_2(&VAR_16);

 return (0);
}

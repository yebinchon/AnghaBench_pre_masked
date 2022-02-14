
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ofw_mapping2 {int va; int len; int pa_lo; int mode; } ;
struct ofw_mapping {int va; int len; int pa; int mode; } ;
typedef int phandle_t ;
typedef int mappings ;


 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*,int,int,int,int,int,int) ;

void
FUNC_8(int VAR_1)
{
 struct ofw_mapping *VAR_2;
 struct ofw_mapping2 *VAR_3;
        phandle_t VAR_4;
        int VAR_5, VAR_6;
        u_char VAR_7[256 * sizeof(struct ofw_mapping2)];
        char VAR_8[80];

 VAR_4 = FUNC_1(VAR_0);

 FUNC_2(VAR_7, sizeof(VAR_7));

 VAR_5 = FUNC_0(VAR_4, "translations", VAR_7, sizeof(VAR_7));
 if (VAR_5 == -1) {
  FUNC_6("Could not get memory map (%d)\n",
      VAR_5);
  return;
 }

 FUNC_4();
 if (VAR_1 == 1) {
  VAR_5 /= sizeof(struct ofw_mapping);
  VAR_2 = (struct ofw_mapping *) VAR_7;

  FUNC_6("%17s\t%17s\t%8s\t%6s\n", "Virtual Range",
      "Physical Range", "#Pages", "Mode");

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   FUNC_7(VAR_8, "%08x-%08x\t%08x-%08x\t%8d\t%6x\n",
    VAR_2[VAR_6].va,
    VAR_2[VAR_6].va + VAR_2[VAR_6].len,
    VAR_2[VAR_6].pa,
    VAR_2[VAR_6].pa + VAR_2[VAR_6].len,
    VAR_2[VAR_6].len / 0x1000,
    VAR_2[VAR_6].mode);
   if (FUNC_5(VAR_8))
    break;
  }
 } else {
  VAR_5 /= sizeof(struct ofw_mapping2);
  VAR_3 = (struct ofw_mapping2 *) VAR_7;

  FUNC_6("%17s\t%17s\t%8s\t%6s\n", "Virtual Range",
         "Physical Range", "#Pages", "Mode");

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   FUNC_7(VAR_8, "%08x-%08x\t%08x-%08x\t%8d\t%6x\n",
    VAR_3[VAR_6].va,
    VAR_3[VAR_6].va + VAR_3[VAR_6].len,
    VAR_3[VAR_6].pa_lo,
    VAR_3[VAR_6].pa_lo + VAR_3[VAR_6].len,
    VAR_3[VAR_6].len / 0x1000,
    VAR_3[VAR_6].mode);
   if (FUNC_5(VAR_8))
    break;
  }
 }
 FUNC_3();
}

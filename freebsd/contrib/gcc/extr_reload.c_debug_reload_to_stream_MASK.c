
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {scalar_t__ in; scalar_t__ out; int opnum; int inc; scalar_t__ in_reg; scalar_t__ out_reg; scalar_t__ reg_rtx; int secondary_in_reload; int secondary_out_reload; size_t secondary_in_icode; size_t secondary_out_icode; scalar_t__ secondary_p; scalar_t__ nocombine; scalar_t__ nongroup; scalar_t__ optional; scalar_t__ when_needed; scalar_t__ class; int outmode; int inmode; } ;
typedef int FILE ;


 size_t VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,scalar_t__,int) ;
 char** VAR_3 ;
 char** VAR_4 ;
 TYPE_1__* VAR_5 ;
 int * VAR_6 ;

void
FUNC_3 (FILE *VAR_7)
{
  int VAR_8;
  const char *VAR_9;

  if (! VAR_7)
    VAR_7 = VAR_6;
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
    {
      FUNC_1 (VAR_7, "Reload %d: ", VAR_8);

      if (VAR_5[VAR_8].in != 0)
 {
   FUNC_1 (VAR_7, "reload_in (%s) = ",
     FUNC_0 (VAR_5[VAR_8].inmode));
   FUNC_2 (VAR_7, VAR_5[VAR_8].in, 24);
   FUNC_1 (VAR_7, "\n\t");
 }

      if (VAR_5[VAR_8].out != 0)
 {
   FUNC_1 (VAR_7, "reload_out (%s) = ",
     FUNC_0 (VAR_5[VAR_8].outmode));
   FUNC_2 (VAR_7, VAR_5[VAR_8].out, 24);
   FUNC_1 (VAR_7, "\n\t");
 }

      FUNC_1 (VAR_7, "%s, ", VAR_3[(int) VAR_5[VAR_8].class]);

      FUNC_1 (VAR_7, "%s (opnum = %d)",
        VAR_4[(int) VAR_5[VAR_8].when_needed],
        VAR_5[VAR_8].opnum);

      if (VAR_5[VAR_8].optional)
 FUNC_1 (VAR_7, ", optional");

      if (VAR_5[VAR_8].nongroup)
 FUNC_1 (VAR_7, ", nongroup");

      if (VAR_5[VAR_8].inc != 0)
 FUNC_1 (VAR_7, ", inc by %d", VAR_5[VAR_8].inc);

      if (VAR_5[VAR_8].nocombine)
 FUNC_1 (VAR_7, ", can't combine");

      if (VAR_5[VAR_8].secondary_p)
 FUNC_1 (VAR_7, ", secondary_reload_p");

      if (VAR_5[VAR_8].in_reg != 0)
 {
   FUNC_1 (VAR_7, "\n\treload_in_reg: ");
   FUNC_2 (VAR_7, VAR_5[VAR_8].in_reg, 24);
 }

      if (VAR_5[VAR_8].out_reg != 0)
 {
   FUNC_1 (VAR_7, "\n\treload_out_reg: ");
   FUNC_2 (VAR_7, VAR_5[VAR_8].out_reg, 24);
 }

      if (VAR_5[VAR_8].reg_rtx != 0)
 {
   FUNC_1 (VAR_7, "\n\treload_reg_rtx: ");
   FUNC_2 (VAR_7, VAR_5[VAR_8].reg_rtx, 24);
 }

      VAR_9 = "\n\t";
      if (VAR_5[VAR_8].secondary_in_reload != -1)
 {
   FUNC_1 (VAR_7, "%ssecondary_in_reload = %d",
     VAR_9, VAR_5[VAR_8].secondary_in_reload);
   VAR_9 = ", ";
 }

      if (VAR_5[VAR_8].secondary_out_reload != -1)
 FUNC_1 (VAR_7, "%ssecondary_out_reload = %d\n",
   VAR_9, VAR_5[VAR_8].secondary_out_reload);

      VAR_9 = "\n\t";
      if (VAR_5[VAR_8].secondary_in_icode != VAR_0)
 {
   FUNC_1 (VAR_7, "%ssecondary_in_icode = %s", VAR_9,
     VAR_1[VAR_5[VAR_8].secondary_in_icode].name);
   VAR_9 = ", ";
 }

      if (VAR_5[VAR_8].secondary_out_icode != VAR_0)
 FUNC_1 (VAR_7, "%ssecondary_out_icode = %s", VAR_9,
   VAR_1[VAR_5[VAR_8].secondary_out_icode].name);

      FUNC_1 (VAR_7, "\n");
    }
}

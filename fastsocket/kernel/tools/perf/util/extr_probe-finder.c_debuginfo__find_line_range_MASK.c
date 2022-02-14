
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pubname_callback_param {scalar_t__ found; int * sp_die; int * cu_die; int file; scalar_t__ function; } ;
struct line_range {int path; int comp_dir; int end; int start; scalar_t__ function; int file; } ;
struct line_finder {int found; int cu_die; int lno_e; int lno_s; scalar_t__ fname; int sp_die; struct line_range* lr; } ;
struct dwarf_callback_param {void* data; int retval; } ;
struct debuginfo {int dbg; } ;
typedef scalar_t__ Dwarf_Off ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct pubname_callback_param*,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__*,size_t*,int *,int *,int *) ;
 int * FUNC_4 (int ,scalar_t__,int *) ;
 int FUNC_5 (struct line_finder*) ;
 int FUNC_6 (int *,struct line_finder*) ;
 int FUNC_7 (int *,struct dwarf_callback_param*) ;
 int FUNC_8 (char*,int ) ;
 int VAR_1 ;
 int FUNC_9 (char const*) ;

int FUNC_10(struct debuginfo *VAR_2, struct line_range *VAR_3)
{
 struct line_finder VAR_4 = {.lr = VAR_3, .found = 0};
 int VAR_5 = 0;
 Dwarf_Off VAR_6 = 0, VAR_7;
 size_t VAR_8;
 Dwarf_Die *VAR_9;
 const char *VAR_10;


 if (VAR_3->function) {
  struct pubname_callback_param VAR_11 = {
   .function = VAR_3->function, .file = VAR_3->file,
   .cu_die = &VAR_4.cu_die, .sp_die = &VAR_4.sp_die, .found = 0};
  struct dwarf_callback_param VAR_12 = {
   .data = (void *)&VAR_4, .retval = 0};

  FUNC_2(VAR_2->dbg, VAR_1,
      &VAR_11, 0);
  if (VAR_11.found) {
   FUNC_7(&VAR_4.sp_die, &VAR_12);
   if (VAR_4.found)
    goto found;
  }
 }


 while (!VAR_4.found && VAR_5 >= 0) {
  if (FUNC_3(VAR_2->dbg, VAR_6, &VAR_7, &VAR_8,
     ((void*)0), ((void*)0), ((void*)0)) != 0)
   break;


  VAR_9 = FUNC_4(VAR_2->dbg, VAR_6 + VAR_8, &VAR_4.cu_die);
  if (!VAR_9)
   continue;


  if (VAR_3->file)
   VAR_4.fname = FUNC_0(&VAR_4.cu_die, VAR_3->file);
  else
   VAR_4.fname = 0;

  if (!VAR_3->file || VAR_4.fname) {
   if (VAR_3->function)
    VAR_5 = FUNC_5(&VAR_4);
   else {
    VAR_4.lno_s = VAR_3->start;
    VAR_4.lno_e = VAR_3->end;
    VAR_5 = FUNC_6(((void*)0), &VAR_4);
   }
  }
  VAR_6 = VAR_7;
 }

found:

 if (VAR_4.found) {
  VAR_10 = FUNC_1(&VAR_4.cu_die);
  if (VAR_10) {
   VAR_3->comp_dir = FUNC_9(VAR_10);
   if (!VAR_3->comp_dir)
    VAR_5 = -VAR_0;
  }
 }

 FUNC_8("path: %s\n", VAR_3->path);
 return (VAR_5 < 0) ? VAR_5 : VAR_4.found;
}

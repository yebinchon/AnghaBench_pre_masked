
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct probe_finder {int addr; int lno; int fname; TYPE_1__* pev; } ;
struct perf_probe_point {scalar_t__ offset; scalar_t__ lazy_line; scalar_t__ line; scalar_t__ file; int function; } ;
struct dwarf_callback_param {int retval; struct probe_finder* data; } ;
struct TYPE_2__ {struct perf_probe_point point; } ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct probe_finder*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,void*) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct probe_finder*) ;
 int FUNC_11 (int *,struct probe_finder*) ;
 int FUNC_12 (char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_14(Dwarf_Die *VAR_6, void *VAR_7)
{
 struct dwarf_callback_param *VAR_8 = VAR_7;
 struct probe_finder *VAR_9 = VAR_8->data;
 struct perf_probe_point *VAR_10 = &VAR_9->pev->point;
 Dwarf_Attribute VAR_11;


 if (FUNC_9(VAR_6) != VAR_3 ||
     !FUNC_1(VAR_6, VAR_10->function) ||
     FUNC_3(VAR_6, VAR_2, &VAR_11))
  return VAR_1;


 if (VAR_10->file && FUNC_13(VAR_10->file, FUNC_4(VAR_6)))
  return VAR_1;

 VAR_9->fname = FUNC_4(VAR_6);
 if (VAR_10->line) {
  FUNC_5(VAR_6, &VAR_9->lno);
  VAR_9->lno += VAR_10->line;
  VAR_8->retval = FUNC_10(VAR_9);
 } else if (!FUNC_8(VAR_6)) {

  if (VAR_10->lazy_line)
   VAR_8->retval = FUNC_11(VAR_6, VAR_9);
  else {
   if (FUNC_7(VAR_6, &VAR_9->addr) != 0) {
    FUNC_12("Failed to get entry address of "
        "%s.\n", FUNC_6(VAR_6));
    VAR_8->retval = -VAR_4;
    return VAR_0;
   }
   VAR_9->addr += VAR_10->offset;

   VAR_8->retval = FUNC_0(VAR_6, VAR_9);
  }
 } else

  VAR_8->retval = FUNC_2(VAR_6,
     VAR_5, (void *)VAR_9);

 return VAR_0;
}

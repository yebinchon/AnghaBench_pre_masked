
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_range {scalar_t__ offset; scalar_t__ start; scalar_t__ end; int function; scalar_t__ file; } ;
struct line_finder {scalar_t__ fname; scalar_t__ lno_s; scalar_t__ lno_e; struct line_range* lr; } ;
struct dwarf_callback_param {int retval; struct line_finder* data; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,struct line_finder*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct line_finder*) ;
 int VAR_4 ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(Dwarf_Die *VAR_5, void *VAR_6)
{
 struct dwarf_callback_param *VAR_7 = VAR_6;
 struct line_finder *VAR_8 = VAR_7->data;
 struct line_range *VAR_9 = VAR_8->lr;


 if (VAR_9->file && FUNC_8(VAR_9->file, FUNC_2(VAR_5)))
  return VAR_1;

 if (FUNC_5(VAR_5) == VAR_2 &&
     FUNC_0(VAR_5, VAR_9->function)) {
  VAR_8->fname = FUNC_2(VAR_5);
  FUNC_3(VAR_5, &VAR_9->offset);
  FUNC_7("fname: %s, lineno:%d\n", VAR_8->fname, VAR_9->offset);
  VAR_8->lno_s = VAR_9->offset + VAR_9->start;
  if (VAR_8->lno_s < 0)
   VAR_8->lno_s = VAR_3;
  VAR_8->lno_e = VAR_9->offset + VAR_9->end;
  if (VAR_8->lno_e < 0)
   VAR_8->lno_e = VAR_3;
  FUNC_7("New line range: %d to %d\n", VAR_8->lno_s, VAR_8->lno_e);
  VAR_9->start = VAR_8->lno_s;
  VAR_9->end = VAR_8->lno_e;
  if (FUNC_4(VAR_5))
   VAR_7->retval = FUNC_1(VAR_5,
      VAR_4, VAR_8);
  else
   VAR_7->retval = FUNC_6(VAR_5, VAR_8);
  return VAR_0;
 }
 return VAR_1;
}

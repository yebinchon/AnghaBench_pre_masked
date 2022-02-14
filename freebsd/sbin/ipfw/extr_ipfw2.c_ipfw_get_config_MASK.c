
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct format_opts {int last; int first; int flags; } ;
struct cmdline_opts {scalar_t__ test_only; } ;
struct TYPE_5__ {size_t size; int opheader; int end_rule; int start_rule; int flags; } ;
typedef TYPE_1__ ipfw_cfg_lheader ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (int ,int *,size_t*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct cmdline_opts *VAR_4, struct format_opts *VAR_5,
    ipfw_cfg_lheader **VAR_6, size_t *VAR_7)
{
 ipfw_cfg_lheader *VAR_8;
 size_t VAR_9;
 int VAR_10;


 if (VAR_4->test_only != 0) {
  FUNC_2(VAR_3, "Testing only, list disabled\n");
  return (0);
 }


 VAR_9 = 4096;
 VAR_8 = ((void*)0);

 for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
  if (VAR_8 != ((void*)0))
   FUNC_3(VAR_8);
  if ((VAR_8 = FUNC_0(1, VAR_9)) == ((void*)0))
   return (VAR_0);

  VAR_8->flags = VAR_5->flags;
  VAR_8->start_rule = VAR_5->first;
  VAR_8->end_rule = VAR_5->last;

  if (FUNC_1(VAR_1, &VAR_8->opheader, &VAR_9) != 0) {
   if (VAR_2 != VAR_0) {
    FUNC_3(VAR_8);
    return (VAR_2);
   }


   VAR_9 = VAR_9 * 2;
   if (VAR_9 < VAR_8->size)
    VAR_9 = VAR_8->size;
   continue;
  }

  *VAR_6 = VAR_8;
  *VAR_7 = VAR_9;
  return (0);
 }

 FUNC_3(VAR_8);
 return (VAR_0);
}

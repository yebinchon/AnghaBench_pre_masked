
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_delete; int node_new; int node_cmp; } ;
struct strlist {int dupstr; TYPE_1__ rblist; } ;


 int FUNC_0 (struct strlist*) ;
 struct strlist* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct strlist*,char const*) ;

struct strlist *FUNC_4(bool VAR_3, const char *VAR_4)
{
 struct strlist *VAR_5 = FUNC_1(sizeof(*VAR_5));

 if (VAR_5 != ((void*)0)) {
  FUNC_2(&VAR_5->rblist);
  VAR_5->rblist.node_cmp = VAR_0;
  VAR_5->rblist.node_new = VAR_2;
  VAR_5->rblist.node_delete = VAR_1;

  VAR_5->dupstr = VAR_3;
  if (VAR_4 && FUNC_3(VAR_5, VAR_4) != 0)
   goto out_error;
 }

 return VAR_5;
out_error:
 FUNC_0(VAR_5);
 return ((void*)0);
}

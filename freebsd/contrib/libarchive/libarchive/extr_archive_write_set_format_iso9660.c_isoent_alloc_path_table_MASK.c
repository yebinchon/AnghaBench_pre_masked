
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdd {int max_depth; TYPE_1__* pathtbl; } ;
struct archive_write {int archive; } ;
struct TYPE_2__ {scalar_t__ cnt; int * sorted; int * first; int ** last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_3, struct vdd *VAR_4,
    int VAR_5)
{
 int VAR_6;

 VAR_4->max_depth = VAR_5;
 VAR_4->pathtbl = FUNC_1(sizeof(*VAR_4->pathtbl) * VAR_4->max_depth);
 if (VAR_4->pathtbl == ((void*)0)) {
  FUNC_0(&VAR_3->archive, VAR_2,
      "Can't allocate memory");
  return (VAR_0);
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->max_depth; VAR_6++) {
  VAR_4->pathtbl[VAR_6].first = ((void*)0);
  VAR_4->pathtbl[VAR_6].last = &(VAR_4->pathtbl[VAR_6].first);
  VAR_4->pathtbl[VAR_6].sorted = ((void*)0);
  VAR_4->pathtbl[VAR_6].cnt = 0;
 }
 return (VAR_1);
}

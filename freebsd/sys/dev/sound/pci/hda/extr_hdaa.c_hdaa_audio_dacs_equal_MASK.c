
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; scalar_t__ bindas; int nconns; scalar_t__* connsenable; scalar_t__* conns; scalar_t__ nid; scalar_t__ type; int param; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int startnode; int endnode; } ;


 scalar_t__ VAR_0 ;
 struct hdaa_widget* FUNC_0 (struct hdaa_devinfo*,int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct hdaa_widget *VAR_1, struct hdaa_widget *VAR_2)
{
 struct hdaa_devinfo *VAR_3 = VAR_1->devinfo;
 struct hdaa_widget *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 if (FUNC_1(&VAR_1->param, &VAR_2->param, sizeof(VAR_1->param)))
  return (0);
 for (VAR_5 = VAR_3->startnode; VAR_5 < VAR_3->endnode; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3, VAR_5);
  if (VAR_4 == ((void*)0) || VAR_4->enable == 0)
   continue;
  if (VAR_4->bindas != VAR_1->bindas)
   continue;
  if (VAR_4->nconns == 0)
   continue;
  VAR_7 = VAR_8 = -1;
  for (VAR_6 = 0; VAR_6 < VAR_4->nconns; VAR_6++) {
   if (VAR_4->connsenable[VAR_6] == 0)
    continue;
   if (VAR_4->conns[VAR_6] == VAR_1->nid)
    VAR_7 = VAR_6;
   if (VAR_4->conns[VAR_6] == VAR_2->nid)
    VAR_8 = VAR_6;
  }
  if (VAR_7 < 0)
   continue;
  if (VAR_8 < 0)
   return (0);
  if (VAR_4->type != VAR_0)
   return (0);
 }
 return (1);
}

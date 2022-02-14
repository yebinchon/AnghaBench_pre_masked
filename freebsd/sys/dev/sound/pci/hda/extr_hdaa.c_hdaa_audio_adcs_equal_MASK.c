
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {int nconns; scalar_t__* conns; scalar_t__ enable; scalar_t__ bindas; scalar_t__ bindseqmask; scalar_t__ type; int param; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int dummy; } ;


 struct hdaa_widget* FUNC_0 (struct hdaa_devinfo*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct hdaa_widget *VAR_0, struct hdaa_widget *VAR_1)
{
 struct hdaa_devinfo *VAR_2 = VAR_0->devinfo;
 struct hdaa_widget *VAR_3, *VAR_4;
 int VAR_5;

 if (FUNC_1(&VAR_0->param, &VAR_1->param, sizeof(VAR_0->param)))
  return (0);
 if (VAR_0->nconns != 1 || VAR_1->nconns != 1)
  return (0);
 if (VAR_0->conns[0] == VAR_1->conns[0])
  return (1);
 VAR_3 = FUNC_0(VAR_2, VAR_0->conns[0]);
 if (VAR_3 == ((void*)0) || VAR_3->enable == 0)
  return (0);
 VAR_4 = FUNC_0(VAR_2, VAR_1->conns[0]);
 if (VAR_4 == ((void*)0) || VAR_4->enable == 0)
  return (0);
 if (VAR_3->bindas == VAR_4->bindas && VAR_3->bindseqmask == VAR_4->bindseqmask)
  return (1);
 if (VAR_4->bindas >= 0)
  return (0);
 if (VAR_3->type != VAR_4->type)
  return (0);
 if (FUNC_1(&VAR_3->param, &VAR_4->param, sizeof(VAR_3->param)))
  return (0);
 if (VAR_3->nconns != VAR_4->nconns)
  return (0);
 for (VAR_5 = 0; VAR_5 < VAR_3->nconns; VAR_5++) {
  if (VAR_3->conns[VAR_5] != VAR_4->conns[VAR_5])
   return (0);
 }
 return (1);
}

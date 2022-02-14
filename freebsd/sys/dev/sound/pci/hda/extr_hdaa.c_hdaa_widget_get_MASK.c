
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {int dummy; } ;
struct hdaa_devinfo {scalar_t__ startnode; scalar_t__ endnode; struct hdaa_widget* widget; } ;
typedef scalar_t__ nid_t ;



struct hdaa_widget *
FUNC_0(struct hdaa_devinfo *VAR_0, nid_t VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_0->widget == ((void*)0) ||
      VAR_1 < VAR_0->startnode || VAR_1 >= VAR_0->endnode)
  return (((void*)0));
 return (&VAR_0->widget[VAR_1 - VAR_0->startnode]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__* fmtlist; } ;
struct hdaa_chan {scalar_t__ fmt; TYPE_1__ caps; } ;
typedef int kobj_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(kobj_t VAR_1, void *VAR_2, uint32_t VAR_3)
{
 struct hdaa_chan *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_4->caps.fmtlist[VAR_5] != 0; VAR_5++) {
  if (VAR_3 == VAR_4->caps.fmtlist[VAR_5]) {
   VAR_4->fmt = VAR_3;
   return (0);
  }
 }

 return (VAR_0);
}

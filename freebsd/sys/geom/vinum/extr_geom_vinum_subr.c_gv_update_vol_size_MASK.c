
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_volume {void* size; TYPE_1__* provider; } ;
typedef void* off_t ;
struct TYPE_2__ {void* mediasize; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(struct gv_volume *VAR_0, off_t VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_0->provider != ((void*)0)) {
  FUNC_0();
  VAR_0->provider->mediasize = VAR_1;
  FUNC_1();
 }
 VAR_0->size = VAR_1;
}

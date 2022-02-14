
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dtb_size; int dtb_flags; int * dtb_xamot; int * dtb_tomax; } ;
typedef TYPE_1__ dtrace_buffer_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(dtrace_buffer_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  dtrace_buffer_t *VAR_4 = &VAR_2[VAR_3];

  if (VAR_4->dtb_tomax == ((void*)0)) {
   FUNC_0(VAR_4->dtb_xamot == ((void*)0));
   FUNC_0(VAR_4->dtb_size == 0);
   continue;
  }

  if (VAR_4->dtb_xamot != ((void*)0)) {
   FUNC_0(!(VAR_4->dtb_flags & VAR_0));
   FUNC_1(VAR_4->dtb_xamot, VAR_4->dtb_size);
  }

  FUNC_1(VAR_4->dtb_tomax, VAR_4->dtb_size);
  VAR_4->dtb_size = 0;
  VAR_4->dtb_tomax = ((void*)0);
  VAR_4->dtb_xamot = ((void*)0);
 }
}

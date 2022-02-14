
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* hrtime_t ;
typedef int dtrace_icookie_t ;
struct TYPE_3__ {int dtb_flags; int dtb_xamot_flags; void* dtb_switched; void* dtb_interval; scalar_t__ dtb_errors; scalar_t__ dtb_drops; scalar_t__ dtb_offset; scalar_t__ dtb_xamot_errors; scalar_t__ dtb_xamot_offset; scalar_t__ dtb_xamot_drops; void* dtb_xamot; void* dtb_tomax; } ;
typedef TYPE_1__ dtrace_buffer_t ;
typedef void* caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(dtrace_buffer_t *VAR_4)
{
 caddr_t VAR_5 = VAR_4->dtb_tomax;
 caddr_t VAR_6 = VAR_4->dtb_xamot;
 dtrace_icookie_t VAR_7;
 hrtime_t VAR_8;

 FUNC_0(!(VAR_4->dtb_flags & VAR_2));
 FUNC_0(!(VAR_4->dtb_flags & VAR_3));

 VAR_7 = FUNC_2();
 VAR_8 = FUNC_1();
 VAR_4->dtb_tomax = VAR_6;
 VAR_4->dtb_xamot = VAR_5;
 VAR_4->dtb_xamot_drops = VAR_4->dtb_drops;
 VAR_4->dtb_xamot_offset = VAR_4->dtb_offset;
 VAR_4->dtb_xamot_errors = VAR_4->dtb_errors;
 VAR_4->dtb_xamot_flags = VAR_4->dtb_flags;
 VAR_4->dtb_offset = 0;
 VAR_4->dtb_drops = 0;
 VAR_4->dtb_errors = 0;
 VAR_4->dtb_flags &= ~(VAR_1 | VAR_0);
 VAR_4->dtb_interval = VAR_8 - VAR_4->dtb_switched;
 VAR_4->dtb_switched = VAR_8;
 FUNC_3(VAR_7);
}

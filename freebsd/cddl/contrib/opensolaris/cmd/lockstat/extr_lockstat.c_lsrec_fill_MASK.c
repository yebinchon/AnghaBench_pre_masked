
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int pc_t ;
struct TYPE_6__ {int ls_count; uintptr_t ls_lock; uintptr_t ls_caller; int * ls_stack; scalar_t__ ls_event; } ;
typedef TYPE_1__ lsrec_t ;
struct TYPE_7__ {int dtrd_size; scalar_t__ dtrd_offset; } ;
typedef TYPE_2__ dtrace_recdesc_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 uintptr_t FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(lsrec_t *VAR_2, const dtrace_recdesc_t *VAR_3, int VAR_4, caddr_t VAR_5)
{
 FUNC_0(VAR_2, VAR_1);
 VAR_2->ls_count = 1;

 if ((VAR_1 > VAR_0 && VAR_4 < 4) || (VAR_4 < 3))
  FUNC_1(0, "truncated DTrace record");

 if (VAR_3->dtrd_size != sizeof (uint64_t))
  FUNC_1(0, "bad event size in first record");


 VAR_2->ls_event = (uint32_t)*((uint64_t *)(VAR_5 + VAR_3->dtrd_offset));
 VAR_3++;
 VAR_2->ls_lock = FUNC_2((const char *)(VAR_5 + VAR_3->dtrd_offset));
 VAR_3++;


 if (VAR_3->dtrd_size != sizeof (uintptr_t))
  FUNC_1(0, "bad caller size in third record");


 VAR_2->ls_caller = *((uintptr_t *)(VAR_5 + VAR_3->dtrd_offset));
 VAR_3++;

 if (VAR_1 > VAR_0) {
  int VAR_6, VAR_7;
  pc_t *VAR_8;

  VAR_6 = VAR_3->dtrd_size / sizeof (pc_t);

  VAR_8 = (pc_t *)(VAR_5 + VAR_3->dtrd_offset);

  for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++)
   VAR_2->ls_stack[VAR_7 - 1] = VAR_8[VAR_7];
 }
}

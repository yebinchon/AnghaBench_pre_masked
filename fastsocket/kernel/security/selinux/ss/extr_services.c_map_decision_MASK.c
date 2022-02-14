
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct av_decision {int allowed; int auditallow; int auditdeny; } ;
struct TYPE_2__ {unsigned int num_perms; int* perms; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(u16 VAR_2, struct av_decision *VAR_3,
    int VAR_4)
{
 if (VAR_2 < VAR_1) {
  unsigned VAR_5, VAR_6 = VAR_0[VAR_2].num_perms;
  u32 VAR_7;

  for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_3->allowed & VAR_0[VAR_2].perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
   if (VAR_4 && !VAR_0[VAR_2].perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
  }
  VAR_3->allowed = VAR_7;

  for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_6; VAR_5++)
   if (VAR_3->auditallow & VAR_0[VAR_2].perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
  VAR_3->auditallow = VAR_7;

  for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_3->auditdeny & VAR_0[VAR_2].perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
   if (!VAR_4 && !VAR_0[VAR_2].perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
  }





  for (; VAR_5 < (sizeof(u32)*8); VAR_5++)
   VAR_7 |= 1<<VAR_5;
  VAR_3->auditdeny = VAR_7;
 }
}

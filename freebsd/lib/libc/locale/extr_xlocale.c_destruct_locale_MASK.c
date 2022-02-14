
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* locale_t ;
struct TYPE_2__ {void* csym; scalar_t__* components; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 locale_t VAR_2 = VAR_1;

 for (int VAR_3=0 ; VAR_3<VAR_0 ; VAR_3++) {
  if (VAR_2->components[VAR_3]) {
   FUNC_1(VAR_2->components[VAR_3]);
  }
 }
 if (VAR_2->csym) {
  FUNC_0(VAR_2->csym);
 }
 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int phandle_t ;
struct TYPE_2__ {int mask; int * compat; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int
FUNC_2(phandle_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = 1;
 VAR_4 = FUNC_1(VAR_0);
 for (VAR_5 = 0; VAR_2[VAR_5].compat != ((void*)0); VAR_5++) {
  if (VAR_1 & (1 << VAR_5))
   continue;

  VAR_7 = FUNC_0(VAR_3,
      VAR_2[VAR_5].compat);
  if (VAR_7 && (~VAR_4 & VAR_2[VAR_5].mask)) {
   VAR_1 |= (1 << VAR_5);
   VAR_6 = 0;
   break;
  } else if (VAR_7) {
   VAR_1 |= (1 << VAR_5);
   break;
  }

 }

 return (VAR_6);
}

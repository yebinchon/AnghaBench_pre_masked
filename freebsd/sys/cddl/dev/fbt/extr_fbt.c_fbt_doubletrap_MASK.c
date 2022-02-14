
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fbtp_savedval; struct TYPE_4__* fbtp_probenext; } ;
typedef TYPE_1__ fbt_probe_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
 fbt_probe_t *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = VAR_0[VAR_3];

  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->fbtp_probenext)
   FUNC_0(VAR_2, VAR_2->fbtp_savedval);
 }
}

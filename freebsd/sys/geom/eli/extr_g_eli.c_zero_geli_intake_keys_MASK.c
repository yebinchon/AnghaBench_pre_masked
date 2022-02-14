
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keybuf {int kb_nents; TYPE_1__* kb_ents; } ;
struct TYPE_2__ {scalar_t__ ke_type; int ke_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct keybuf* FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(void)
{
        struct keybuf *VAR_2;
        int VAR_3;

        if ((VAR_2 = FUNC_1()) != ((void*)0)) {

                for (VAR_3 = 0; VAR_3 < VAR_2->kb_nents; VAR_3++) {
                         if (VAR_2->kb_ents[VAR_3].ke_type == VAR_0) {
                                 FUNC_0(VAR_2->kb_ents[VAR_3].ke_data,
                                     sizeof(VAR_2->kb_ents[VAR_3].ke_data));
                                 VAR_2->kb_ents[VAR_3].ke_type = VAR_1;
                         }
                }
        }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db_index; int term_name; } ;
typedef TYPE_1__ TERMDATA ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const TERMDATA *VAR_2 = (const TERMDATA *) VAR_0;
    const TERMDATA *VAR_3 = (const TERMDATA *) VAR_1;
    int VAR_4 = FUNC_0(VAR_2->term_name, VAR_3->term_name);

    if (VAR_4 == 0) {
 VAR_4 = (VAR_2->db_index - VAR_3->db_index);
    }
    return VAR_4;
}

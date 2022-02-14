
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sa_query_result {unsigned int result_cnt; int p_result_madw; } ;
struct TYPE_3__ {int dlid; } ;
typedef TYPE_1__ ib_path_rec_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct sa_query_result *VAR_1)
{
    unsigned int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->result_cnt; VAR_2++) {
     ib_path_rec_t *VAR_3 = (ib_path_rec_t *)FUNC_2(VAR_1->p_result_madw, VAR_2);
     VAR_0[FUNC_0(VAR_3->dlid)] = FUNC_1(VAR_3);
    }
}

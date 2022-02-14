
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t l2df_size; int l2df_type; int * l2df_abd; } ;
typedef TYPE_1__ l2arc_data_free_t ;
typedef int arc_buf_contents_t ;
typedef int abd_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(abd_t *VAR_3, size_t VAR_4, arc_buf_contents_t VAR_5)
{
 l2arc_data_free_t *VAR_6 = FUNC_0(sizeof (*VAR_6), VAR_0);

 VAR_6->l2df_abd = VAR_3;
 VAR_6->l2df_size = VAR_4;
 VAR_6->l2df_type = VAR_5;
 FUNC_2(&VAR_2);
 FUNC_1(VAR_1, VAR_6);
 FUNC_3(&VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef int int32_t ;
typedef int arc_buf_t ;
typedef int arc_buf_hdr_t ;
typedef int arc_buf_contents_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,void*,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;

arc_buf_t *
FUNC_8(spa_t *VAR_2, void *VAR_3, arc_buf_contents_t VAR_4, int32_t VAR_5)
{
 arc_buf_hdr_t *VAR_6 = FUNC_6(FUNC_7(VAR_2), VAR_5, VAR_5,
     VAR_1, VAR_4);
 FUNC_0(!FUNC_2(FUNC_1(VAR_6)));

 arc_buf_t *VAR_7 = ((void*)0);
 FUNC_3(FUNC_4(VAR_6, VAR_3, VAR_0, VAR_0, &VAR_7));
 FUNC_5(VAR_7);

 return (VAR_7);
}

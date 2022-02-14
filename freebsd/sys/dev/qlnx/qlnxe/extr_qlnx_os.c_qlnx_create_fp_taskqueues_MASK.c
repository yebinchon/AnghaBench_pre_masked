
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tq_name ;
struct qlnx_fastpath {int * fp_taskqueue; int fp_task; } ;
struct TYPE_4__ {int num_rss; struct qlnx_fastpath* fp_array; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int *) ;
 int FUNC_1 (int *,int ,int ,struct qlnx_fastpath*) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int,char*,int) ;
 int * FUNC_4 (int *,int ,int ,int **) ;
 int FUNC_5 (int **,int,int ,char*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_4)
{
 int VAR_5;
 uint8_t VAR_6[32];
 struct qlnx_fastpath *VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_rss; VAR_5++) {

                VAR_7 = &VAR_4->fp_array[VAR_5];

  FUNC_2(VAR_6, sizeof (VAR_6));
  FUNC_3(VAR_6, sizeof (VAR_6), "ql_fp_tq_%d", VAR_5);

  FUNC_1(&VAR_7->fp_task, 0, VAR_2, VAR_7);

  VAR_7->fp_taskqueue = FUNC_4(VAR_6, VAR_0,
     VAR_3,
     &VAR_7->fp_taskqueue);

  if (VAR_7->fp_taskqueue == ((void*)0))
   return (-1);

  FUNC_5(&VAR_7->fp_taskqueue, 1, VAR_1, "%s",
   VAR_6);

  FUNC_0(VAR_4, "%p\n",VAR_7->fp_taskqueue);
 }

 return (0);
}

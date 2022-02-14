
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {scalar_t__ rm_start; scalar_t__ rm_type; int * rm_mtx; int rm_list; int rm_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct rman*,int ) ;
 int * FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_7(struct rman *VAR_10)
{
 static int VAR_11 = 0;

 if (VAR_11 == 0) {
  VAR_11 = 1;
  FUNC_0(&VAR_8);
  FUNC_3(&VAR_9, "rman head", ((void*)0), VAR_1);
 }

 if (VAR_10->rm_start == 0 && VAR_10->rm_end == 0)
  VAR_10->rm_end = ~0;
 if (VAR_10->rm_type == VAR_6)
  FUNC_6("rman_init");
 if (VAR_10->rm_type == VAR_5)
  FUNC_6("implement RMAN_GAUGE");

 FUNC_0(&VAR_10->rm_list);
 VAR_10->rm_mtx = FUNC_2(sizeof *VAR_10->rm_mtx, VAR_3, VAR_2 | VAR_4);
 if (VAR_10->rm_mtx == ((void*)0))
  return VAR_0;
 FUNC_3(VAR_10->rm_mtx, "rman", ((void*)0), VAR_1);

 FUNC_4(&VAR_9);
 FUNC_1(&VAR_8, VAR_10, VAR_7);
 FUNC_5(&VAR_9);
 return 0;
}

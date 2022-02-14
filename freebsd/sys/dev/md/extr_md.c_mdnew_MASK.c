
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_s {int type; int unit; int queue_mtx; int stat_mtx; int name; int procp; int bio_queue; } ;
typedef enum md_types { ____Placeholder_md_types } md_types ;


 int VAR_0 ;
 int FUNC_0 (int *,struct md_s*,int ) ;
 int FUNC_1 (struct md_s*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct md_s*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,struct md_s*,int *,int ,int ,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int *,int ) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static struct md_s *
FUNC_12(int VAR_9, int *VAR_10, enum md_types VAR_11)
{
 struct md_s *VAR_12;
 int VAR_13;

 *VAR_10 = 0;
 if (VAR_9 == -1)
  VAR_9 = FUNC_2(VAR_8);
 else
  VAR_9 = FUNC_3(VAR_8, VAR_9);

 if (VAR_9 == -1) {
  *VAR_10 = VAR_0;
  return (((void*)0));
 }

 VAR_12 = (struct md_s *)FUNC_8(sizeof *VAR_12, VAR_2, VAR_3 | VAR_4);
 VAR_12->type = VAR_11;
 FUNC_4(&VAR_12->bio_queue);
 FUNC_10(&VAR_12->queue_mtx, "md bio queue", ((void*)0), VAR_1);
 FUNC_10(&VAR_12->stat_mtx, "md stat", ((void*)0), VAR_1);
 VAR_12->unit = VAR_9;
 FUNC_11(VAR_12->name, "md%d", VAR_9);
 FUNC_0(&VAR_7, VAR_12, VAR_5);
 VAR_13 = FUNC_7(VAR_6, VAR_12, &VAR_12->procp, 0, 0,"%s", VAR_12->name);
 if (VAR_13 == 0)
  return (VAR_12);
 FUNC_1(VAR_12, VAR_5);
 FUNC_9(&VAR_12->stat_mtx);
 FUNC_9(&VAR_12->queue_mtx);
 FUNC_6(VAR_8, VAR_12->unit);
 FUNC_5(VAR_12, VAR_2);
 *VAR_10 = VAR_13;
 return (((void*)0));
}

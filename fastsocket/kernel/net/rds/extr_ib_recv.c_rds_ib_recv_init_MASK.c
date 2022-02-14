
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int totalram; } ;
struct rds_page_frag {int dummy; } ;
struct rds_ib_incoming {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (void*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sysinfo*) ;

int FUNC_3(void)
{
 struct sysinfo VAR_7;
 int VAR_8 = -VAR_0;


 FUNC_2(&VAR_7);
 VAR_6 = VAR_7.totalram / 3 * VAR_1 / VAR_2;

 VAR_5 = FUNC_0("rds_ib_incoming",
     sizeof(struct rds_ib_incoming),
     0, VAR_3, ((void*)0));
 if (!VAR_5)
  goto out;

 VAR_4 = FUNC_0("rds_ib_frag",
     sizeof(struct rds_page_frag),
     0, VAR_3, ((void*)0));
 if (!VAR_4)
  FUNC_1(VAR_5);
 else
  VAR_8 = 0;
out:
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int totalram; } ;
struct rds_page_frag {int dummy; } ;
struct rds_iw_incoming {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (void*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sysinfo*) ;

int FUNC_3(void)
{
 struct sysinfo VAR_6;
 int VAR_7 = -VAR_0;


 FUNC_2(&VAR_6);
 VAR_5 = VAR_6.totalram / 3 * VAR_1 / VAR_2;

 VAR_4 = FUNC_0("rds_iw_incoming",
     sizeof(struct rds_iw_incoming),
     0, 0, ((void*)0));
 if (!VAR_4)
  goto out;

 VAR_3 = FUNC_0("rds_iw_frag",
     sizeof(struct rds_page_frag),
     0, 0, ((void*)0));
 if (!VAR_3)
  FUNC_1(VAR_4);
 else
  VAR_7 = 0;
out:
 return VAR_7;
}

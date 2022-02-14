
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int version ;
struct thread {int dummy; } ;
struct kldstat_args {TYPE_1__* stat; int fileid; } ;
struct kld_file_stat_1 {int dummy; } ;
struct kld_file_stat {int dummy; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (struct kld_file_stat*,TYPE_1__*,int) ;
 int FUNC_2 (struct kld_file_stat*,int ) ;
 int FUNC_3 (struct thread*,int ,struct kld_file_stat*) ;
 struct kld_file_stat* FUNC_4 (int,int ,int) ;

int
FUNC_5(struct thread *VAR_4, struct kldstat_args *VAR_5)
{
 struct kld_file_stat *VAR_6;
 int VAR_7, VAR_8;




 if ((VAR_7 = FUNC_0(&VAR_5->stat->version, &VAR_8, sizeof(VAR_8)))
     != 0)
  return (VAR_7);
 if (VAR_8 != sizeof(struct kld_file_stat_1) &&
     VAR_8 != sizeof(struct kld_file_stat))
  return (VAR_0);

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);
 VAR_7 = FUNC_3(VAR_4, VAR_5->fileid, VAR_6);
 if (VAR_7 == 0)
  VAR_7 = FUNC_1(VAR_6, VAR_5->stat, VAR_8);
 FUNC_2(VAR_6, VAR_1);
 return (VAR_7);
}

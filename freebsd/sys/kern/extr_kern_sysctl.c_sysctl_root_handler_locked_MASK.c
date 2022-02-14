
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int dummy; } ;
struct sysctl_oid {int oid_kind; int (* oid_handler ) (struct sysctl_oid*,void*,int ,struct sysctl_req*) ;int oid_running; } ;
struct rm_priotracker {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rm_priotracker*) ;
 int FUNC_2 (struct rm_priotracker*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sysctl_oid*,void*,int ,struct sysctl_req*) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct sysctl_oid *VAR_6, void *VAR_7, intmax_t VAR_8,
    struct sysctl_req *VAR_9, struct rm_priotracker *VAR_10)
{
 int VAR_11;

 if (VAR_6->oid_kind & VAR_1)
  FUNC_5(&VAR_6->oid_running, 1);

 if (VAR_10 != ((void*)0))
  FUNC_2(VAR_10);
 else
  FUNC_4();

 if (!(VAR_6->oid_kind & VAR_2))
  FUNC_7(&VAR_3);
 VAR_11 = VAR_6->oid_handler(VAR_6, VAR_7, VAR_8, VAR_9);
 if (!(VAR_6->oid_kind & VAR_2))
  FUNC_8(&VAR_3);

 FUNC_0(VAR_4, VAR_5, VAR_11);

 if (VAR_10 != ((void*)0))
  FUNC_1(VAR_10);
 else
  FUNC_3();

 if (VAR_6->oid_kind & VAR_1) {
  if (FUNC_6(&VAR_6->oid_running, -1) == 1 &&
      (VAR_6->oid_kind & VAR_0) != 0)
   FUNC_10(&VAR_6->oid_running);
 }

 return (VAR_11);
}

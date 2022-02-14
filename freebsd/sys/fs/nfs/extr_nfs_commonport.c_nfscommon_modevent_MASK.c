
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_2__ {int nr_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int FUNC_8 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__ VAR_17 ;
 int * VAR_18 ;

__attribute__((used)) static int
FUNC_9(module_t VAR_19, int VAR_20, void *VAR_21)
{
 int VAR_22 = 0;
 static int VAR_23 = 0;

 switch (VAR_20) {
 case 129:
  if (VAR_23)
   goto out;
  FUNC_7();
  FUNC_5(&VAR_7, "nfs_nameid_mutex", ((void*)0), VAR_2);
  FUNC_5(&VAR_11, "nfs_sockl_mutex", ((void*)0), VAR_2);
  FUNC_5(&VAR_10, "nfs_slock_mutex", ((void*)0), VAR_2);
  FUNC_5(&VAR_9, "nfs_req_mutex", ((void*)0), VAR_2);
  FUNC_5(&VAR_17.nr_mtx, "nfsuserd", ((void*)0),
      VAR_2);
  FUNC_5(&VAR_15, "nfs4ds", ((void*)0), VAR_2);
  FUNC_1(&VAR_14);
  FUNC_3(&VAR_4, 1);
  FUNC_6();
  VAR_13 = VAR_18;
  VAR_23 = 1;
  break;

 case 128:
  if (VAR_3 != 0 || VAR_16 != 0 ||
      VAR_8 != 0) {
   VAR_22 = VAR_0;
   break;
  }

  VAR_13 = ((void*)0);
  FUNC_2(&VAR_4);

  FUNC_8();

  FUNC_4(&VAR_7);
  FUNC_4(&VAR_5);
  FUNC_4(&VAR_12);
  FUNC_4(&VAR_6);
  FUNC_4(&VAR_11);
  FUNC_4(&VAR_10);
  FUNC_4(&VAR_9);
  FUNC_4(&VAR_17.nr_mtx);
  FUNC_4(&VAR_15);
  VAR_23 = 0;
  break;
 default:
  VAR_22 = VAR_1;
  break;
 }

out:
 FUNC_0(VAR_22);
 return VAR_22;
}

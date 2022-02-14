
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {int ex_flags; } ;
struct nfsex_args {int * fspec; TYPE_1__ export; } ;
struct nameidata {int ni_vp; } ;
typedef int fhandle_t ;
typedef int caddr_t ;
struct TYPE_4__ {int nfsrvfh_data; int nfsrvfh_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ,int ,int ,int *,struct thread*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct nameidata*) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int *,struct thread*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ) ;

int
FUNC_7(void *VAR_9, struct ucred *VAR_10, struct thread *VAR_11)
{
 struct nfsex_args *VAR_12 = (struct nfsex_args *)VAR_9;
 int VAR_13 = 0;
 struct nameidata VAR_14;
 fhandle_t VAR_15;

 VAR_13 = FUNC_5(&VAR_8, &VAR_12->export);
 if ((VAR_12->export.ex_flags & VAR_3) != 0)
  VAR_7 = 0;
 else if (VAR_13 == 0) {
  if (VAR_12->fspec == ((void*)0)) {
   VAR_13 = VAR_0;
   goto out;
  }



  FUNC_0(&VAR_14, VAR_2, VAR_1, VAR_5,
      VAR_12->fspec, VAR_11);
  if ((VAR_13 = FUNC_3(&VAR_14)) != 0)
   goto out;
  VAR_13 = FUNC_4(VAR_14.ni_vp, &VAR_15, VAR_11);
  FUNC_6(VAR_14.ni_vp);
  if (!VAR_13) {
   VAR_6.nfsrvfh_len = VAR_4;
   FUNC_1((caddr_t)&VAR_15,
       VAR_6.nfsrvfh_data,
       sizeof (fhandle_t));
   VAR_7 = 1;
  }
 }

out:
 FUNC_2(VAR_13);
 return (VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct nfs_common_args {int flags; int rsize; int wsize; void* retrans; void* timeo; } ;
typedef int mntent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_42 ;
 int VAR_43 ;
 int * FUNC_1 (int *,int ) ;
 int* VAR_44 ;
 int VAR_45 ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct nfs_common_args *VAR_46, mntent_t *VAR_47,
    const char *VAR_48, u_long VAR_49)
{
  VAR_46->rsize = FUNC_2(VAR_47, VAR_35);




  if (VAR_49 == VAR_41 && VAR_46->rsize > 8192)
    VAR_46->rsize = 8192;

  VAR_46->wsize = FUNC_2(VAR_47, VAR_39);




  if (VAR_49 == VAR_41 && VAR_46->wsize > 8192)
    VAR_46->wsize = 8192;

  VAR_46->timeo = FUNC_2(VAR_47, VAR_38);





  VAR_46->retrans = FUNC_2(VAR_47, VAR_34);
}

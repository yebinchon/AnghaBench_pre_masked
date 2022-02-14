
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct TYPE_7__ {int cs_ndir; int cs_nifree; } ;
struct cg {TYPE_2__ cg_cs; } ;
struct TYPE_6__ {struct cg* b_cg; } ;
struct bufarea {TYPE_1__ b_un; } ;
typedef scalar_t__ ino_t ;
struct TYPE_9__ {scalar_t__ ino_state; int ino_type; } ;
struct TYPE_8__ {scalar_t__ fs_ipg; int fs_fsize; } ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;

 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct cg*) ;
 int FUNC_6 (struct bufarea*) ;
 struct bufarea* FUNC_7 (int) ;
 int FUNC_8 (int,struct bufarea*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 union dinode* FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 int FUNC_11 (union dinode*) ;
 TYPE_4__* FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 TYPE_3__ VAR_18 ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int *) ;

ino_t
FUNC_15(ino_t VAR_19, int VAR_20)
{
 ino_t VAR_21;
 union dinode *VAR_22;
 struct bufarea *VAR_23;
 struct cg *VAR_24;
 int VAR_25;

 if (VAR_19 == 0)
  VAR_19 = VAR_3;
 else if (FUNC_12(VAR_19)->ino_state != VAR_4)
  return (0);
 for (VAR_21 = VAR_19; VAR_21 < VAR_16; VAR_21++)
  if (FUNC_12(VAR_21)->ino_state == VAR_4)
   break;
 if (VAR_21 == VAR_16)
  return (0);
 VAR_25 = FUNC_10(&VAR_18, VAR_21);
 VAR_23 = FUNC_7(VAR_25);
 VAR_24 = VAR_23->b_un.b_cg;
 if (!FUNC_8(VAR_25, VAR_23))
  return (0);
 FUNC_13(FUNC_5(VAR_24), VAR_21 % VAR_18.fs_ipg);
 VAR_24->cg_cs.cs_nifree--;
 switch (VAR_20 & VAR_2) {
 case 130:
  FUNC_12(VAR_21)->ino_state = VAR_0;
  VAR_24->cg_cs.cs_ndir++;
  break;
 case 128:
 case 129:
  FUNC_12(VAR_21)->ino_state = VAR_1;
  break;
 default:
  return (0);
 }
 FUNC_6(VAR_23);
 VAR_22 = FUNC_9(VAR_21);
 FUNC_1(VAR_22, VAR_10[0], FUNC_3((long)1));
 if (FUNC_0(VAR_22, VAR_10[0]) == 0) {
  FUNC_12(VAR_21)->ino_state = VAR_4;
  return (0);
 }
 FUNC_1(VAR_22, VAR_12, VAR_20);
 FUNC_1(VAR_22, VAR_11, 0);
 FUNC_1(VAR_22, VAR_5, FUNC_14(((void*)0)));
 FUNC_1(VAR_22, VAR_8, FUNC_0(VAR_22, VAR_5));
 FUNC_1(VAR_22, VAR_13, FUNC_0(VAR_22, VAR_8));
 FUNC_1(VAR_22, VAR_14, 0);
 FUNC_1(VAR_22, VAR_9, 0);
 FUNC_1(VAR_22, VAR_6, 0);
 FUNC_1(VAR_22, VAR_15, VAR_18.fs_fsize);
 FUNC_1(VAR_22, VAR_7, FUNC_4(VAR_18.fs_fsize));
 VAR_17++;
 FUNC_11(VAR_22);
 FUNC_12(VAR_21)->ino_type = FUNC_2(VAR_20);
 return (VAR_21);
}

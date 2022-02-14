
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


union dinodep {int * dp2; int * dp1; } ;
union dinode {int dp2; int dp1; } ;
typedef int ino_t ;
struct TYPE_20__ {int cs_nifree; } ;
struct TYPE_19__ {char* d_error; } ;
struct TYPE_17__ {int cs_nifree; } ;
struct TYPE_18__ {scalar_t__ fs_magic; TYPE_2__ fs_cstotal; int fs_cgsize; } ;
struct TYPE_16__ {int cs_nifree; } ;
struct TYPE_15__ {scalar_t__ cg_magic; TYPE_1__ cg_cs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_11__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,scalar_t__,char*,int ) ;
 int FUNC_1 (TYPE_11__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_11__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_4 (int,char*,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 TYPE_6__* VAR_4 ;
 int FUNC_7 (TYPE_4__*,union dinodep*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_4__*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(union dinode *VAR_7, ino_t VAR_8)
{
 union dinodep VAR_9;

 FUNC_0(&VAR_3, VAR_5 + FUNC_6(&VAR_6, FUNC_3(&VAR_6, 0)), (char *)&VAR_2,
     VAR_6.fs_cgsize);
 if (VAR_2.cg_magic != VAR_0) {
  FUNC_8("cg 0: bad magic number\n");
  FUNC_5(31);
 }
 VAR_2.cg_cs.cs_nifree--;
 FUNC_10(FUNC_1(&VAR_2), VAR_8);
 if (FUNC_2(&VAR_3, &VAR_2) != 0)
  FUNC_4(1, "iput: cgput: %s", VAR_3.d_error);
 VAR_6.fs_cstotal.cs_nifree--;
 VAR_4[0].cs_nifree--;
 if (FUNC_7(&VAR_3, &VAR_9, VAR_8) == -1) {
  FUNC_8("iput: %s\n", VAR_3.d_error);
  FUNC_5(32);
 }
 if (VAR_6.fs_magic == VAR_1)
  *VAR_9.dp1 = VAR_7->dp1;
 else
  *VAR_9.dp2 = VAR_7->dp2;
 FUNC_9(&VAR_3);
}

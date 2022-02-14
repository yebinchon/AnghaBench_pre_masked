
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct inoinfo {scalar_t__ i_dotdot; scalar_t__ i_parent; } ;
struct dirtemplate {scalar_t__ dotdot_ino; scalar_t__ dot_ino; } ;
struct TYPE_4__ {char* b_buf; } ;
struct bufarea {TYPE_1__ b_un; scalar_t__ b_errs; } ;
typedef scalar_t__ ino_t ;
struct TYPE_6__ {int ino_linkcnt; scalar_t__ ino_state; } ;
struct TYPE_5__ {size_t fs_fsize; } ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (union dinode*,scalar_t__) ;
 int * VAR_4 ;
 int VAR_5 ;
 struct dirtemplate VAR_6 ;
 int FUNC_5 (struct bufarea*) ;
 struct dirtemplate VAR_7 ;
 int FUNC_6 (scalar_t__) ;
 struct bufarea* FUNC_7 (int,size_t) ;
 struct inoinfo* FUNC_8 (scalar_t__) ;
 union dinode* FUNC_9 (scalar_t__) ;
 int FUNC_10 (union dinode*) ;
 TYPE_3__* FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,struct dirtemplate*,int) ;
 TYPE_2__ VAR_8 ;

ino_t
FUNC_13(ino_t VAR_9, ino_t VAR_10, int VAR_11)
{
 ino_t VAR_12;
 char *VAR_13;
 union dinode *VAR_14;
 struct bufarea *VAR_15;
 struct inoinfo *VAR_16;
 struct dirtemplate *VAR_17;

 VAR_12 = FUNC_3(VAR_10, VAR_2|VAR_11);
 VAR_17 = &VAR_6;
 VAR_17->dot_ino = VAR_12;
 VAR_17->dotdot_ino = VAR_9;
 VAR_14 = FUNC_9(VAR_12);
 VAR_15 = FUNC_7(FUNC_0(VAR_14, VAR_4[0]), VAR_8.fs_fsize);
 if (VAR_15->b_errs) {
  FUNC_6(VAR_12);
  return (0);
 }
 FUNC_12(VAR_15->b_un.b_buf, VAR_17, sizeof(struct dirtemplate));
 for (VAR_13 = &VAR_15->b_un.b_buf[VAR_0];
      VAR_13 < &VAR_15->b_un.b_buf[VAR_8.fs_fsize];
      VAR_13 += VAR_0)
  FUNC_12(VAR_13, &VAR_7, sizeof VAR_7);
 FUNC_5(VAR_15);
 FUNC_1(VAR_14, VAR_5, 2);
 FUNC_10(VAR_14);
 if (VAR_12 == VAR_3) {
  FUNC_11(VAR_12)->ino_linkcnt = FUNC_0(VAR_14, VAR_5);
  FUNC_4(VAR_14, VAR_12);
  return(VAR_12);
 }
 if (!FUNC_2(VAR_9)) {
  FUNC_6(VAR_12);
  return (0);
 }
 FUNC_4(VAR_14, VAR_12);
 VAR_16 = FUNC_8(VAR_12);
 VAR_16->i_parent = VAR_9;
 VAR_16->i_dotdot = VAR_9;
 FUNC_11(VAR_12)->ino_state = FUNC_11(VAR_9)->ino_state;
 if (FUNC_11(VAR_12)->ino_state == VAR_1) {
  FUNC_11(VAR_12)->ino_linkcnt = FUNC_0(VAR_14, VAR_5);
  FUNC_11(VAR_9)->ino_linkcnt++;
 }
 VAR_14 = FUNC_9(VAR_9);
 FUNC_1(VAR_14, VAR_5, FUNC_0(VAR_14, VAR_5) + 1);
 FUNC_10(VAR_14);
 return (VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int ufs2_daddr_t ;
struct TYPE_5__ {char* b_buf; } ;
struct bufarea {TYPE_1__ b_un; scalar_t__ b_errs; } ;
struct TYPE_6__ {size_t fs_bsize; int fs_frag; } ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct bufarea*) ;
 char VAR_5 ;
 int FUNC_5 (int,int ) ;
 struct bufarea* FUNC_6 (int,size_t) ;
 int FUNC_7 (union dinode*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 size_t FUNC_13 (TYPE_2__*,int,int) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static int
FUNC_14(union dinode *VAR_8, char *VAR_9)
{
 ufs2_daddr_t VAR_10, VAR_11;
 struct bufarea *VAR_12;
 char *VAR_13, VAR_14[VAR_0];

 VAR_10 = FUNC_8(&VAR_7, FUNC_0(VAR_8, VAR_4));
 if (VAR_10 >= VAR_1 - 1 || FUNC_0(VAR_8, VAR_3[VAR_10]) == 0 ||
     FUNC_0(VAR_8, VAR_4) == 0)
  return (0);
 if ((VAR_11 = FUNC_2(VAR_7.fs_frag)) == 0)
  return (0);
 FUNC_1(VAR_8, VAR_3[VAR_10 + 1], FUNC_0(VAR_8, VAR_3[VAR_10]));
 FUNC_1(VAR_8, VAR_3[VAR_10], VAR_11);
 FUNC_1(VAR_8, VAR_4, FUNC_0(VAR_8, VAR_4) + VAR_7.fs_bsize);
 FUNC_1(VAR_8, VAR_2, FUNC_0(VAR_8, VAR_2) + FUNC_3(VAR_7.fs_bsize));
 VAR_12 = FUNC_6(FUNC_0(VAR_8, VAR_3[VAR_10 + 1]),
  FUNC_13(&VAR_7, FUNC_0(VAR_8, VAR_4), VAR_10 + 1));
 if (VAR_12->b_errs)
  goto bad;
 FUNC_9(VAR_14, VAR_12->b_un.b_buf, VAR_0);
 VAR_12 = FUNC_6(VAR_11, VAR_7.fs_bsize);
 if (VAR_12->b_errs)
  goto bad;
 FUNC_9(VAR_12->b_un.b_buf, VAR_14, VAR_0);
 for (VAR_13 = &VAR_12->b_un.b_buf[VAR_0];
      VAR_13 < &VAR_12->b_un.b_buf[VAR_7.fs_bsize];
      VAR_13 += VAR_0)
  FUNC_9(VAR_13, &VAR_5, sizeof VAR_5);
 FUNC_4(VAR_12);
 VAR_12 = FUNC_6(FUNC_0(VAR_8, VAR_3[VAR_10 + 1]),
  FUNC_13(&VAR_7, FUNC_0(VAR_8, VAR_4), VAR_10 + 1));
 if (VAR_12->b_errs)
  goto bad;
 FUNC_9(VAR_12->b_un.b_buf, &VAR_5, sizeof VAR_5);
 FUNC_11("NO SPACE LEFT IN %s", VAR_9);
 if (VAR_6)
  FUNC_10(" (EXPANDED)\n");
 else if (FUNC_12("EXPAND") == 0)
  goto bad;
 FUNC_4(VAR_12);
 FUNC_7(VAR_8);
 return (1);
bad:
 FUNC_1(VAR_8, VAR_3[VAR_10], FUNC_0(VAR_8, VAR_3[VAR_10 + 1]));
 FUNC_1(VAR_8, VAR_3[VAR_10 + 1], 0);
 FUNC_1(VAR_8, VAR_4, FUNC_0(VAR_8, VAR_4) - VAR_7.fs_bsize);
 FUNC_1(VAR_8, VAR_2, FUNC_0(VAR_8, VAR_2) - FUNC_3(VAR_7.fs_bsize));
 FUNC_5(VAR_11, VAR_7.fs_frag);
 return (0);
}

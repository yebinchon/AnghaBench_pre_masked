
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int ufs2_daddr_t ;
struct inoinfo {size_t i_parent; size_t i_dotdot; size_t i_number; int i_numblks; void** i_blks; void* i_isize; struct inoinfo* i_nexthash; } ;
typedef size_t ino_t ;
struct TYPE_2__ {int fs_bsize; } ;


 void* FUNC_0 (union dinode*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (void*,int ) ;
 struct inoinfo** VAR_8 ;
 scalar_t__ VAR_9 ;
 struct inoinfo** VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (char*,scalar_t__,int) ;
 TYPE_1__ VAR_12 ;

void
FUNC_6(union dinode *VAR_13, ino_t VAR_14)
{
 struct inoinfo *VAR_15, **VAR_16;
 int VAR_17, VAR_18;

 if (FUNC_4(FUNC_0(VAR_13, VAR_6), VAR_12.fs_bsize) > VAR_1)
  VAR_18 = VAR_1 + VAR_2;
 else if (FUNC_0(VAR_13, VAR_6) > 0)
  VAR_18 = FUNC_4(FUNC_0(VAR_13, VAR_6), VAR_12.fs_bsize);
 else
  VAR_18 = 1;
 VAR_15 = (struct inoinfo *)
  FUNC_2(sizeof(*VAR_15) + (VAR_18 - 1) * sizeof(ufs2_daddr_t));
 if (VAR_15 == ((void*)0))
  FUNC_3(VAR_0, "cannot increase directory list");
 VAR_16 = &VAR_8[VAR_14 % VAR_7];
 VAR_15->i_nexthash = *VAR_16;
 *VAR_16 = VAR_15;
 VAR_15->i_parent = VAR_14 == VAR_3 ? VAR_3 : (ino_t)0;
 VAR_15->i_dotdot = (ino_t)0;
 VAR_15->i_number = VAR_14;
 VAR_15->i_isize = FUNC_0(VAR_13, VAR_6);
 VAR_15->i_numblks = VAR_18;
 for (VAR_17 = 0; VAR_17 < FUNC_1(VAR_18, VAR_1); VAR_17++)
  VAR_15->i_blks[VAR_17] = FUNC_0(VAR_13, VAR_4[VAR_17]);
 if (VAR_18 > VAR_1)
  for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++)
   VAR_15->i_blks[VAR_1 + VAR_17] = FUNC_0(VAR_13, VAR_5[VAR_17]);
 if (VAR_9 == VAR_11) {
  VAR_11 += 100;
  VAR_10 = (struct inoinfo **)FUNC_5((char *)VAR_10,
      VAR_11, sizeof(struct inoinfo *));
  if (VAR_10 == ((void*)0))
   FUNC_3(VAR_0, "cannot increase directory list");
 }
 VAR_10[VAR_9++] = VAR_15;
}

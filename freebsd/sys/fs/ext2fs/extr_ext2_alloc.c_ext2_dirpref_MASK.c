
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct m_ext2fs {scalar_t__ e2fs_gcount; int e2fs_fbcount; scalar_t__ e2fs_total_dir; scalar_t__ e2fs_ipg; int e2fs_fsize; int e2fs_fpg; int e2fs_bsize; scalar_t__* e2fs_contigdirs; int * e2fs_gd; TYPE_1__* e2fs; } ;
struct inode {int i_number; struct m_ext2fs* i_e2fs; int i_ump; } ;
struct TYPE_5__ {int v_vflag; } ;
struct TYPE_4__ {scalar_t__ e2fs_ficount; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct m_ext2fs*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static u_long
FUNC_10(struct inode *VAR_4)
{
 struct m_ext2fs *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10;
 u_int VAR_11, VAR_12, VAR_13;
 u_int VAR_14, VAR_15;
 u_int VAR_16, VAR_17;
 u_int VAR_18, VAR_19;

 FUNC_9(FUNC_1(VAR_4->i_ump), VAR_2);
 VAR_5 = VAR_4->i_e2fs;

 VAR_11 = VAR_5->e2fs->e2fs_ficount / VAR_5->e2fs_gcount;
 VAR_9 = VAR_5->e2fs_fbcount / VAR_5->e2fs_gcount;
 VAR_12 = VAR_5->e2fs_total_dir / VAR_5->e2fs_gcount;




 FUNC_0(FUNC_2(VAR_4), "ext2fs_dirpref");
 if (FUNC_2(VAR_4)->v_vflag & VAR_3) {
  VAR_7 = FUNC_3() % VAR_5->e2fs_gcount;
  VAR_16 = VAR_7;
  VAR_17 = VAR_5->e2fs_ipg;
  for (VAR_6 = VAR_7; VAR_6 < VAR_5->e2fs_gcount; VAR_6++)
   if (FUNC_5(&VAR_5->e2fs_gd[VAR_6]) < VAR_17 &&
       FUNC_6(&VAR_5->e2fs_gd[VAR_6]) >= VAR_11 &&
       FUNC_4(&VAR_5->e2fs_gd[VAR_6]) >= VAR_9) {
    VAR_16 = VAR_6;
    VAR_17 = FUNC_5(&VAR_5->e2fs_gd[VAR_6]);
   }
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   if (FUNC_5(&VAR_5->e2fs_gd[VAR_6]) < VAR_17 &&
       FUNC_6(&VAR_5->e2fs_gd[VAR_6]) >= VAR_11 &&
       FUNC_4(&VAR_5->e2fs_gd[VAR_6]) >= VAR_9) {
    VAR_16 = VAR_6;
    VAR_17 = FUNC_5(&VAR_5->e2fs_gd[VAR_6]);
   }
  return (VAR_16);
 }




 VAR_15 = FUNC_8(VAR_12 + VAR_5->e2fs_ipg / 16, VAR_5->e2fs_ipg);
 VAR_14 = VAR_11 - VAR_11 / 4;
 if (VAR_14 < 1)
  VAR_14 = 1;
 VAR_10 = VAR_9 - VAR_9 / 4;
 if (VAR_10 < 1)
  VAR_10 = 1;
 VAR_8 = VAR_5->e2fs_fsize * VAR_5->e2fs_fpg;
 VAR_18 = VAR_1;
 VAR_13 = VAR_12 ? (VAR_8 - VAR_9 * VAR_5->e2fs_bsize) / VAR_12 : 0;
 if (VAR_18 < VAR_13)
  VAR_18 = VAR_13;
 VAR_19 = FUNC_8((VAR_9 * VAR_5->e2fs_bsize) / VAR_18, 255);
 VAR_19 = FUNC_8(VAR_19, VAR_5->e2fs_ipg / VAR_0);
 if (VAR_19 == 0)
  VAR_19 = 1;






 VAR_7 = FUNC_7(VAR_5, VAR_4->i_number);
 for (VAR_6 = VAR_7; VAR_6 < VAR_5->e2fs_gcount; VAR_6++)
  if (FUNC_5(&VAR_5->e2fs_gd[VAR_6]) < VAR_15 &&
      FUNC_6(&VAR_5->e2fs_gd[VAR_6]) >= VAR_14 &&
      FUNC_4(&VAR_5->e2fs_gd[VAR_6]) >= VAR_10) {
   if (VAR_5->e2fs_contigdirs[VAR_6] < VAR_19)
    return (VAR_6);
  }
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  if (FUNC_5(&VAR_5->e2fs_gd[VAR_6]) < VAR_15 &&
      FUNC_6(&VAR_5->e2fs_gd[VAR_6]) >= VAR_14 &&
      FUNC_4(&VAR_5->e2fs_gd[VAR_6]) >= VAR_10) {
   if (VAR_5->e2fs_contigdirs[VAR_6] < VAR_19)
    return (VAR_6);
  }



 for (VAR_6 = VAR_7; VAR_6 < VAR_5->e2fs_gcount; VAR_6++)
  if (FUNC_6(&VAR_5->e2fs_gd[VAR_6]) >= VAR_11)
   return (VAR_6);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  if (FUNC_6(&VAR_5->e2fs_gd[VAR_6]) >= VAR_11)
   break;
 return (VAR_6);
}

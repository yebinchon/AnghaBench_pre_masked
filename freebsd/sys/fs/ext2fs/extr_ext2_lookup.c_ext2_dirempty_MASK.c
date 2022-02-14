
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct inode {scalar_t__ i_size; } ;
struct ext2fs_direct_2 {scalar_t__ e2d_reclen; scalar_t__ e2d_ino; int e2d_namlen; char* e2d_name; } ;
struct dirtemplate {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ino_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__,int ,int,struct ucred*,int ,scalar_t__*,struct thread*) ;

int
FUNC_2(struct inode *VAR_6, ino_t VAR_7, struct ucred *VAR_8)
{
 off_t VAR_9;
 struct dirtemplate VAR_10;
 struct ext2fs_direct_2 *VAR_11 = (struct ext2fs_direct_2 *)&VAR_10;
 int VAR_12, VAR_13;
 ssize_t VAR_14;


 for (VAR_9 = 0; VAR_9 < VAR_6->i_size; VAR_9 += VAR_11->e2d_reclen) {
  VAR_12 = FUNC_1(VAR_4, FUNC_0(VAR_6), (caddr_t)VAR_11, (sizeof(struct dirtemplate) / 2),
      VAR_9, VAR_5, VAR_0 | VAR_1, VAR_8,
      VAR_3, &VAR_14, (struct thread *)0);




  if (VAR_12 || VAR_14 != 0)
   return (0);

  if (VAR_11->e2d_reclen == 0)
   return (0);

  if (VAR_11->e2d_ino == 0)
   continue;

  VAR_13 = VAR_11->e2d_namlen;
  if (VAR_13 > 2)
   return (0);
  if (VAR_11->e2d_name[0] != '.')
   return (0);





  if (VAR_13 == 1)
   continue;
  if (VAR_11->e2d_name[1] == '.' && VAR_11->e2d_ino == VAR_7)
   continue;
  return (0);
 }
 return (1);
}

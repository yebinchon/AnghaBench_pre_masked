
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ufs2_daddr_t ;
struct direct {int d_name; int d_namlen; int d_type; scalar_t__ d_reclen; int d_ino; } ;
typedef size_t off_t ;
typedef int ino_t ;
struct TYPE_3__ {scalar_t__ fs_bsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,char*,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(ufs2_daddr_t VAR_6, off_t VAR_7, ino_t VAR_8)
{
 struct direct *VAR_9;
 char VAR_10[VAR_2];

 if (FUNC_1(&VAR_4, FUNC_5(&VAR_5, VAR_6), VAR_10, VAR_5.fs_bsize) <= 0) {
  FUNC_7("Failed to read dir block");
  return (-1);
 }
 FUNC_3(&VAR_10[VAR_7], VAR_5.fs_bsize - VAR_7);
 VAR_9 = (struct direct *)&VAR_10[VAR_7];
 VAR_9->d_ino = VAR_8;
 VAR_9->d_reclen = VAR_0;
 VAR_9->d_type = VAR_1;
 VAR_9->d_namlen = FUNC_6(VAR_3);
 FUNC_0(VAR_3, &VAR_9->d_name, FUNC_6(VAR_3));
 FUNC_4(VAR_10, VAR_7 + VAR_0);
 if (FUNC_2(&VAR_4, FUNC_5(&VAR_5, VAR_6), VAR_10, VAR_5.fs_bsize) <= 0) {
  FUNC_7("Failed to write dir block");
  return (-1);
 }
 return (0);
}

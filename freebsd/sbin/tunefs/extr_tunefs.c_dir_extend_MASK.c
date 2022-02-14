
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ufs2_daddr_t ;
typedef int off_t ;
typedef int ino_t ;
struct TYPE_3__ {int fs_bsize; int fs_fsize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(ufs2_daddr_t VAR_3, ufs2_daddr_t VAR_4, off_t VAR_5, ino_t VAR_6)
{
 char VAR_7[VAR_0];

 if (FUNC_0(&VAR_1, FUNC_4(&VAR_2, VAR_3), VAR_7,
     FUNC_5(VAR_5, VAR_2.fs_fsize)) <= 0) {
  FUNC_6("Failed to read dir block");
  return (-1);
 }
 FUNC_2(VAR_7, VAR_5);
 if (FUNC_1(&VAR_1, FUNC_4(&VAR_2, VAR_4), VAR_7, VAR_2.fs_bsize)
     <= 0) {
  FUNC_6("Failed to write dir block");
  return (-1);
 }

 return (FUNC_3(VAR_4, VAR_5, VAR_6));
}

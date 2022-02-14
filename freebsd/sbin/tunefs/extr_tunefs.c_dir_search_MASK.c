
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
struct direct {scalar_t__ d_reclen; scalar_t__ d_ino; scalar_t__ d_namlen; int d_name; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static ino_t
FUNC_5(ufs2_daddr_t VAR_4, int VAR_5)
{
 char VAR_6[VAR_0];
 struct direct *VAR_7;
 int VAR_8;

 if (FUNC_1(&VAR_2, FUNC_2(&VAR_3, VAR_4), VAR_6, VAR_5) <= 0) {
  FUNC_4("Failed to read dir block");
  return (-1);
 }
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_7->d_reclen) {
  VAR_7 = (struct direct *)&VAR_6[VAR_8];
  if (VAR_7->d_reclen == 0)
   break;
  if (VAR_7->d_ino == 0)
   continue;
  if (VAR_7->d_namlen != FUNC_3(VAR_1))
   continue;
  if (FUNC_0(VAR_7->d_name, VAR_1, VAR_7->d_namlen) != 0)
   continue;
  return (VAR_7->d_ino);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint8_t ;
typedef int ufs_lbn_t ;
typedef int ufs2_daddr_t ;
struct suj_ino {int si_skipparent; } ;
struct direct {scalar_t__ d_ino; int d_namlen; char* d_name; scalar_t__ d_reclen; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ino_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct suj_ino* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_6(ino_t VAR_3, ufs_lbn_t VAR_4, ufs2_daddr_t VAR_5, int VAR_6)
{
 struct suj_ino *VAR_7;
 struct direct *VAR_8;
 off_t VAR_9;
 uint8_t *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_7 = FUNC_1(VAR_3, 0);
 if (VAR_7)
  VAR_11 = VAR_7->si_skipparent;
 else
  VAR_11 = 0;
 VAR_14 = FUNC_4(VAR_2, VAR_6);
 VAR_10 = FUNC_0(VAR_5, VAR_14);
 VAR_8 = (struct direct *)&VAR_10[0];
 for (VAR_13 = 0; VAR_13 < VAR_14 && VAR_8->d_reclen; VAR_13 += VAR_8->d_reclen) {
  VAR_8 = (struct direct *)&VAR_10[VAR_13];
  if (VAR_8->d_ino == 0 || VAR_8->d_ino == VAR_0)
   continue;
  if (VAR_8->d_namlen == 1 && VAR_8->d_name[0] == '.')
   continue;
  VAR_12 = VAR_8->d_namlen == 2 && VAR_8->d_name[0] == '.' &&
      VAR_8->d_name[1] == '.';
  if (VAR_12 && VAR_11 == 1)
   continue;
  if (VAR_1)
   FUNC_5("Directory %ju removing ino %ju name %s\n",
       (uintmax_t)VAR_3, (uintmax_t)VAR_8->d_ino, VAR_8->d_name);
  VAR_9 = FUNC_3(VAR_2, VAR_4) + VAR_13;
  FUNC_2(VAR_3, VAR_8->d_ino, VAR_9, VAR_12);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
typedef int ufs1_daddr_t ;
typedef int indirbuf ;
struct TYPE_4__ {scalar_t__ fs_magic; int fs_bsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(ufs2_daddr_t VAR_4, int VAR_5, int *VAR_6)
{
 char VAR_7[VAR_1];
 ufs1_daddr_t *VAR_8;
 ufs2_daddr_t *VAR_9;
 ufs2_daddr_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_2(VAR_7, sizeof(VAR_7));
 VAR_8 = (ufs1_daddr_t *)VAR_7;
 VAR_9 = (void *)VAR_8;
 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < FUNC_0(&VAR_3) && *VAR_6 != 0; VAR_13++) {
  VAR_10 = FUNC_4();
  if (VAR_10 <= 0)
   return (-1);
  VAR_12++;
  if (VAR_3.fs_magic == VAR_0)
   *VAR_8++ = VAR_10;
  else
   *VAR_9++ = VAR_10;
  if (VAR_5 != 0) {
   VAR_11 = FUNC_6(VAR_10, VAR_5 - 1, VAR_6);
   if (VAR_11 <= 0)
    return (-1);
   VAR_12 += VAR_11;
  } else
   (*VAR_6)--;
 }
 if (FUNC_1(&VAR_2, FUNC_3(&VAR_3, VAR_4), VAR_7,
     VAR_3.fs_bsize) <= 0) {
  FUNC_5("Failed to write indirect");
  return (-1);
 }
 return (VAR_12);
}

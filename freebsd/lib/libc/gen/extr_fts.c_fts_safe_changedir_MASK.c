
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_3__ {scalar_t__ fts_dev; scalar_t__ fts_ino; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(FTS *VAR_6, FTSENT *VAR_7, int VAR_8, char *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct stat VAR_13;

 VAR_12 = VAR_8;
 if (FUNC_0(VAR_1))
  return (0);
 if (VAR_8 < 0 && (VAR_12 = FUNC_3(VAR_9, VAR_4 | VAR_3 |
     VAR_2, 0)) < 0)
  return (-1);
 if (FUNC_2(VAR_12, &VAR_13)) {
  VAR_10 = -1;
  goto bail;
 }
 if (VAR_7->fts_dev != VAR_13.st_dev || VAR_7->fts_ino != VAR_13.st_ino) {
  VAR_5 = VAR_0;
  VAR_10 = -1;
  goto bail;
 }
 VAR_10 = FUNC_4(VAR_12);
bail:
 VAR_11 = VAR_5;
 if (VAR_8 < 0)
  (void)FUNC_1(VAR_12);
 VAR_5 = VAR_11;
 return (VAR_10);
}

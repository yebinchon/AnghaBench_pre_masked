
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct freebsd11_stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_3__ {scalar_t__ fts_dev; scalar_t__ fts_ino; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct freebsd11_stat*) ;

__attribute__((used)) static int
FUNC_5(FTS *VAR_5, FTSENT *VAR_6, int VAR_7, char *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct freebsd11_stat VAR_12;

 VAR_11 = VAR_7;
 if (FUNC_0(VAR_1))
  return (0);
 if (VAR_7 < 0 && (VAR_11 = FUNC_2(VAR_8, VAR_3 | VAR_2, 0)) < 0)
  return (-1);
 if (FUNC_4(VAR_11, &VAR_12)) {
  VAR_9 = -1;
  goto bail;
 }
 if (VAR_6->fts_dev != VAR_12.st_dev || VAR_6->fts_ino != VAR_12.st_ino) {
  VAR_4 = VAR_0;
  VAR_9 = -1;
  goto bail;
 }
 VAR_9 = FUNC_3(VAR_11);
bail:
 VAR_10 = VAR_4;
 if (VAR_7 < 0)
  (void)FUNC_1(VAR_11);
 VAR_4 = VAR_10;
 return (VAR_9);
}

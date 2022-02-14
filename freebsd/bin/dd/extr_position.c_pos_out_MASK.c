
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mtop {int mt_count; int mt_op; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {int flags; char* name; scalar_t__ offset; int dbsz; int db; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ,int ,struct mtop*) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,int) ;

void
FUNC_7(void)
{
 struct mtop VAR_9;
 off_t VAR_10;
 ssize_t VAR_11;






 if (VAR_8.flags & (VAR_1 | VAR_0)) {
  VAR_7 = 0;
  if (FUNC_3(VAR_8.fd, FUNC_5(&VAR_8), VAR_6) == -1 &&
      VAR_7 != 0)
   FUNC_0(1, "%s", VAR_8.name);
  return;
 }


 if (VAR_8.offset < 0)
  FUNC_1(1, "%s: illegal offset", "oseek/seek");


 if (VAR_8.flags & VAR_5) {
  VAR_9.mt_op = VAR_3;
  VAR_9.mt_count = VAR_8.offset;

  if (FUNC_2(VAR_8.fd, VAR_4, &VAR_9) == -1)
   FUNC_0(1, "%s", VAR_8.name);
  return;
 }


 for (VAR_10 = 0; VAR_10 < VAR_8.offset; ++VAR_10) {
  if ((VAR_11 = FUNC_4(VAR_8.fd, VAR_8.db, VAR_8.dbsz)) > 0)
   continue;

  if (VAR_11 == -1)
   FUNC_0(1, "%s", VAR_8.name);






  VAR_9.mt_op = VAR_2;
  VAR_9.mt_count = 1;
  if (FUNC_2(VAR_8.fd, VAR_4, &VAR_9) == -1)
   FUNC_0(1, "%s", VAR_8.name);

  while (VAR_10++ < VAR_8.offset) {
   VAR_11 = FUNC_6(VAR_8.fd, VAR_8.db, VAR_8.dbsz);
   if (VAR_11 == -1)
    FUNC_0(1, "%s", VAR_8.name);
   if (VAR_11 != VAR_8.dbsz)
    FUNC_1(1, "%s: write failure", VAR_8.name);
  }
  break;
 }
}

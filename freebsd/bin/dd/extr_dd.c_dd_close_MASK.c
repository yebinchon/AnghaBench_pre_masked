
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dbcnt; scalar_t__ dbsz; scalar_t__ seek_offset; int flags; int name; int fd; int dbp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int ) ;
 char VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,char,scalar_t__) ;
 TYPE_1__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void)
{
 if (VAR_8 == VAR_10)
  FUNC_2();
 else if (VAR_8 == VAR_7)
  FUNC_0();
 else if (VAR_8 == VAR_14)
  FUNC_8();
 if (VAR_9 & VAR_4 && VAR_12.dbcnt && VAR_12.dbcnt < VAR_12.dbsz) {
  if (VAR_9 & VAR_2)
   FUNC_7(VAR_12.dbp, VAR_11, VAR_12.dbsz - VAR_12.dbcnt);
  else if (VAR_9 & (VAR_0 | VAR_5))
   FUNC_7(VAR_12.dbp, ' ', VAR_12.dbsz - VAR_12.dbcnt);
  else
   FUNC_7(VAR_12.dbp, 0, VAR_12.dbsz - VAR_12.dbcnt);
  VAR_12.dbcnt = VAR_12.dbsz;
 }
 if (VAR_12.dbcnt || VAR_13)
  FUNC_1(1);





 if (VAR_12.seek_offset > 0 && (VAR_12.flags & VAR_6)) {
  if (FUNC_6(VAR_12.fd, VAR_12.seek_offset) == -1)
   FUNC_3(1, "truncating %s", VAR_12.name);
 }

 if (VAR_9 & VAR_3) {
  if (FUNC_5(VAR_12.fd) == -1)
   FUNC_3(1, "fsyncing %s", VAR_12.name);
 } else if (VAR_9 & VAR_1) {
  if (FUNC_4(VAR_12.fd) == -1)
   FUNC_3(1, "fdatasyncing %s", VAR_12.name);
 }
}

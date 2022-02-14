
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {int flags; scalar_t__ offset; size_t dbsz; int name; int db; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ) ;

void
FUNC_8(void)
{
 off_t VAR_10;
 int VAR_11;
 ssize_t VAR_12;
 size_t VAR_13;


 if (VAR_7.flags & VAR_2) {
  VAR_5 = 0;
  if (FUNC_2(VAR_7.fd, FUNC_5(&VAR_7), VAR_3) == -1 &&
      VAR_5 != 0)
   FUNC_0(1, "%s", VAR_7.name);
  return;
 }


 if (VAR_7.offset < 0)
  FUNC_1(1, "%s: illegal offset", "iseek/skip");






 for (VAR_13 = VAR_7.dbsz, VAR_10 = VAR_7.offset, VAR_11 = 0; VAR_10;) {
  if ((VAR_12 = FUNC_4(VAR_7.fd, VAR_7.db, VAR_13)) > 0) {
   if (VAR_7.flags & VAR_1) {
    if (!(VAR_13 -= VAR_12)) {
     VAR_13 = VAR_7.dbsz;
     --VAR_10;
    }
   } else
    --VAR_10;
   if (VAR_9)
    FUNC_6();
   if (VAR_8)
    FUNC_3();
   continue;
  }

  if (VAR_12 == 0) {
   if (VAR_6 > 1) {
    --VAR_6;
    continue;
   }
   FUNC_1(1, "skip reached end of input");
  }






  if (VAR_4 & VAR_0) {
   if (!VAR_11) {
    FUNC_7("%s", VAR_7.name);
    VAR_11 = 1;
    FUNC_6();
   }
   continue;
  }
  FUNC_0(1, "%s", VAR_7.name);
 }
}

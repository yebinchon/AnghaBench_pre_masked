
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_6__ {int dbsz; int dbrcnt; int flags; scalar_t__ dbp; scalar_t__ dbcnt; int name; int fd; } ;
struct TYPE_5__ {scalar_t__ dbcnt; } ;
struct TYPE_4__ {int swab; scalar_t__ in_part; scalar_t__ in_full; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int FUNC_2 (int,char*,int ) ;
 char VAR_13 ;
 TYPE_3__ VAR_14 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__,char,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_2__ VAR_17 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_7 () ;
 TYPE_1__ VAR_19 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,size_t) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(void)
{
 ssize_t VAR_20;

 for (;;) {
  switch (VAR_11) {
  case -1:
   return;
  case 0:
   break;
  default:
   if (VAR_19.in_full + VAR_19.in_part >= (uintmax_t)VAR_11)
    return;
   break;
  }

  if (VAR_18 > 0)
   FUNC_7();





  if (VAR_12 & VAR_7) {
   if (VAR_12 & VAR_2)
    FUNC_4(VAR_14.dbp, VAR_13, VAR_14.dbsz);
   else if (VAR_12 & (VAR_0 | VAR_8))
    FUNC_4(VAR_14.dbp, ' ', VAR_14.dbsz);
   else
    FUNC_4(VAR_14.dbp, 0, VAR_14.dbsz);
  }

  VAR_14.dbrcnt = 0;
fill:
  VAR_20 = FUNC_6(VAR_14.fd, VAR_14.dbp + VAR_14.dbrcnt, VAR_14.dbsz - VAR_14.dbrcnt);


  if (VAR_20 == 0 && VAR_14.dbrcnt == 0)
   return;


  if (VAR_20 == -1) {




   if (!(VAR_12 & VAR_4))
    FUNC_2(1, "%s", VAR_14.name);
   FUNC_11("%s", VAR_14.name);
   FUNC_9();







   if (VAR_14.flags & VAR_9 &&
       FUNC_3(VAR_14.fd, (off_t)VAR_14.dbsz, VAR_10))
    FUNC_11("%s", VAR_14.name);


   if (!(VAR_12 & VAR_7))
    continue;
  }


  if (VAR_12 & VAR_7)
   VAR_20 = VAR_14.dbsz;


  VAR_14.dbrcnt += VAR_20;


  if (VAR_14.dbrcnt == VAR_14.dbsz)
   ++VAR_19.in_full;
  else if (VAR_12 & VAR_3 && VAR_20 != 0)
   goto fill;
  else
   ++VAR_19.in_part;


  VAR_14.dbcnt += VAR_14.dbrcnt;






  if ((VAR_12 & ~(VAR_4 | VAR_5 | VAR_7)) == VAR_1) {
   VAR_17.dbcnt = VAR_14.dbcnt;
   FUNC_1(1);
   VAR_14.dbcnt = 0;
   continue;
  }

  if (VAR_12 & VAR_6) {
   if ((VAR_20 = VAR_14.dbrcnt) & 1) {
    ++VAR_19.swab;
    --VAR_20;
   }
   FUNC_10(VAR_14.dbp, (size_t)VAR_20);
  }


  VAR_14.dbp += VAR_14.dbrcnt;
  FUNC_0)();
  if (VAR_16)
   FUNC_9();
  if (VAR_15)
   FUNC_5();
 }
}

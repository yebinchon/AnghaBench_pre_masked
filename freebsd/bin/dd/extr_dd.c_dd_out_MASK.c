
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ssize_t ;
struct TYPE_4__ {size_t dbcnt; size_t dbsz; int seek_offset; int flags; int * db; int * dbp; int name; int fd; } ;
struct TYPE_3__ {size_t bytes; int out_part; int out_full; } ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int *,int *,size_t) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_5 (char*,int ) ;
 size_t FUNC_6 (int ,int *,size_t) ;

void
FUNC_7(int VAR_10)
{
 u_char *VAR_11;
 size_t VAR_12, VAR_13;
 ssize_t VAR_14;
 static int VAR_15;
 int VAR_16;
 VAR_11 = VAR_7.db;






 for (VAR_13 = VAR_10 ? VAR_7.dbcnt : VAR_7.dbsz;; VAR_13 = VAR_7.dbsz) {
  VAR_12 = VAR_13;
  do {
   VAR_16 = 0;
   if (VAR_5 & VAR_0) {

    VAR_16 = FUNC_0(VAR_11, VAR_12);
   }
   if (VAR_16 && !VAR_10) {
    VAR_8 += VAR_12;
    VAR_14 = VAR_12;
   } else {
    if (VAR_8 != 0) {






     VAR_7.seek_offset = FUNC_3(VAR_7.fd, VAR_8, VAR_4);
     if (VAR_7.seek_offset == -1)
      FUNC_1(2, "%s: seek error creating sparse file",
          VAR_7.name);
     VAR_8 = 0;
    }
    if (VAR_12) {
     VAR_14 = FUNC_6(VAR_7.fd, VAR_11, VAR_12);
     VAR_7.seek_offset = 0;
    } else {
     return;
    }
   }

   if (VAR_14 <= 0) {
    if (VAR_14 == 0)
     FUNC_2(1, "%s: end of device", VAR_7.name);
    if (VAR_6 != VAR_1)
     FUNC_1(1, "%s", VAR_7.name);
    VAR_14 = 0;
   }

   VAR_11 += VAR_14;
   VAR_9.bytes += VAR_14;

   if ((size_t)VAR_14 == VAR_13 && VAR_13 == (size_t)VAR_7.dbsz)
    ++VAR_9.out_full;
   else
    ++VAR_9.out_part;

   if ((size_t) VAR_14 != VAR_12) {
    if (VAR_7.flags & VAR_3)
     FUNC_2(1, "%s: short write on tape device",
         VAR_7.name);
    if (VAR_7.flags & VAR_2 && !VAR_15) {
     VAR_15 = 1;
     FUNC_5("%s: short write on character device",
         VAR_7.name);
    }
   }

   VAR_12 -= VAR_14;
  } while (VAR_12 != 0);

  if ((VAR_7.dbcnt -= VAR_13) < VAR_7.dbsz)
   break;
 }


 if (VAR_7.dbcnt)
  (void)FUNC_4(VAR_7.db, VAR_7.dbp - VAR_7.dbcnt, VAR_7.dbcnt);
 VAR_7.dbp = VAR_7.db + VAR_7.dbcnt;
}

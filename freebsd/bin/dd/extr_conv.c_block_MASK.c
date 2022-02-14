
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_6__ {char* db; size_t dbrcnt; size_t dbcnt; char* dbp; } ;
struct TYPE_5__ {char* dbp; size_t dbcnt; size_t dbsz; } ;
struct TYPE_4__ {int trunc; } ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char,size_t) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void
FUNC_4(void)
{
 u_char *VAR_5, *VAR_6;
 const u_char *VAR_7;
 size_t VAR_8, VAR_9;
 static int VAR_10;
 int VAR_11;







 if (VAR_10) {
  for (VAR_5 = VAR_2.db, VAR_8 = VAR_2.dbrcnt; VAR_8 && *VAR_5++ != '\n'; --VAR_8)
   ;
  if (!VAR_8) {
   VAR_2.dbcnt = 0;
   VAR_2.dbp = VAR_2.db;
   return;
  }
  VAR_10 = 0;

  VAR_2.dbcnt = VAR_8 - 1;
  VAR_2.dbp = VAR_5 + VAR_8 - 1;
 }





 VAR_11 = 0;
 for (VAR_5 = VAR_2.dbp - VAR_2.dbcnt, VAR_6 = VAR_3.dbp; VAR_2.dbcnt;) {
  VAR_9 = FUNC_0(VAR_0, (size_t)VAR_2.dbcnt);
  if ((VAR_7 = VAR_1) != ((void*)0))
   for (VAR_8 = 0; VAR_8 < VAR_9 && (VAR_11 = *VAR_5++) != '\n';
       ++VAR_8)
    *VAR_6++ = VAR_7[VAR_11];
  else
   for (VAR_8 = 0; VAR_8 < VAR_9 && (VAR_11 = *VAR_5++) != '\n';
       ++VAR_8)
    *VAR_6++ = VAR_11;




  if (VAR_11 != '\n' && (size_t)VAR_2.dbcnt < VAR_0) {
   (void)FUNC_2(VAR_2.db, VAR_2.dbp - VAR_2.dbcnt, VAR_2.dbcnt);
   break;
  }


  VAR_2.dbcnt -= VAR_8;
  if (VAR_11 == '\n')
   --VAR_2.dbcnt;


  if (VAR_8 < VAR_0)
   (void)FUNC_3(VAR_6, VAR_1 ? VAR_1[' '] : ' ', VAR_0 - VAR_8);
  else {




   if (!VAR_2.dbcnt || *VAR_5 != '\n')
    ++VAR_4.trunc;


   for (; VAR_2.dbcnt && *VAR_5++ != '\n'; --VAR_2.dbcnt)
    ;
   if (!VAR_2.dbcnt)
    VAR_10 = 1;
   else
    --VAR_2.dbcnt;
  }


  VAR_3.dbp += VAR_0;
  if ((VAR_3.dbcnt += VAR_0) >= VAR_3.dbsz)
   FUNC_1(0);
  VAR_6 = VAR_3.dbp;
 }
 VAR_2.dbp = VAR_2.db + VAR_2.dbcnt;
}

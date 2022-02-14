
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ db_expr_t ;
typedef void* db_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (void*,int,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_3 (char*,long,long) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int,scalar_t__) ;
 int FUNC_6 () ;

void
FUNC_7(db_expr_t VAR_3, bool VAR_4, db_expr_t VAR_5,
    char * VAR_6)
{
 db_addr_t VAR_7;
 db_expr_t VAR_8;
 db_expr_t VAR_9;
 int VAR_10;
 bool VAR_11 = 0;

 VAR_7 = (db_addr_t) VAR_3;

 switch (VAR_6[0]) {
     case 'b':
  VAR_10 = 1;
  break;
     case 'h':
  VAR_10 = 2;
  break;
     case 'l':
     case '\0':
  VAR_10 = 4;
  break;
     default:
  FUNC_0("Unknown size\n");
  return;
 }

 while (FUNC_1(&VAR_9)) {
     VAR_8 = FUNC_2(VAR_7, VAR_10, 0);
     FUNC_4(VAR_7, VAR_0);
     FUNC_3("\t\t%#8lr\t=\t%#8lr\n", (long)VAR_8,(long)VAR_9);
     FUNC_5(VAR_7, VAR_10, VAR_9);
     VAR_7 += VAR_10;

     VAR_11 = 1;
 }

 if (!VAR_11)
     FUNC_0("Nothing written.\n");

 VAR_1 = VAR_7;
 VAR_2 = VAR_7 - VAR_10;

 FUNC_6();
}

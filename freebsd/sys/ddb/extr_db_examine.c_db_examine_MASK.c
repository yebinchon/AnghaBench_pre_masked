
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char db_expr_t ;
typedef int db_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 char FUNC_2 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char,int ) ;

__attribute__((used)) static void
FUNC_6(db_addr_t VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7;
 db_expr_t VAR_8;
 int VAR_9;
 int VAR_10;
 char * VAR_11;

 while (--VAR_6 >= 0 && !VAR_2) {
     VAR_11 = VAR_5;
     VAR_9 = 4;
     while ((VAR_7 = *VAR_11++) != 0) {
  switch (VAR_7) {
      case 'b':
   VAR_9 = 1;
   break;
      case 'h':
   VAR_9 = 2;
   break;
      case 'l':
   VAR_9 = 4;
   break;
      case 'g':
   VAR_9 = 8;
   break;
      case 'a':
   VAR_9 = sizeof(void *);

   if (FUNC_3() != 0)
       FUNC_4("\n");
   VAR_3 = VAR_4;
   FUNC_5(VAR_4, VAR_0);
   FUNC_4(":\t");
   break;
      default:
   if (FUNC_3() == 0) {

       FUNC_5(VAR_4, VAR_0);
       FUNC_4(":\t");
       VAR_3 = VAR_4;
   }

   VAR_10 = VAR_9 * 4;
   switch (VAR_7) {
       case 'r':
    VAR_8 = FUNC_2(VAR_4, VAR_9, 1);
    VAR_4 += VAR_9;
    FUNC_4("%+-*lr", VAR_10, (long)VAR_8);
    break;
       case 'x':
    VAR_8 = FUNC_2(VAR_4, VAR_9, 0);
    VAR_4 += VAR_9;
    FUNC_4("%-*lx", VAR_10, (long)VAR_8);
    break;
       case 'z':
    VAR_8 = FUNC_2(VAR_4, VAR_9, 1);
    VAR_4 += VAR_9;
    FUNC_4("%-*ly", VAR_10, (long)VAR_8);
    break;
       case 'd':
    VAR_8 = FUNC_2(VAR_4, VAR_9, 1);
    VAR_4 += VAR_9;
    FUNC_4("%-*ld", VAR_10, (long)VAR_8);
    break;
       case 'u':
    VAR_8 = FUNC_2(VAR_4, VAR_9, 0);
    VAR_4 += VAR_9;
    FUNC_4("%-*lu", VAR_10, (long)VAR_8);
    break;
       case 'o':
    VAR_8 = FUNC_2(VAR_4, VAR_9, 0);
    VAR_4 += VAR_9;
    FUNC_4("%-*lo", VAR_10, (long)VAR_8);
    break;
       case 'c':
    VAR_8 = FUNC_2(VAR_4, 1, 0);
    VAR_4 += 1;
    if (VAR_8 >= ' ' && VAR_8 <= '~')
        FUNC_4("%c", (int)VAR_8);
    else
        FUNC_4("\\%03o", (int)VAR_8);
    break;
       case 's':
    for (;;) {
        VAR_8 = FUNC_2(VAR_4, 1, 0);
        VAR_4 += 1;
        if (VAR_8 == 0)
     break;
        if (VAR_8 >= ' ' && VAR_8 <= '~')
     FUNC_4("%c", (int)VAR_8);
        else
     FUNC_4("\\%03o", (int)VAR_8);
    }
    break;
       case 'S':
    VAR_8 = FUNC_2(VAR_4, sizeof(void *),
        0);
    VAR_4 += sizeof(void *);
    FUNC_5(VAR_8, VAR_0);
    break;
       case 'i':
    VAR_4 = FUNC_0(VAR_4, 0);
    break;
       case 'I':
    VAR_4 = FUNC_0(VAR_4, 1);
    break;
       default:
    break;
   }
   if (FUNC_3() != 0)
       FUNC_1(1);
   break;
  }
     }
 }
 VAR_1 = VAR_4;
}

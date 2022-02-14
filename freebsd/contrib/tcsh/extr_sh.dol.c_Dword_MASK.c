
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_buf {int* s; int len; } ;
struct Strbuf {int* s; int len; } ;
typedef int eChar ;
typedef char Char ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct blk_buf*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct blk_buf* FUNC_2 () ;
 int FUNC_3 (struct blk_buf*,char) ;
 char* FUNC_4 (struct blk_buf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct blk_buf*,char*) ;
 int FUNC_6 (struct blk_buf*) ;
 int FUNC_7 (struct blk_buf*,int ) ;
 int FUNC_8 (struct blk_buf*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct blk_buf*) ;

__attribute__((used)) static int
FUNC_13(struct blk_buf *VAR_5)
{
    eChar VAR_6, VAR_7;
    struct Strbuf *VAR_8 = FUNC_2();
    int VAR_9;
    int VAR_10 = 0;
    Char *VAR_11;

    FUNC_7(VAR_8, VAR_3);
    for (;;) {
 VAR_6 = FUNC_0(VAR_0);
 switch (VAR_6) {

 case 128:
     if (VAR_10 == 0) {
  FUNC_8(VAR_8);
  return (0);
     }

     FUNC_11(VAR_6);


 case '\n':
     goto end;

 case ' ':
 case '\t':
     continue;

 case '`':

     FUNC_3(VAR_8, (Char) VAR_6);

 case '\'':
 case '"':




     VAR_7 = VAR_6;
     VAR_9 = VAR_7 == '"' ? VAR_0 : 0;
     for (;;) {
  VAR_6 = FUNC_0(VAR_9);
  if (VAR_6 == VAR_7)
      break;
  if (VAR_6 == '\n' || VAR_6 == 128) {
      FUNC_8(VAR_5);
      FUNC_9(VAR_1, (int)VAR_7);
  }
  if ((VAR_6 & (VAR_2 | VAR_4)) == ('\n' | VAR_2)) {
      if (VAR_8->len != 0 && (VAR_8->s[VAR_8->len - 1] & VAR_4) == '\\')
   VAR_8->len--;
  }
  switch (VAR_7) {

  case '"':




      FUNC_3(VAR_8, VAR_6 == '`' ? '`' : VAR_6 | VAR_2);
      break;

  case '\'':

      FUNC_3(VAR_8, VAR_6 | VAR_2);
      break;

  case '`':

      FUNC_3(VAR_8, (Char) VAR_6);
      break;

  default:
      break;
  }
     }
     if (VAR_7 == '`')
  FUNC_3(VAR_8, '`');
     VAR_10 = 1;
     if (FUNC_1(VAR_8) != 0)
  goto end;
     continue;

 case '\\':
     VAR_6 = FUNC_0(0);
     if (VAR_6 == '\n' || VAR_6 == 128)
  continue;
     VAR_6 |= VAR_2;
     break;

 default:
     break;
 }
 FUNC_10(VAR_6);
 VAR_10 = 1;
 if (FUNC_1(VAR_8) != 0)
     goto end;
    }

 end:
    FUNC_6(VAR_8);
    FUNC_8(VAR_8);
    VAR_11 = FUNC_4(VAR_8);
    FUNC_5(VAR_5, VAR_11);
    FUNC_12(VAR_8);
    return 1;
}

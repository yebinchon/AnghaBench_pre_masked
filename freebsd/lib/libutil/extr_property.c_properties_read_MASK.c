
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* properties ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*) ;

properties
FUNC_6(int VAR_3)
{
    properties VAR_4, VAR_5;
    char VAR_6[VAR_1 + 1];
    char VAR_7[VAR_2 + 1];
    char VAR_8[VAR_0 * 4];
    int VAR_9, VAR_10, VAR_11, VAR_12;
    enum { LOOK, COMMENT, NAME, VALUE, MVALUE, COMMIT, FILL, STOP } VAR_13, VAR_14;
    int VAR_15 = 0, VAR_16 = 0;

    VAR_10 = VAR_11 = VAR_9 = VAR_12 = 0;
    VAR_4 = VAR_5 = ((void*)0);
    VAR_13 = VAR_14 = LOOK;
    while (VAR_13 != STOP) {
 if (VAR_13 != COMMIT) {
     if (VAR_9 == VAR_12) {
  VAR_14 = VAR_13;
  VAR_13 = FILL;
     } else
  VAR_15 = VAR_8[VAR_9++];
 }
 switch(VAR_13) {
 case FILL:
     if ((VAR_12 = FUNC_4(VAR_3, VAR_8, sizeof VAR_8)) < 0) {
  FUNC_2(VAR_4);
  return (((void*)0));
     }
     if (VAR_12 == 0) {
  VAR_13 = STOP;
     } else {







  VAR_13 = VAR_14;
  VAR_15 = VAR_8[0];
  VAR_9 = 0;
     }
     continue;

 case LOOK:
     if (FUNC_1((unsigned char)VAR_15))
  continue;

     else if (VAR_15 == '#' || VAR_15 == ';') {
  VAR_13 = COMMENT;
  continue;
     }
     else if (FUNC_0((unsigned char)VAR_15) || VAR_15 == '_') {
  if (VAR_10 >= VAR_1) {
      VAR_10 = 0;
      VAR_13 = COMMENT;
  }
  else {
      VAR_6[VAR_10++] = VAR_15;
      VAR_13 = NAME;
  }
     }
     else
  VAR_13 = COMMENT;
     break;

 case COMMENT:
     if (VAR_15 == '\n')
  VAR_13 = LOOK;
     break;

 case NAME:
     if (VAR_15 == '\n' || !VAR_15) {
  VAR_6[VAR_10] = '\0';
  VAR_7[0] = '\0';
  VAR_11 = VAR_10 = 0;
  VAR_13 = COMMIT;
     }
     else if (FUNC_1((unsigned char)VAR_15))
  continue;
     else if (VAR_15 == '=') {
  VAR_6[VAR_10] = '\0';
  VAR_11 = VAR_10 = 0;
  VAR_13 = VALUE;
     }
     else
  VAR_6[VAR_10++] = VAR_15;
     break;

 case VALUE:
     if (VAR_11 == 0 && VAR_15 == '\n') {
         VAR_7[VAR_11] = '\0';
         VAR_11 = VAR_10 = 0;
         VAR_13 = COMMIT;
     }
     else if (VAR_11 == 0 && FUNC_1((unsigned char)VAR_15))
  continue;
     else if (VAR_15 == '{') {
  VAR_13 = MVALUE;
  ++VAR_16;
     }
     else if (VAR_15 == '\n' || !VAR_15) {
  VAR_7[VAR_11] = '\0';
  VAR_11 = VAR_10 = 0;
  VAR_13 = COMMIT;
     }
     else {
  if (VAR_11 >= VAR_2) {
      VAR_13 = COMMENT;
      VAR_11 = VAR_10 = 0;
      break;
  }
  else
      VAR_7[VAR_11++] = VAR_15;
     }
     break;

 case MVALUE:

     if (VAR_11 >= VAR_2) {
  FUNC_5("properties_read: value exceeds max length");
  VAR_13 = COMMENT;
  VAR_10 = VAR_11 = 0;
     }
     else if (VAR_15 == '}' && !--VAR_16) {
  VAR_7[VAR_11] = '\0';
  VAR_11 = VAR_10 = 0;
  VAR_13 = COMMIT;
     }
     else {
  VAR_7[VAR_11++] = VAR_15;
  if (VAR_15 == '{')
      ++VAR_16;
     }
     break;

 case COMMIT:
     if (VAR_4 == ((void*)0)) {
  if ((VAR_4 = VAR_5 = FUNC_3(VAR_6, VAR_7)) == ((void*)0))
      return (((void*)0));
     } else {
  if ((VAR_5->next = FUNC_3(VAR_6, VAR_7)) == ((void*)0)) {
      FUNC_2(VAR_4);
      return (((void*)0));
  }
  VAR_5 = VAR_5->next;
     }
     VAR_13 = LOOK;
     VAR_11 = VAR_10 = 0;
     break;

 case STOP:

     break;
 }
    }
    if (VAR_4 == ((void*)0) && (VAR_4 = FUNC_3(((void*)0), ((void*)0))) == ((void*)0))
 return (((void*)0));

    return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int dummy; } ;
struct buf {char* buf; int * next; scalar_t__ sz; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int,int *) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (struct roff*,struct buf*,int,int ,char) ;
 scalar_t__ FUNC_4 (char*) ;

char *
FUNC_5(struct roff *VAR_4, char **VAR_5, int VAR_6, int *VAR_7)
{
 struct buf VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;


 VAR_10 = *VAR_5;
 VAR_13 = 0;
 if ('"' == *VAR_10) {
  VAR_13 = 1;
  VAR_10++;
 }

 VAR_11 = VAR_12 = VAR_14 = 0;
 for (VAR_9 = VAR_10; '\0' != *VAR_9; VAR_9++) {





  if (VAR_12)
   VAR_9[-VAR_12] = VAR_9[0];

  if ('\\' == VAR_9[0]) {




   switch (VAR_9[1]) {
   case 'a':
   case 't':
    VAR_9[-VAR_12] = '\t';
    VAR_12++;
    VAR_9++;
    break;
   case '\\':
    VAR_11 = 1;
    VAR_9[-VAR_12] = VAR_0;
    VAR_12++;
    VAR_9++;
    break;
   case ' ':

    if (0 == VAR_13)
     VAR_9++;
    break;
   default:
    break;
   }
  } else if (0 == VAR_13) {
   if (' ' == VAR_9[0]) {

    VAR_14 = 1;
    break;
   }
  } else if ('"' == VAR_9[0]) {
   if ('"' == VAR_9[1]) {

    VAR_12++;
    VAR_9++;
   } else {

    VAR_13 = 2;
    break;
   }
  }
 }


 if (1 == VAR_13)
  FUNC_1(VAR_1, VAR_6, *VAR_7, ((void*)0));


 if (VAR_12)
  VAR_9[-VAR_12] = '\0';
 if ('\0' != *VAR_9) {
  *VAR_9++ = '\0';
  while (' ' == *VAR_9)
   VAR_9++;
 }
 *VAR_7 += (int)(VAR_9 - VAR_10) + (VAR_13 ? 1 : 0);
 *VAR_5 = VAR_9;

 if ('\0' == *VAR_9 && (VAR_14 || ' ' == VAR_9[-1]))
  FUNC_1(VAR_2, VAR_6, *VAR_7, ((void*)0));

 VAR_10 = FUNC_2(VAR_10);
 if (VAR_11 == 0)
  return VAR_10;

 VAR_8.buf = VAR_10;
 VAR_8.sz = FUNC_4(VAR_10) + 1;
 VAR_8.next = ((void*)0);
 if (FUNC_3(VAR_4, &VAR_8, VAR_6, 0, VAR_0) & VAR_3) {
  FUNC_0(VAR_8.buf);
  VAR_8.buf = FUNC_2("");
 }
 return VAR_8.buf;
}

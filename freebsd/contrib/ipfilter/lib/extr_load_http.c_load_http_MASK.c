
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_4__ {struct TYPE_4__* al_next; } ;
typedef TYPE_1__ alist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (char*,size_t,char*,char*) ;
 int VAR_3 ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,char*,int) ;

alist_t *
FUNC_14(char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 char *VAR_12, *VAR_13, *VAR_14, VAR_15[VAR_1], *VAR_16;
 alist_t *VAR_17, *VAR_18, *VAR_19;
 size_t VAR_20;
 int VAR_21;




 if (FUNC_12(VAR_4) > VAR_2) {
  FUNC_5(VAR_3, "load_http has a URL > %d bytes?!\n",
   VAR_2);
  return ((void*)0);
 }

 VAR_5 = -1;
 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);

 VAR_20 = sizeof(VAR_15);
 VAR_21 = FUNC_9(VAR_15, VAR_20, "GET %s HTTP/1.0\r\n", VAR_4);





 VAR_20 -= VAR_21;

 VAR_16 = FUNC_11(VAR_4);
 if (VAR_16 == ((void*)0))
  goto done;

 VAR_12 = VAR_16 + 7;
 VAR_13 = FUNC_10(VAR_12, '/');
 if (VAR_13 == ((void*)0)) {
  FUNC_5(VAR_3, "load_http has a malformed URL '%s'\n", VAR_4);
  FUNC_6(VAR_16);
  return ((void*)0);
 }
 *VAR_13++ = '\0';




 if (FUNC_12(VAR_12) + FUNC_12(VAR_15) + 10 > sizeof(VAR_15)) {
  FUNC_5(VAR_3, "load_http has a malformed URL '%s'\n", VAR_4);
  FUNC_6(VAR_16);
  return ((void*)0);
 }

 VAR_14 = FUNC_10(VAR_12, '@');
 if (VAR_14 != ((void*)0))
  VAR_12 = VAR_14 + 1;

 VAR_21 = FUNC_9(VAR_15 + FUNC_12(VAR_15), VAR_20, "Host: %s\r\n\r\n", VAR_12);
 if (VAR_21 >= VAR_20) {
  FUNC_5(VAR_3, "URL is too large: %s\n", VAR_4);
  goto done;
 }

 VAR_14 = FUNC_10(VAR_12, ':');
 if (VAR_14 != ((void*)0)) {
  *VAR_14++ = '\0';
  VAR_8 = FUNC_2(VAR_14);
  if (VAR_8 < 0 || VAR_8 > 65535)
   goto done;
 } else {
  VAR_8 = 80;
 }


 VAR_5 = FUNC_4(VAR_12, VAR_8);
 if (VAR_5 == -1)
  goto done;


 VAR_6 = FUNC_12(VAR_15);
 if (FUNC_13(VAR_5, VAR_15, VAR_6) != VAR_6)
  goto done;

 VAR_12 = VAR_15;
 VAR_9 = 0;
 VAR_7 = sizeof(VAR_15) - 1;

 while ((VAR_6 = FUNC_8(VAR_5, VAR_12, VAR_7)) > 0) {
  VAR_12[VAR_6] = '\0';
  VAR_7 -= VAR_6;
  VAR_12 += VAR_6;

  if (VAR_9 >= 0) {
   if (VAR_9 == 0) {
    VAR_13 = FUNC_10(VAR_15, ' ');
    if (VAR_13 == ((void*)0))
     continue;
    VAR_13++;
    if (*VAR_13 != '2')
     break;
   }

   VAR_14 = VAR_15;
   while ((VAR_13 = FUNC_10(VAR_14, '\r')) != ((void*)0)) {
    if (VAR_13 == VAR_14) {
     if (*(VAR_13 + 1) == '\n') {
      VAR_14 = VAR_13 + 2;
      VAR_9 = -1;
      break;
     } else
      VAR_13++;
    } else if (*(VAR_13 + 1) == '\n') {
     VAR_9++;
     VAR_14 = VAR_13 + 2;
    } else
     VAR_14 = VAR_13 + 1;
   }
   if (VAR_9 >= 0)
    continue;
   VAR_10 = (VAR_14 - VAR_15) + 1;
   FUNC_7(VAR_15, VAR_14, (sizeof(VAR_15) - VAR_7) - VAR_10);
   VAR_12 -= VAR_10;
   VAR_7 += VAR_10;
  }

  do {
   VAR_13 = FUNC_10(VAR_15, '\n');
   if (VAR_13 == ((void*)0))
    break;

   VAR_11++;
   *VAR_13 = '\0';





   VAR_14 = FUNC_10(VAR_15, '#');
   if (VAR_14 != ((void*)0)) {
    *VAR_14 = '\0';
    if (VAR_14 == VAR_15)
     continue;
   }




   for (VAR_14 = VAR_13 - 1; (VAR_14 >= VAR_15) && FUNC_0(*VAR_14); VAR_14--)
    *VAR_14 = '\0';

   VAR_17 = FUNC_1(VAR_0, VAR_15);
   if (VAR_17 != ((void*)0)) {
    if (VAR_19 != ((void*)0))
     VAR_19->al_next = VAR_17;
    else
     VAR_18 = VAR_17;
    VAR_19 = VAR_17;
   } else {
    FUNC_5(VAR_3,
     "%s:%d unrecognised content:%s\n",
     VAR_4, VAR_11, VAR_15);
   }

   VAR_13++;
   VAR_10 = VAR_13 - VAR_15;
   FUNC_7(VAR_15, VAR_13, sizeof(VAR_15) - VAR_7 - VAR_10);
   VAR_12 -= VAR_10;
   VAR_7 += VAR_10;

  } while (1);
 }

done:
 if (VAR_16 != ((void*)0))
  FUNC_6(VAR_16);
 if (VAR_5 != -1)
  FUNC_3(VAR_5);
 return VAR_18;
}

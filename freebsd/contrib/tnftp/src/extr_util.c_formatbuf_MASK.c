
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;

void
FUNC_1(char *VAR_4, size_t VAR_5, const char *VAR_6)
{
 const char *VAR_7, *VAR_8, *VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12, VAR_13;







 VAR_7 = VAR_6;
 for (VAR_10 = 0; *VAR_7; VAR_7++) {
  if (*VAR_7 != '%') {
   do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = (*VAR_7); } while (0);
   continue;
  }
  VAR_7++;

  switch (VAR_11 = *VAR_7) {

  case '/':
  case '.':
  case 'c':
   VAR_8 = VAR_0 ? VAR_2 : "";
   VAR_12 = VAR_13 = 0;


   if (VAR_11 == '.' || VAR_11 == 'c') {
    int VAR_14;

    VAR_9 = VAR_8;
    while (*VAR_8)
     if (*VAR_8++ == '/')
      VAR_12++;
    if (VAR_7[1] == '0') {
     VAR_13 = 1;
     VAR_7++;
    }
    if (VAR_7[1] >= '1' && VAR_7[1] <= '9') {

     VAR_14 = VAR_7[1] - '0';
     VAR_7++;
    } else
     VAR_14 = 1;

    VAR_12 -= VAR_14;
    while (VAR_14-- > 0) {
     while ((VAR_8 > VAR_9) && (*VAR_8 != '/'))
      VAR_8--;
     if (VAR_14 && VAR_8 > VAR_9)
      VAR_8--;
    }
    if (*VAR_8 == '/' && VAR_8 != VAR_9)
     VAR_8++;
   }

   if (VAR_12 > 0 && VAR_13) {
    if (VAR_10 >= VAR_5 - 5)
     break;
    if (VAR_11 == '.') {
     do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('.'); } while (0);
     do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('.'); } while (0);
     do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('.'); } while (0);
    } else {
     do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('/'); } while (0);
     do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('<'); } while (0);
     if (VAR_12 > 9) {
      do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('9'); } while (0);
      do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('+'); } while (0);
     } else
      do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('0' + VAR_12); } while (0);
     do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('>'); } while (0);
    }
   }
   for (; *VAR_8; VAR_8++)
    do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = (*VAR_8); } while (0);
   break;

  case 'M':
  case 'm':
   for (VAR_8 = VAR_0 && VAR_1 ? VAR_1 : "-";
       *VAR_8 ; VAR_8++) {
    if (VAR_11 == 'm' && *VAR_8 == '.')
     break;
    do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = (*VAR_8); } while (0);
   }
   break;

  case 'n':
   for (VAR_8 = VAR_0 ? VAR_3 : "-"; *VAR_8 ; VAR_8++)
    do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = (*VAR_8); } while (0);
   break;

  case '%':
   do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('%'); } while (0);
   break;

  default:
   do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = ('%'); } while (0);
   do { if (VAR_10 >= VAR_5 - 1) goto endbuf; VAR_4[VAR_10++] = (VAR_11); } while (0);
   break;

  }
 }
 endbuf:
 VAR_4[VAR_10] = '\0';
}

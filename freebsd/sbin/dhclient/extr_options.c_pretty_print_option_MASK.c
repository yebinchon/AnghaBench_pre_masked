
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
typedef int optbuf ;
struct TYPE_2__ {char* format; int name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (struct in_addr) ;
 int FUNC_7 (unsigned char) ;
 int FUNC_8 (unsigned char) ;
 int FUNC_9 (char*,int,char*,char) ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;

const char *
FUNC_13(unsigned int VAR_1, unsigned char *VAR_2, int VAR_3,
    int VAR_4, int VAR_5)
{
 static char VAR_6[32768];
 int VAR_7 = 0, VAR_8 = -1, VAR_9 = 0;
 char VAR_10[32], *VAR_11 = VAR_6;
 int VAR_12, VAR_13, VAR_14, VAR_15 = sizeof(VAR_6);
 unsigned char *VAR_16 = VAR_2;
 struct in_addr VAR_17;
 char VAR_18;


 if (VAR_1 > 255)
  FUNC_0("pretty_print_option: bad code %d", VAR_1);

 if (VAR_4)
  VAR_18 = ',';
 else
  VAR_18 = ' ';


 for (VAR_12 = 0; VAR_0[VAR_1].format[VAR_12]; VAR_12++) {
  if (!VAR_8) {
   FUNC_12("%s: Excess information in format string: %s",
       VAR_0[VAR_1].name,
       &(VAR_0[VAR_1].format[VAR_12]));
   break;
  }
  VAR_9++;
  VAR_10[VAR_12] = VAR_0[VAR_1].format[VAR_12];
  switch (VAR_0[VAR_1].format[VAR_12]) {
  case 'A':
   --VAR_9;
   VAR_10[VAR_12] = 0;
   VAR_8 = 0;
   break;
  case 'X':
   for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
    if (!FUNC_7(VAR_2[VAR_14]) ||
        !FUNC_8(VAR_2[VAR_14]))
     break;
   if (VAR_14 == VAR_3) {
    VAR_10[VAR_12] = 't';
    VAR_8 = -2;
   } else {
    VAR_10[VAR_12] = 'x';
    VAR_7++;
    VAR_18 = ':';
    VAR_8 = 0;
   }
   VAR_10[VAR_12 + 1] = 0;
   break;
  case 't':
   VAR_10[VAR_12] = 't';
   VAR_10[VAR_12 + 1] = 0;
   VAR_8 = -2;
   break;
  case 'I':
  case 'l':
  case 'L':
   VAR_7 += 4;
   break;
  case 's':
  case 'S':
   VAR_7 += 2;
   break;
  case 'b':
  case 'B':
  case 'f':
   VAR_7++;
   break;
  case 'e':
   break;
  default:
   FUNC_12("%s: garbage in format string: %s",
       VAR_0[VAR_1].name,
       &(VAR_0[VAR_1].format[VAR_12]));
   break;
  }
 }


 if (VAR_7 > VAR_3) {
  FUNC_12("%s: expecting at least %d bytes; got %d",
      VAR_0[VAR_1].name, VAR_7, VAR_3);
  return ("<error>");
 }

 if (VAR_8 == -1 && VAR_7 < VAR_3)
  FUNC_12("%s: %d extra bytes",
      VAR_0[VAR_1].name, VAR_3 - VAR_7);


 if (!VAR_8)
  VAR_8 = VAR_3 / VAR_7;

 if (VAR_8 > 0 && VAR_8 * VAR_7 < VAR_3)
  FUNC_12("%s: %d extra bytes at end of array",
      VAR_0[VAR_1].name, VAR_3 - VAR_8 * VAR_7);


 if (VAR_8 < 0)
  VAR_8 = 1;


 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
   int VAR_19;
   switch (VAR_10[VAR_13]) {
   case 't':
    if (VAR_5) {
     *VAR_11++ = '"';
     VAR_15--;
    }
    for (; VAR_16 < VAR_2 + VAR_3; VAR_16++) {
     if (!FUNC_7(*VAR_16) ||
         !FUNC_8(*VAR_16)) {
      if (VAR_16 + 1 != VAR_2 + VAR_3 ||
          *VAR_16 != 0) {
       FUNC_9(VAR_11, VAR_15,
           "\\%03o", *VAR_16);
       VAR_11 += 4;
       VAR_15 -= 4;
      }
     } else if (*VAR_16 == '"' ||
         *VAR_16 == '\'' ||
         *VAR_16 == '$' ||
         *VAR_16 == '`' ||
         *VAR_16 == '\\') {
      *VAR_11++ = '\\';
      *VAR_11++ = *VAR_16;
      VAR_15 -= 2;
     } else {
      *VAR_11++ = *VAR_16;
      VAR_15--;
     }
    }
    if (VAR_5) {
     *VAR_11++ = '"';
     VAR_15--;
    }

    *VAR_11 = 0;
    break;
   case 'I':
    VAR_17.s_addr = FUNC_5(FUNC_3(VAR_16));
    VAR_19 = FUNC_10(VAR_11, FUNC_6(VAR_17), VAR_15);
    if (VAR_19 >= VAR_15)
     goto toobig;
    VAR_15 -= VAR_19;
    VAR_16 += 4;
    break;
   case 'l':
    VAR_19 = FUNC_9(VAR_11, VAR_15, "%ld",
        (long)FUNC_1(VAR_16));
    if (VAR_19 >= VAR_15 || VAR_19 == -1)
     goto toobig;
    VAR_15 -= VAR_19;
    VAR_16 += 4;
    break;
   case 'L':
    VAR_19 = FUNC_9(VAR_11, VAR_15, "%lu",
        (unsigned long)FUNC_3(VAR_16));
    if (VAR_19 >= VAR_15 || VAR_19 == -1)
     goto toobig;
    VAR_15 -= VAR_19;
    VAR_16 += 4;
    break;
   case 's':
    VAR_19 = FUNC_9(VAR_11, VAR_15, "%d",
        FUNC_2(VAR_16));
    if (VAR_19 >= VAR_15 || VAR_19 == -1)
     goto toobig;
    VAR_15 -= VAR_19;
    VAR_16 += 2;
    break;
   case 'S':
    VAR_19 = FUNC_9(VAR_11, VAR_15, "%u",
        FUNC_4(VAR_16));
    if (VAR_19 >= VAR_15 || VAR_19 == -1)
     goto toobig;
    VAR_15 -= VAR_19;
    VAR_16 += 2;
    break;
   case 'b':
    VAR_19 = FUNC_9(VAR_11, VAR_15, "%d",
        *(char *)VAR_16++);
    if (VAR_19 >= VAR_15 || VAR_19 == -1)
     goto toobig;
    VAR_15 -= VAR_19;
    break;
   case 'B':
    VAR_19 = FUNC_9(VAR_11, VAR_15, "%d", *VAR_16++);
    if (VAR_19 >= VAR_15 || VAR_19 == -1)
     goto toobig;
    VAR_15 -= VAR_19;
    break;
   case 'x':
    VAR_19 = FUNC_9(VAR_11, VAR_15, "%x", *VAR_16++);
    if (VAR_19 >= VAR_15 || VAR_19 == -1)
     goto toobig;
    VAR_15 -= VAR_19;
    break;
   case 'f':
    VAR_19 = FUNC_10(VAR_11,
        *VAR_16++ ? "true" : "false", VAR_15);
    if (VAR_19 >= VAR_15)
     goto toobig;
    VAR_15 -= VAR_19;
    break;
   default:
    FUNC_12("Unexpected format code %c", VAR_10[VAR_13]);
   }
   VAR_11 += FUNC_11(VAR_11);
   VAR_15 -= FUNC_11(VAR_11);
   if (VAR_15 < 1)
    goto toobig;
   if (VAR_13 + 1 < VAR_9 && VAR_18 != ':') {
    *VAR_11++ = ' ';
    VAR_15--;
   }
  }
  if (VAR_12 + 1 < VAR_8) {
   *VAR_11++ = VAR_18;
   VAR_15--;
  }
  if (VAR_15 < 1)
   goto toobig;

 }
 return (VAR_6);
 toobig:
 FUNC_12("dhcp option too large");
 return ("<error>");
}

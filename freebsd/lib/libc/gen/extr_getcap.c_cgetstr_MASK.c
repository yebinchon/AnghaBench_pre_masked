
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (char*,char const*,char) ;
 int VAR_3 ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,size_t) ;

int
FUNC_3(char *VAR_4, const char *VAR_5, char **VAR_6)
{
 u_int VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10;
 char *VAR_11;




 VAR_8 = FUNC_0(VAR_4, VAR_5, '=');
 if (VAR_8 == ((void*)0))
  return (-1);





 if ((VAR_11 = FUNC_1(VAR_2)) == ((void*)0)) {
  VAR_3 = VAR_0;
  return (-2);
 }
 VAR_7 = VAR_2;
 VAR_9 = VAR_11;

 while (*VAR_8 != ':' && *VAR_8 != '\0') {






  if (*VAR_8 == '^') {
   VAR_8++;
   if (*VAR_8 == ':' || *VAR_8 == '\0')
    break;
   if (*VAR_8 == '?') {
    *VAR_9++ = '\177';
    VAR_8++;
   } else
    *VAR_9++ = *VAR_8++ & 037;
  } else if (*VAR_8 == '\\') {
   VAR_8++;
   if (*VAR_8 == ':' || *VAR_8 == '\0')
    break;
   if ('0' <= *VAR_8 && *VAR_8 <= '7') {
    int VAR_12, VAR_13;

    VAR_12 = 0;
    VAR_13 = 3;
    do {
     VAR_12 = VAR_12 * 8 + (*VAR_8++ - '0');
    } while (--VAR_13 && '0' <= *VAR_8 && *VAR_8 <= '7');
    *VAR_9++ = VAR_12;
   }
   else switch (*VAR_8++) {
    case 'b': case 'B':
     *VAR_9++ = '\b';
     break;
    case 't': case 'T':
     *VAR_9++ = '\t';
     break;
    case 'n': case 'N':
     *VAR_9++ = '\n';
     break;
    case 'f': case 'F':
     *VAR_9++ = '\f';
     break;
    case 'r': case 'R':
     *VAR_9++ = '\r';
     break;
    case 'e': case 'E':
     *VAR_9++ = VAR_1;
     break;
    case 'c': case 'C':
     *VAR_9++ = ':';
     break;
    default:




     *VAR_9++ = *(VAR_8-1);
     break;
   }
  } else
   *VAR_9++ = *VAR_8++;
  VAR_7--;





  if (VAR_7 == 0) {
   size_t VAR_14 = VAR_9 - VAR_11;

   if ((VAR_11 = FUNC_2(VAR_11, VAR_14 + VAR_2)) == ((void*)0))
    return (-2);
   VAR_7 = VAR_2;
   VAR_9 = VAR_11 + VAR_14;
  }
 }
 *VAR_9++ = '\0';
 VAR_7--;
 VAR_10 = VAR_9 - VAR_11 - 1;




 if (VAR_7 != 0)
  if ((VAR_11 = FUNC_2(VAR_11, (size_t)(VAR_9 - VAR_11))) == ((void*)0))
   return (-2);
 *VAR_6 = VAR_11;
 return (VAR_10);
}

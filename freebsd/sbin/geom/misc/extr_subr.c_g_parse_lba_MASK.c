
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char**,int ) ;

int
FUNC_2(const char *VAR_3, unsigned int VAR_4, off_t *VAR_5)
{
 off_t VAR_6, VAR_7, VAR_8;
 char *VAR_9;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 > 0);
 FUNC_0(VAR_5 != ((void*)0));

 VAR_6 = (off_t)FUNC_1(VAR_3, &VAR_9, 0);
 if (VAR_9 == VAR_3 || VAR_6 < 0)
  return (VAR_0);

 VAR_7 = 1;
 VAR_8 = VAR_4;
 if (*VAR_9 == '\0')
  goto done;
 switch (*VAR_9) {
 case 'e': case 'E':
  VAR_7 *= 1024;

 case 'p': case 'P':
  VAR_7 *= 1024;

 case 't': case 'T':
  VAR_7 *= 1024;

 case 'g': case 'G':
  VAR_7 *= 1024;

 case 'm': case 'M':
  VAR_7 *= 1024;

 case 'k': case 'K':
  VAR_7 *= 1024;
  break;
 default:
  goto sfx;
 }
 VAR_8 = 1;
 VAR_9++;
 if (*VAR_9 == '\0')
  goto done;
sfx:
 switch (*VAR_9) {
 case 's': case 'S':
  VAR_8 = VAR_4;
  break;
 case 'b': case 'B':
  VAR_8 = 1;
  break;
 default:
  return (VAR_0);
 }
 VAR_9++;
 if (*VAR_9 != '\0')
  return (VAR_0);
done:
 if ((VAR_2 / VAR_8) < VAR_7 || (VAR_2 / VAR_7 / VAR_8) < VAR_6)
  return (VAR_1);
 VAR_6 *= VAR_7 * VAR_8;
 if (VAR_6 % VAR_4)
  return (VAR_0);
 VAR_6 /= VAR_4;
 *VAR_5 = VAR_6;
 return (0);
}

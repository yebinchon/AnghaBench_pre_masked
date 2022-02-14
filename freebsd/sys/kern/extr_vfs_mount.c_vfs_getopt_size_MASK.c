
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
typedef scalar_t__ quad_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char**,int ) ;
 int FUNC_1 (struct vfsoptlist*,char const*,void**,int*) ;

int
FUNC_2(struct vfsoptlist *VAR_1, const char *VAR_2, off_t *VAR_3)
{
 char *VAR_4, *VAR_5;
 quad_t VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_1, VAR_2, (void **)&VAR_4, &VAR_8);
 if (VAR_7 != 0)
  return (VAR_7);
 if (VAR_8 == 0 || VAR_4 == ((void*)0))
  return (VAR_0);
 if (VAR_4[0] == '\0' || VAR_4[VAR_8 - 1] != '\0')
  return (VAR_0);
 VAR_6 = FUNC_0(VAR_4, &VAR_5, 0);
 if (VAR_5 == VAR_4 || (VAR_5[0] != '\0' && VAR_5[1] != '\0'))
  return (VAR_0);
 if (VAR_6 < 0)
  return (VAR_0);
 switch (VAR_5[0]) {
 case 't': case 'T':
  VAR_6 *= 1024;

 case 'g': case 'G':
  VAR_6 *= 1024;

 case 'm': case 'M':
  VAR_6 *= 1024;

 case 'k': case 'K':
  VAR_6 *= 1024;
 case '\0':
  break;
 default:
  return (VAR_0);
 }
 *VAR_3 = VAR_6;

 return (0);
}

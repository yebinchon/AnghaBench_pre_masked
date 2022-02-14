
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct tm {int tm_gmtoff; } ;


 int FUNC_0 (int,char*,char const*,char const*,long,long) ;
 int FUNC_1 (struct tm*,int ,int) ;
 int FUNC_2 (char*,char const*,char const*,long) ;
 char* FUNC_3 (char const*,char const*,struct tm*) ;
 long VAR_0 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2, long VAR_3)
{
 struct tm VAR_4;
 char *VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 if ((VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_4)) == ((void*)0))
  VAR_4.tm_gmtoff = -1;
 else if (VAR_5 == VAR_1 && VAR_2[1] == 'Z')
  VAR_3 = 0;

 switch (VAR_3) {

 case -2:
  VAR_3 = -VAR_0;
  break;

 case -1:
  if (VAR_2[1] == 'Z')
   VAR_3 = 0;
  break;
 default:
  break;
 }

 FUNC_0(VAR_4.tm_gmtoff == VAR_3,
     "strptime(\"%s\", \"%s\", &tm): "
     "expected: tm.tm_gmtoff=%ld, got: tm.tm_gmtoff=%ld",
     VAR_1, VAR_2, VAR_3, VAR_4.tm_gmtoff);
 FUNC_2("%s %s %ld\n", VAR_1, VAR_2, VAR_4.tm_gmtoff);
}

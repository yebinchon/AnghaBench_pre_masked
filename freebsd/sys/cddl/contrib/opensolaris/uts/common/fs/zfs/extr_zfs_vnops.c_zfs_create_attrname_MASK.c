
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;


 char* VAR_2 ;

 char* VAR_3 ;
 int FUNC_0 (char*,size_t) ;
 size_t FUNC_1 (char*,size_t,char*,char const*,char const*,char const*,char const*) ;
 int * FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, const char *VAR_5, char *VAR_6,
    size_t VAR_7)
{
 const char *VAR_8, *VAR_9, *VAR_10;


 if (FUNC_2(VAR_5, '/') != ((void*)0))
  return (VAR_0);

 if (FUNC_3(VAR_5, "freebsd:", 8) == 0)
  return (VAR_0);

 FUNC_0(VAR_6, VAR_7);

 switch (VAR_4) {
 case 128:
  VAR_9 = VAR_8 = VAR_10 = "";

  break;
 case 129:
  VAR_9 = "freebsd:";
  VAR_8 = VAR_2;
  VAR_10 = ":";
  break;
 case 130:
 default:
  return (VAR_0);
 }
 if (FUNC_1(VAR_6, VAR_7, "%s%s%s%s", VAR_9, VAR_8, VAR_10,
     VAR_5) >= VAR_7) {
  return (VAR_1);
 }
 return (0);
}

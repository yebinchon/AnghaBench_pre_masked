
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mparse {int gzip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char const*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*,char) ;

int
FUNC_5(struct mparse *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_4(VAR_3, '.');
 VAR_2->gzip = (VAR_4 != ((void*)0) && ! FUNC_3(VAR_4 + 1, "gz"));



 if ((VAR_5 = FUNC_2(VAR_3, VAR_0)) != -1)
  return VAR_5;






 if ( ! VAR_2->gzip) {
  VAR_6 = VAR_1;
  FUNC_1(&VAR_4, "%s.gz", VAR_3);
  VAR_5 = FUNC_2(VAR_4, VAR_0);
  FUNC_0(VAR_4);
  VAR_1 = VAR_6;
  if (VAR_5 != -1) {
   VAR_2->gzip = 1;
   return VAR_5;
  }
 }



 return -1;
}

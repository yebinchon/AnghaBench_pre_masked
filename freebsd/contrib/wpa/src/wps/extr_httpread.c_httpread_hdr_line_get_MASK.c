
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpread {char* hdr; } ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

char * FUNC_3(struct httpread *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 char *VAR_3 = VAR_0->hdr;
 VAR_3 = FUNC_0(VAR_3, '\n');
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3++;
 for (;;) {
  if (!FUNC_2(VAR_3, VAR_1, VAR_2)) {
   VAR_3 += VAR_2;
   while (*VAR_3 == ' ' || *VAR_3 == '\t')
    VAR_3++;
   return VAR_3;
  }
  VAR_3 = FUNC_0(VAR_3, '\n');
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  VAR_3++;
 }
}

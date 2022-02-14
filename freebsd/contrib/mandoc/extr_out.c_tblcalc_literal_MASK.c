
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_dat {char* string; } ;
struct rofftbl {size_t (* slen ) (char const*,int ) ;int arg; } ;
struct roffcol {size_t width; } ;


 int FUNC_0 (void*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*,int ) ;

__attribute__((used)) static size_t
FUNC_4(struct rofftbl *VAR_0, struct roffcol *VAR_1,
    const struct tbl_dat *VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 const char *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 if (VAR_2->string == ((void*)0) || *VAR_2->string == '\0')
  return 0;
 VAR_4 = VAR_3 ? FUNC_1(VAR_2->string) : VAR_2->string;
 VAR_9 = VAR_7 = 0;
 for (VAR_5 = VAR_4; VAR_5 != ((void*)0) && *VAR_5 != '\0'; VAR_5 = VAR_6) {
  VAR_6 = VAR_3 ? FUNC_2(VAR_5, ' ') : ((void*)0);
  if (VAR_6 != ((void*)0)) {
   *VAR_6++ = '\0';
   while (*VAR_6 == ' ')
    VAR_6++;
  }
  VAR_8 = (*VAR_0->slen)(VAR_5, VAR_0->arg);
  if (VAR_3 && VAR_7 && VAR_7 + 1 + VAR_8 <= VAR_3)
   VAR_7 += 1 + VAR_8;
  else
   VAR_7 = VAR_8;
  if (VAR_9 < VAR_7)
   VAR_9 = VAR_7;
 }
 if (VAR_3)
  FUNC_0((void *)VAR_4);
 if (VAR_1 != ((void*)0) && VAR_1->width < VAR_9)
  VAR_1->width = VAR_9;
 return VAR_9;
}

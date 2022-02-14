
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_opts {char const decimal; } ;
struct tbl_dat {char* string; } ;
struct rofftbl {size_t (* slen ) (char*,int ) ;int arg; } ;
struct roffcol {size_t width; size_t decimal; size_t nwidth; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 size_t FUNC_1 (char*,int ) ;
 size_t FUNC_2 (char*,int ) ;

__attribute__((used)) static size_t
FUNC_3(struct rofftbl *VAR_0, struct roffcol *VAR_1,
  const struct tbl_opts *VAR_2, const struct tbl_dat *VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;
 char VAR_9[2];

 if (VAR_3->string == ((void*)0) || *VAR_3->string == '\0')
  return 0;

 VAR_8 = (*VAR_0->slen)(VAR_3->string, VAR_0->arg);
 if (VAR_1 == ((void*)0))
  return VAR_8;







 VAR_5 = VAR_6 = ((void*)0);
 for (VAR_4 = VAR_3->string; VAR_4[0] != '\0'; VAR_4++) {
  if (VAR_4[0] == '\\' && VAR_4[1] == '&') {
   VAR_5 = VAR_6 = VAR_4;
   break;
  } else if (VAR_4[0] == VAR_2->decimal &&
      (FUNC_0((unsigned char)VAR_4[1]) ||
       (VAR_4 > VAR_3->string && FUNC_0((unsigned char)VAR_4[-1]))))
   VAR_6 = VAR_4;
  else if (FUNC_0((unsigned char)VAR_4[0]))
   VAR_5 = VAR_4;
 }



 if (VAR_5 == ((void*)0)) {
  if (VAR_1 != ((void*)0) && VAR_1->width < VAR_8)
   VAR_1->width = VAR_8;
  return VAR_8;
 }



 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_5 + 1;
 VAR_7 = 0;
 VAR_9[1] = '\0';
 for (VAR_4 = VAR_3->string; VAR_4 < VAR_6; VAR_4++) {
  VAR_9[0] = VAR_4[0];
  VAR_7 += (*VAR_0->slen)(VAR_9, VAR_0->arg);
 }







 if (VAR_7 > VAR_1->decimal) {
  VAR_1->nwidth += VAR_7 - VAR_1->decimal;
  VAR_1->decimal = VAR_7;
 } else
  VAR_8 += VAR_1->decimal - VAR_7;



 if (VAR_8 > VAR_1->nwidth)
  VAR_1->nwidth = VAR_8;
 return VAR_8;
}

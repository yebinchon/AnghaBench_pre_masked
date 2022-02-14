
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int dummy; } ;
struct tbl_opts {char const decimal; } ;
struct tbl_dat {char* string; } ;
struct roffcol {size_t decimal; size_t width; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (struct termp*,int ,size_t) ;
 int FUNC_3 (struct termp*,struct tbl_dat const*) ;
 size_t FUNC_4 (struct termp*,char*) ;

__attribute__((used)) static void
FUNC_5(struct termp *VAR_1, const struct tbl_opts *VAR_2,
  const struct tbl_dat *VAR_3,
  const struct roffcol *VAR_4)
{
 const char *VAR_5, *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9, VAR_10;
 char VAR_11[2];






 FUNC_0(VAR_3->string);
 VAR_6 = VAR_7 = ((void*)0);
 for (VAR_5 = VAR_3->string; VAR_5[0] != '\0'; VAR_5++) {
  if (VAR_5[0] == '\\' && VAR_5[1] == '&') {
   VAR_6 = VAR_7 = VAR_5;
   break;
  } else if (VAR_5[0] == VAR_2->decimal &&
      (FUNC_1((unsigned char)VAR_5[1]) ||
       (VAR_5 > VAR_3->string && FUNC_1((unsigned char)VAR_5[-1]))))
   VAR_7 = VAR_5;
  else if (FUNC_1((unsigned char)VAR_5[0]))
   VAR_6 = VAR_5;
 }



 VAR_9 = 0;
 VAR_10 = FUNC_4(VAR_1, VAR_3->string);
 if (VAR_6 != ((void*)0)) {
  if (VAR_7 == ((void*)0))
   VAR_7 = VAR_6 + 1;
  VAR_8 = 0;
  VAR_11[1] = '\0';
  for (VAR_5 = VAR_3->string; VAR_5 < VAR_7; VAR_5++) {
   VAR_11[0] = VAR_5[0];
   VAR_8 += FUNC_4(VAR_1, VAR_11);
  }






  if (VAR_4->decimal > VAR_8 && VAR_4->width > VAR_10) {
   VAR_9 = VAR_4->decimal - VAR_8;
   if (VAR_9 + VAR_10 > VAR_4->width)
    VAR_9 = VAR_4->width - VAR_10;
  }



 } else if (VAR_4->width > VAR_10)
  VAR_9 = (VAR_4->width - VAR_10) / 2;

 FUNC_2(VAR_1, VAR_0, VAR_9);
 FUNC_3(VAR_1, VAR_3);



 if (VAR_4->width > VAR_9 + VAR_10)
  FUNC_2(VAR_1, VAR_0, VAR_4->width - VAR_9 - VAR_10);
}

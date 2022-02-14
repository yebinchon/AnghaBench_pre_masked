
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {char* s; size_t len; } ;
typedef int eChar ;
typedef char Char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 struct Strbuf VAR_1 ;
 int FUNC_1 (struct Strbuf*,char*) ;
 int FUNC_2 (struct Strbuf*,char const) ;
 int VAR_2 ;
 int FUNC_3 (struct Strbuf*) ;
 int VAR_3 ;
 int FUNC_4 (struct Strbuf*) ;
 int FUNC_5 (struct Strbuf*,int ) ;
 int FUNC_6 (struct Strbuf*) ;
 int FUNC_7 (struct Strbuf*,int ,int,int,char*,int ) ;
 int FUNC_8 (char*) ;

int
FUNC_9(struct Strbuf *VAR_4, int VAR_5, Char *VAR_6, eChar VAR_7)
{
    struct Strbuf VAR_8 = VAR_1, VAR_9 = VAR_1;
    const Char *VAR_10 = VAR_4->s;
    size_t VAR_11;
    int VAR_12 = 0;
    int VAR_13;

    FUNC_5(&VAR_8, VAR_2);
    FUNC_5(&VAR_9, VAR_2);
    for (;;) {
 while (*VAR_10 == '/') {
     FUNC_2(&VAR_9, *VAR_10++);
     VAR_12 = 1;
 }

 if (*VAR_10 != '\0' && VAR_10[1] == '\0')
     FUNC_2(&VAR_9, *VAR_10++);
 FUNC_3(&VAR_9);
 if (*VAR_10 == '\0') {
     VAR_13 = (FUNC_0(VAR_4->s, VAR_9.s) != 0);
     FUNC_4(&VAR_9);
     FUNC_8(VAR_4->s);
     *VAR_4 = VAR_9;
     FUNC_6(&VAR_8);
     return VAR_13;
 }
 VAR_8.len = 0;
 FUNC_1(&VAR_8, VAR_9.s);
 VAR_11 = VAR_8.len;
 for (; *VAR_10 != '/' && *VAR_10 != '\0'; VAR_10++)
     FUNC_2(&VAR_8, *VAR_10);
 FUNC_3(&VAR_8);






 VAR_13 = FUNC_7(&VAR_8, VAR_0,
     VAR_5 == VAR_3 && (VAR_12 || *VAR_10 != '/') ?
     VAR_3 : VAR_5, 1, VAR_6, VAR_7);
 if (VAR_13 >= 4 || VAR_13 < 0) {
     FUNC_6(&VAR_8);
     return -1;
 }
 FUNC_1(&VAR_9, VAR_8.s + VAR_11);
    }




}

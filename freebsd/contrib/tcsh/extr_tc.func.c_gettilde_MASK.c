
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tildecache {char const* user; char* home; int hlen; } ;
typedef char Char ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*) ;
 char const* FUNC_2 (char const*) ;
 int VAR_0 ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (struct tildecache*,int,int,int ) ;
 struct tildecache* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tildecache* FUNC_5 (int) ;
 struct tildecache* FUNC_6 (struct tildecache*,int) ;

Char *
FUNC_7(const Char *VAR_5)
{
    struct tildecache *VAR_6, *VAR_7, *VAR_8;
    Char *VAR_9;


    if (*VAR_5 == '+' || *VAR_5 == '-')
 return ((void*)0);

    if (VAR_1 == ((void*)0))
 VAR_1 = FUNC_5(VAR_0 * sizeof(struct tildecache));



    for (VAR_6 = VAR_1, VAR_7 = VAR_1 + VAR_3; VAR_6 < VAR_7;) {
 int VAR_10;

 VAR_8 = VAR_6 + ((VAR_7 - VAR_6) >> 1);
 if ((VAR_10 = *VAR_5 - *VAR_8->user) == 0 && (VAR_10 = FUNC_0(VAR_5, VAR_8->user)) == 0)
     return (VAR_8->home);
 if (VAR_10 < 0)
     VAR_7 = VAR_8;
 else
     VAR_6 = VAR_8 + 1;
    }



    VAR_9 = FUNC_3(VAR_5);
    if (VAR_9 == ((void*)0))
 return ((void*)0);




    VAR_1[VAR_3].user = FUNC_2(VAR_5);
    VAR_1[VAR_3].home = VAR_9;
    VAR_1[VAR_3++].hlen = FUNC_1(VAR_9);

    FUNC_4(VAR_1, VAR_3, sizeof(struct tildecache), VAR_2);

    if (VAR_3 == VAR_4) {
 VAR_4 += VAR_0;
 VAR_1 = FUNC_6(VAR_1, VAR_4 * sizeof(struct tildecache));
    }
    return (VAR_9);
}

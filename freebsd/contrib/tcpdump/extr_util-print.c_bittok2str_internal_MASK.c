
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tok {char const* s; int v; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;
 size_t FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_2(register const struct tok *VAR_0, register const char *VAR_1,
    register u_int VAR_2, const char *VAR_3)
{
        static char VAR_4[1024+1];
        char *VAR_5 = VAR_4;
        size_t VAR_6 = sizeof(VAR_4), VAR_7;
        register u_int VAR_8;
        register u_int VAR_9;
        const char * VAR_10 = "";

 while (VAR_0 != ((void*)0) && VAR_0->s != ((void*)0)) {
            VAR_9=VAR_0->v;
            VAR_8=1;
            while (VAR_8 != 0) {




  if (VAR_9 == (VAR_2&VAR_8)) {

                    if (VAR_6 <= 1)
                        return (VAR_4);
                    VAR_7 = FUNC_1(VAR_5, VAR_10, VAR_6);
                    if (VAR_7 >= VAR_6)
                        return (VAR_4);
                    VAR_5 += VAR_7;
                    VAR_6 -= VAR_7;
                    if (VAR_6 <= 1)
                        return (VAR_4);
                    VAR_7 = FUNC_1(VAR_5, VAR_0->s, VAR_6);
                    if (VAR_7 >= VAR_6)
                        return (VAR_4);
                    VAR_5 += VAR_7;
                    VAR_6 -= VAR_7;
                    VAR_10 = VAR_3;
                    break;
                }
                VAR_8=VAR_8<<1;
            }
            VAR_0++;
 }

        if (VAR_5 == VAR_4)

            (void)FUNC_0(VAR_4, sizeof(VAR_4), VAR_1 == ((void*)0) ? "#%08x" : VAR_1, VAR_2);
        return (VAR_4);
}

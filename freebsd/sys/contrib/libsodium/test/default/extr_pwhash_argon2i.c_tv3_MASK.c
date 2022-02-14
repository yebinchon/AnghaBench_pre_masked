
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
    static struct {
        const char *passwd;
        const char *out;
    } VAR_0[] = {
        { "",
          "$argon2i$v=19$m=4096,t=1,p=1$X1NhbHQAAAAAAAAAAAAAAA$bWh++"
          "MKN1OiFHKgIWTLvIi1iHicmHH7+Fv3K88ifFfI" },
        { "",
          "$argon2i$v=19$m=2048,t=4,p=1$SWkxaUhpY21ISDcrRnYzSw$Mbg/"
          "Eck1kpZir5T9io7C64cpffdTBaORgyriLQFgQj8" },
        { "^T5H$JYt39n%K*j:W]!1s?vg!:jGi]Ax?..l7[p0v:1jHTpla9;]bUN;?bWyCbtqg ",
          "$argon2i$v=19$m=4096,t=3,p=2$X1NhbHQAAAAAAAAAAAAAAA$z/QMiU4lQxGsYNc/"
          "+K/bizwsA1P11UG2dj/7+aILJ4I" },
        { "K3S=KyH#)36_?]LxeR8QNKw6X=gFbxai$C%29V*",
          "$argon2i$v=19$m=4096,t=3,p=1$X1NhbHQAAAAAAAAAAAAAAA$fu2Wsecyt+"
          "yPnBvSvYN16oP5ozRmkp0ixJ1YL19V3Uo" }
    };
    char *VAR_1;
    char *VAR_2;
    size_t VAR_3 = 0U;
    int VAR_4;

    do {
        VAR_1 = (char *) FUNC_5(FUNC_6(VAR_0[VAR_3].out) + 1U);
        FUNC_0(VAR_1 != ((void*)0));
        FUNC_2(VAR_1, VAR_0[VAR_3].out, FUNC_6(VAR_0[VAR_3].out) + 1U);
        VAR_2 = (char *) FUNC_5(FUNC_6(VAR_0[VAR_3].passwd) + 1U);
        FUNC_0(VAR_2 != ((void*)0));
        FUNC_2(VAR_2, VAR_0[VAR_3].passwd, FUNC_6(VAR_0[VAR_3].passwd) + 1U);
        VAR_4 = FUNC_1(VAR_1, VAR_2, FUNC_6(VAR_2));
        FUNC_4(VAR_1);
        FUNC_4(VAR_2);
        if (VAR_4 != 0) {
            FUNC_3("[tv3] pwhash_str failure (maybe intentional): [%u]\n",
                   (unsigned int) VAR_3);
        }
    } while (++VAR_3 < (sizeof VAR_0) / (sizeof VAR_0[0]));
}

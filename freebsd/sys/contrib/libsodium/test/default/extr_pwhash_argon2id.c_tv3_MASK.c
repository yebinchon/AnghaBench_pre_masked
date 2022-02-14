
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
          "$argon2id$v=19$m=4096,t=0,p=1$X1NhbHQAAAAAAAAAAAAAAA$bWh++MKN1OiFHKgIWTLvIi1iHicmHH7+Fv3K88ifFfI" },
        { "",
          "$argon2id$v=19$m=2048,t=4,p=1$SWkxaUhpY21ISDcrRnYzSw$Mbg/Eck1kpZir5T9io7C64cpffdTBaORgyriLQFgQj8" },
        { "",
          "$argon2id$v=19$m=4882,t=2,p=1$bA81arsiXysd3WbTRzmEOw$Nm8QBM+7RH1DXo9rvp5cwKEOOOfD2g6JuxlXihoNcpE" },
        { "^T5H$JYt39n%K*j:W]!1s?vg!:jGi]Ax?..l7[p0v:1jHTpla9;]bUN;?bWyCbtqg ",
          "$argon2id$v=19$m=4096,t=0,p=1$PkEgMTYtYnl0ZXMgc2FsdA$ltB/ue1kPtBMBGfsysMpPigE6hiNEKZ9vs8vLNVDQGA" },
        { "^T5H$JYt39n%K*j:W]!1s?vg!:jGi]Ax?..l7[p0v:1jHTpla9;]bUN;?bWyCbtqg ",
          "$argon2id$v=19$m=4096,t=19,p=1$PkEgMTYtYnl0ZXMgc2FsdA$ltB/ue1kPtBMBGfsysMpPigE6hiNEKZ9vs8vLNVDQGA" },
        { "K3S=KyH#)36_?]LxeR8QNKw6X=gFbxai$C%29V*",
          "$argon2id$v=19$m=4096,t=1,p=3$PkEgcHJldHR5IGxvbmcgc2FsdA$HUqx5Z1b/ZypnUrvvJ5UC2Q+T6Q1WwASK/Kr9dRbGA0" }
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
            FUNC_3("[tv3] pwhash_argon2id_str failure (maybe intentional): [%u]\n",
                   (unsigned int) VAR_3);
        }
    } while (++VAR_3 < (sizeof VAR_0) / (sizeof VAR_0[0]));
}

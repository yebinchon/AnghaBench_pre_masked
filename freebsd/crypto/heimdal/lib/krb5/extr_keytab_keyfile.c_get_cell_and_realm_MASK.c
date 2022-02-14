
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct akf_data {int * cell; int * realm; } ;
typedef int krb5_context ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ,...) ;
 size_t FUNC_6 (char*,char*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 char FUNC_9 (unsigned char) ;

__attribute__((used)) static int
FUNC_10 (krb5_context VAR_6, struct akf_data *VAR_7)
{
    FILE *VAR_8;
    char VAR_9[VAR_2], *VAR_10;
    int VAR_11;

    VAR_8 = FUNC_3 (VAR_1, "r");
    if (VAR_8 == ((void*)0)) {
 VAR_11 = VAR_5;
 FUNC_5 (VAR_6, VAR_11,
    FUNC_0("Open ThisCell %s: %s", ""),
    VAR_1,
    FUNC_8(VAR_11));
 return VAR_11;
    }
    if (FUNC_2 (VAR_9, sizeof(VAR_9), VAR_8) == ((void*)0)) {
 FUNC_1 (VAR_8);
 FUNC_5 (VAR_6, VAR_3,
    FUNC_0("No cell in ThisCell file %s", ""),
    VAR_1);
 return VAR_3;
    }
    VAR_9[FUNC_6(VAR_9, "\n")] = '\0';
    FUNC_1(VAR_8);

    VAR_7->cell = FUNC_7 (VAR_9);
    if (VAR_7->cell == ((void*)0)) {
 FUNC_5(VAR_6, VAR_4,
          FUNC_0("malloc: out of memory", ""));
 return VAR_4;
    }

    VAR_8 = FUNC_3 (VAR_0, "r");
    if (VAR_8 != ((void*)0)) {
 if (FUNC_2 (VAR_9, sizeof(VAR_9), VAR_8) == ((void*)0)) {
     FUNC_4 (VAR_7->cell);
     VAR_7->cell = ((void*)0);
     FUNC_1 (VAR_8);
     FUNC_5 (VAR_6, VAR_3,
        FUNC_0("No realm in ThisCell file %s", ""),
        VAR_0);
     return VAR_3;
 }
 VAR_9[FUNC_6(VAR_9, "\n")] = '\0';
 FUNC_1(VAR_8);
    }

    for (VAR_10 = VAR_9; *VAR_10 != '\0'; VAR_10++)
 *VAR_10 = FUNC_9((unsigned char)*VAR_10);

    VAR_7->realm = FUNC_7 (VAR_9);
    if (VAR_7->realm == ((void*)0)) {
 FUNC_4 (VAR_7->cell);
 VAR_7->cell = ((void*)0);
 FUNC_5(VAR_6, VAR_4,
          FUNC_0("malloc: out of memory", ""));
 return VAR_4;
    }
    return 0;
}

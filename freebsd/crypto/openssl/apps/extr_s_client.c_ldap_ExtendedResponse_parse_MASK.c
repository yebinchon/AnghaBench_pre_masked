
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const**,long*,int*,int*,long) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(const char *VAR_7, long VAR_8)
{
    const unsigned char *VAR_9, *VAR_10;
    long VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15 = -1;

    VAR_9 = (const unsigned char *)VAR_7;
    VAR_10 = VAR_9 + VAR_8;
    VAR_14 = FUNC_0(&VAR_9, &VAR_11, &VAR_12, &VAR_13, VAR_8);
    if (VAR_14 != VAR_1 || VAR_12 != VAR_4 ||
        (VAR_8 = VAR_10 - VAR_9, VAR_11 > VAR_8)) {
        FUNC_1(VAR_6, "Unexpected LDAP response\n");
        goto end;
    }

    VAR_8 = VAR_11;


    VAR_14 = FUNC_0(&VAR_9, &VAR_11, &VAR_12, &VAR_13, VAR_8);
    if (VAR_14 != VAR_5 || VAR_12 != VAR_3 ||
        (VAR_8 = VAR_10 - VAR_9, VAR_11 > VAR_8)) {
        FUNC_1(VAR_6, "No MessageID\n");
        goto end;
    }

    VAR_9 += VAR_11;


    VAR_8 = VAR_10 - VAR_9;
    VAR_14 = FUNC_0(&VAR_9, &VAR_11, &VAR_12, &VAR_13, VAR_8);
    if (VAR_14 != VAR_1 || VAR_13 != VAR_0 ||
        VAR_12 != 24) {
        FUNC_1(VAR_6, "Not ExtendedResponse\n");
        goto end;
    }


    VAR_8 = VAR_10 - VAR_9;
    VAR_14 = FUNC_0(&VAR_9, &VAR_11, &VAR_12, &VAR_13, VAR_8);
    if (VAR_14 != VAR_5 || VAR_12 != VAR_2 || VAR_11 == 0 ||
        (VAR_8 = VAR_10 - VAR_9, VAR_11 > VAR_8)) {
        FUNC_1(VAR_6, "Not LDAPResult\n");
        goto end;
    }


    for (VAR_15 = 0, VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
        VAR_15 <<= 8;
        VAR_15 |= VAR_9[VAR_14];
    }

 end:
    return VAR_15;
}

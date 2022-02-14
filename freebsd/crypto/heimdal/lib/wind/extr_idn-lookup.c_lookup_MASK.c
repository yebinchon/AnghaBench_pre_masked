
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct addrinfo {char* ai_canonname; int ai_flags; } ;
typedef int hints ;
typedef int encoded ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (char*,char const*,...) ;
 size_t FUNC_9 (char const*) ;
 int FUNC_10 (int *,unsigned int,char*,size_t*) ;
 int FUNC_11 (int *,size_t,int *,size_t*,int ) ;
 int FUNC_12 (char const*,int *,size_t*) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_2)
{
    unsigned VAR_3;
    char VAR_4[1024];
    char *VAR_5;
    int VAR_6;
    struct addrinfo VAR_7;
    struct addrinfo *VAR_8;

    size_t VAR_9 = FUNC_9(VAR_2);
    uint32_t *VAR_10 = FUNC_6(VAR_9 * sizeof(uint32_t));
    size_t VAR_11 = VAR_9 * 2;
    uint32_t *VAR_12 = FUNC_6(VAR_11 * sizeof(uint32_t));

    if (VAR_10 == ((void*)0) && VAR_9 != 0)
 FUNC_0(1, "malloc failed");
    if (VAR_12 == ((void*)0) && VAR_11 != 0)
 FUNC_0(1, "malloc failed");

    VAR_6 = FUNC_12(VAR_2, VAR_10, &VAR_9);
    if (VAR_6)
 FUNC_0(1, "utf8 conversion failed");
    VAR_6 = FUNC_11(VAR_10, VAR_9, VAR_12, &VAR_11, VAR_1);
    if (VAR_6)
 FUNC_0(1, "stringprep failed");
    FUNC_1(VAR_10);

    VAR_5 = VAR_4;
    for (VAR_3 = 0; VAR_3 < VAR_11; ++VAR_3) {
 unsigned VAR_13;
 size_t VAR_14;

 for (VAR_13 = VAR_3; VAR_13 < VAR_11 && !FUNC_5(VAR_12[VAR_13]); ++VAR_13)
     ;
 VAR_14 = sizeof(VAR_4) - (VAR_5 - VAR_4);
 VAR_6 = FUNC_10(VAR_12 + VAR_3, VAR_13 - VAR_3, VAR_5, &VAR_14);
 if (VAR_6)
     FUNC_0(1, "punycode failed");

 VAR_5 += VAR_14;
 *VAR_5++ = '.';
 VAR_3 = VAR_13;
    }
    *VAR_5 = '\0';
    FUNC_1(VAR_12);

    FUNC_8("Converted \"%s\" into \"%s\"\n", VAR_2, VAR_4);

    FUNC_7(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.ai_flags = VAR_0;
    VAR_6 = FUNC_4(VAR_4, ((void*)0), &VAR_7, &VAR_8);
    if(VAR_6)
 FUNC_0(1, "getaddrinfo failed: %s", FUNC_3(VAR_6));
    FUNC_8("canonical-name: %s\n", VAR_8->ai_canonname);
    FUNC_2(VAR_8);
}

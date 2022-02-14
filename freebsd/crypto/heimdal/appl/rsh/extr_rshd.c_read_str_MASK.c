
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int *,char*,char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static char *
FUNC_5 (int VAR_1, size_t VAR_2, char *VAR_3)
{
    char *VAR_4 = FUNC_1(VAR_2);
    char *VAR_5 = VAR_4;
    if(VAR_4 == ((void*)0))
 FUNC_0(VAR_1, ((void*)0), "%s too long", VAR_3);
    while(VAR_5 < VAR_4 + VAR_2) {
 if(FUNC_2(VAR_1, VAR_5, 1) != 1)
     FUNC_4("read: %s", FUNC_3(VAR_0));
 if(*VAR_5 == '\0')
     return VAR_4;
 VAR_5++;
    }
    FUNC_0(VAR_1, ((void*)0), "%s too long", VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; unsigned int* components; } ;
typedef TYPE_1__ heim_oid ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 unsigned int* FUNC_2 (unsigned int*,int) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char const*,char**) ;
 long FUNC_5 (char*,char**,int) ;

int
FUNC_6 (const char *VAR_3, const char *VAR_4, heim_oid *VAR_5)
{
    char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    unsigned int *VAR_10;
    long VAR_11;

    VAR_5->length = 0;
    VAR_5->components = ((void*)0);

    if (VAR_4 == ((void*)0))
 VAR_4 = ".";

    VAR_6 = FUNC_3(VAR_3);

    for (VAR_7 = FUNC_4(VAR_6, VAR_4, &VAR_8);
  VAR_7 != ((void*)0);
  VAR_7 = FUNC_4(((void*)0), VAR_4, &VAR_8)) {

 VAR_10 = FUNC_2(VAR_5->components,
      (VAR_5->length + 1) * sizeof(VAR_5->components[0]));
 if (VAR_10 == ((void*)0)) {
     FUNC_0(VAR_5);
     FUNC_1(VAR_6);
     return VAR_1;
 }
 VAR_5->components = VAR_10;

 VAR_11 = FUNC_5(VAR_7, &VAR_9, 10);
 if (*VAR_9 != '\0' || VAR_11 < 0 || VAR_11 > VAR_2) {
     FUNC_0(VAR_5);
     FUNC_1(VAR_6);
     return VAR_0;
 }
 VAR_5->components[VAR_5->length++] = VAR_11;
    }
    FUNC_1(VAR_6);
    return 0;
}

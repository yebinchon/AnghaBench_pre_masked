
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* hx509_name ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_7__ {int element; } ;
struct TYPE_6__ {TYPE_5__ der_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_5__*,int ,int *,char*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (int ,int ,int,char*,...) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,char const*,size_t) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*,int,int *) ;
 size_t FUNC_10 (char const*) ;

int
FUNC_11(hx509_context VAR_4, const char *VAR_5, hx509_name *VAR_6)
{
    const char *VAR_7, *VAR_8;
    size_t VAR_9;
    hx509_name VAR_10;
    int VAR_11;

    *VAR_6 = ((void*)0);

    VAR_10 = FUNC_1(1, sizeof(*VAR_10));
    if (VAR_10 == ((void*)0)) {
 FUNC_5(VAR_4, 0, VAR_0, "out of memory");
 return VAR_0;
    }

    VAR_10->der_name.element = VAR_3;

    VAR_7 = VAR_5;

    while (VAR_7 != ((void*)0) && *VAR_7 != '\0') {
 heim_oid VAR_12;
 int VAR_13;

 VAR_8 = FUNC_8(VAR_7, ',');
 if (VAR_8) {
     VAR_9 = (VAR_8 - VAR_7);
     VAR_13 = 1;
 } else {
     VAR_9 = FUNC_10(VAR_7);
     VAR_13 = 0;
 }

 VAR_8 = FUNC_8(VAR_7, '=');
 if (VAR_8 == ((void*)0)) {
     VAR_11 = VAR_2;
     FUNC_5(VAR_4, 0, VAR_11, "missing = in %s", VAR_7);
     goto out;
 }
 if (VAR_8 == VAR_7) {
     VAR_11 = VAR_2;
     FUNC_5(VAR_4, 0, VAR_11,
       "missing name before = in %s", VAR_7);
     goto out;
 }

 if ((size_t)(VAR_8 - VAR_7) > VAR_9) {
     VAR_11 = VAR_2;
     FUNC_5(VAR_4, 0, VAR_11, " = after , in %s", VAR_7);
     goto out;
 }

 VAR_11 = FUNC_9(VAR_7, VAR_8 - VAR_7, &VAR_12);
 if (VAR_11) {
     VAR_11 = VAR_2;
     FUNC_5(VAR_4, 0, VAR_11,
       "unknown type: %.*s", (int)(VAR_8 - VAR_7), VAR_7);
     goto out;
 }

 {
     size_t VAR_14 = VAR_9 - (VAR_8 - VAR_7) - 1;
     const char *VAR_15 = VAR_7 + (VAR_8 - VAR_7) + 1;
     char *VAR_16;

     VAR_16 = FUNC_6(VAR_14 + 1);
     if (VAR_16 == ((void*)0)) {
  FUNC_2(&VAR_12);
  VAR_11 = VAR_0;
  FUNC_5(VAR_4, 0, VAR_11, "out of memory");
  goto out;
     }
     FUNC_7(VAR_16, VAR_15, VAR_14);
     VAR_16[VAR_14] = '\0';

     VAR_11 = FUNC_0(VAR_4, &VAR_10->der_name, 0, &VAR_12, VAR_16);
     FUNC_3(VAR_16);
     FUNC_2(&VAR_12);
     if(VAR_11)
  goto out;
 }
 VAR_7 += VAR_9 + VAR_13;
    }

    *VAR_6 = VAR_10;

    return 0;
out:
    FUNC_4(&VAR_10);
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int hx509_context ;
typedef int Name ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int *,char*) ;
 int VAR_1 ;
 int FUNC_1 (char**,char*,unsigned long) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,char*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(hx509_context VAR_2, const Name *VAR_3, Name *VAR_4)
{
    char *VAR_5;
    time_t VAR_6;
    int VAR_7;

    VAR_7 = FUNC_2(VAR_3, VAR_4);
    if (VAR_7) {
 FUNC_5(VAR_2, 0, VAR_7,
          "Failed to copy subject name");
 return VAR_7;
    }

    VAR_6 = FUNC_6(((void*)0));
    FUNC_1(&VAR_5, "ts-%lu", (unsigned long)VAR_6);
    if (VAR_5 == ((void*)0)) {
 FUNC_5(VAR_2, 0, VAR_0,
          "Failed to copy subject name");
 return VAR_0;
    }

    VAR_7 = FUNC_0(VAR_2, VAR_4, 1, &VAR_1, VAR_5);
    FUNC_3(VAR_5);
    if (VAR_7)
 FUNC_4(VAR_4);
    return VAR_7;
}

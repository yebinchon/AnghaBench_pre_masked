
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,char const*,char const*,unsigned char const*,long) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(FILE *VAR_3, const char *VAR_4, const char *VAR_5,
              const unsigned char *VAR_6, long VAR_7)
{
    BIO *VAR_8;
    int VAR_9;

    if ((VAR_8 = FUNC_1(FUNC_2())) == ((void*)0)) {
        FUNC_5(VAR_2, VAR_1);
        return 0;
    }
    FUNC_3(VAR_8, VAR_3, VAR_0);
    VAR_9 = FUNC_4(VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
    FUNC_0(VAR_8);
    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_prepare_t ;
typedef int buf ;
typedef int atf_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static
void
FUNC_6(void (*VAR_6)(void *),
         void *VAR_7,
         const stream_prepare_t *VAR_8,
         const stream_prepare_t *VAR_9)
{
    atf_error_t VAR_10;

    VAR_10 = FUNC_3(VAR_8, VAR_3);
    if (FUNC_2(VAR_10))
        goto out;

    VAR_10 = FUNC_3(VAR_9, VAR_2);
    if (FUNC_2(VAR_10))
        goto out;

    VAR_6(VAR_7);
    VAR_4;

out:
    if (FUNC_2(VAR_10)) {
        char VAR_11[1024];

        FUNC_0(VAR_10, VAR_11, sizeof(VAR_11));
        FUNC_5(VAR_5, "Unhandled error: %s\n", VAR_11);
        FUNC_1(VAR_10);

        FUNC_4(VAR_0);
    } else
        FUNC_4(VAR_1);
}

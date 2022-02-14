
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chacha_ctx {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct chacha_ctx*,unsigned char*,unsigned char*,unsigned long long) ;
 int FUNC_2 (struct chacha_ctx*,unsigned char const*,int *) ;
 int FUNC_3 (struct chacha_ctx*,unsigned char const*) ;
 int VAR_0 ;
 int FUNC_4 (unsigned char*,int ,unsigned long long) ;
 int FUNC_5 (struct chacha_ctx*,int) ;

__attribute__((used)) static int
FUNC_6(unsigned char *VAR_1, unsigned long long VAR_2,
                const unsigned char *VAR_3, const unsigned char *VAR_4)
{
    struct chacha_ctx VAR_5;

    if (!VAR_2) {
        return 0;
    }
    FUNC_0(VAR_0 == 256 / 8);
    FUNC_3(&VAR_5, VAR_4);
    FUNC_2(&VAR_5, VAR_3, ((void*)0));
    FUNC_4(VAR_1, 0, VAR_2);
    FUNC_1(&VAR_5, VAR_1, VAR_1, VAR_2);
    FUNC_5(&VAR_5, sizeof VAR_5);

    return 0;
}

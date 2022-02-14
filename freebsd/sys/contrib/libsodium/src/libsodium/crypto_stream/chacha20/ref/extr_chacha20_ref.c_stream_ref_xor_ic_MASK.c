
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct chacha_ctx {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct chacha_ctx*,unsigned char const*,unsigned char*,unsigned long long) ;
 int FUNC_3 (struct chacha_ctx*,unsigned char const*,int *) ;
 int FUNC_4 (struct chacha_ctx*,unsigned char const*) ;
 int FUNC_5 (struct chacha_ctx*,int) ;

__attribute__((used)) static int
FUNC_6(unsigned char *VAR_0, const unsigned char *VAR_1,
                  unsigned long long VAR_2, const unsigned char *VAR_3, uint64_t VAR_4,
                  const unsigned char *VAR_5)
{
    struct chacha_ctx VAR_6;
    uint8_t VAR_7[8];
    uint32_t VAR_8;
    uint32_t VAR_9;

    if (!VAR_2) {
        return 0;
    }
    VAR_8 = FUNC_1(VAR_4 >> 32);
    VAR_9 = FUNC_1(VAR_4);
    FUNC_0(&VAR_7[0], VAR_9);
    FUNC_0(&VAR_7[4], VAR_8);
    FUNC_4(&VAR_6, VAR_5);
    FUNC_3(&VAR_6, VAR_3, VAR_7);
    FUNC_2(&VAR_6, VAR_1, VAR_0, VAR_2);
    FUNC_5(&VAR_6, sizeof VAR_6);

    return 0;
}

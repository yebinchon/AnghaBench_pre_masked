
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * h; } ;
typedef TYPE_1__ SHA256_CTX ;


 int FUNC_0 (int ,unsigned char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, unsigned char *VAR_1)
{
    SHA256_CTX *VAR_2 = VAR_0;
    unsigned VAR_3;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        FUNC_0(VAR_2->h[VAR_3], VAR_1);
    }
}

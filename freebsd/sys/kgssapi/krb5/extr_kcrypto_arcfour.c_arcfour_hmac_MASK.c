
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MD5_CTX ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_3(uint8_t *VAR_0, uint8_t *VAR_1, size_t VAR_2,
 uint8_t *VAR_3)
{
 uint8_t VAR_4[64];
 MD5_CTX VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  VAR_4[VAR_6] = VAR_0[VAR_6] ^ 0x36;
 for (; VAR_6 < 64; VAR_6++)
  VAR_4[VAR_6] = 0x36;

 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, VAR_4, 64);
 FUNC_2(&VAR_5, VAR_1, VAR_2);
 FUNC_0(VAR_3, &VAR_5);

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  VAR_4[VAR_6] = VAR_0[VAR_6] ^ 0x5c;
 for (; VAR_6 < 64; VAR_6++)
  VAR_4[VAR_6] = 0x5c;

 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, VAR_4, 64);
 FUNC_2(&VAR_5, VAR_3, 16);
 FUNC_0(VAR_3, &VAR_5);
}

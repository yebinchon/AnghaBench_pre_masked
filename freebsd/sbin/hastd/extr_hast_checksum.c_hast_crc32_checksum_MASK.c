
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int crc ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (unsigned char const*,size_t) ;

__attribute__((used)) static void
FUNC_2(const unsigned char *VAR_0, size_t VAR_1,
    unsigned char *VAR_2, size_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(&VAR_4, VAR_2, sizeof(VAR_4));
 *VAR_3 = sizeof(VAR_4);
}

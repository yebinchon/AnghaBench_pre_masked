
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned char const*,int *) ;
 int FUNC_2 (unsigned char const*,int *) ;
 int FUNC_3 (unsigned char const*,int *) ;

void
FUNC_4(const int VAR_0,
   const unsigned char *VAR_1,
   uint32_t *VAR_2)
{
    FUNC_0(VAR_0 == 128 || VAR_0 == 192 || VAR_0 == 256,
     ("Invalid key size (%d).", VAR_0));

    switch(VAR_0) {
    case 128:
 FUNC_1(VAR_1, VAR_2);
 break;
    case 192:
 FUNC_2(VAR_1, VAR_2);
 break;
    case 256:
 FUNC_3(VAR_1, VAR_2);
 break;
    default:
 break;
    }
}

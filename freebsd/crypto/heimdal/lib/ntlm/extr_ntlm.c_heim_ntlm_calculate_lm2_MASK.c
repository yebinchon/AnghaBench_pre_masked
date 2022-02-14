
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ntlm_buf {int length; int * data; } ;
typedef int clientchallenge ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int,unsigned char const*,int *) ;
 int FUNC_2 (void const*,size_t,char const*,char const*,unsigned char*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned char*,int) ;

int
FUNC_5(const void *VAR_2, size_t VAR_3,
   const char *VAR_4,
   const char *VAR_5,
   const unsigned char VAR_6[8],
   unsigned char VAR_7[16],
   struct ntlm_buf *VAR_8)
{
    unsigned char VAR_9[8];
    int VAR_10;

    if (FUNC_0(VAR_9, sizeof(VAR_9)) != 1)
 return VAR_1;



    FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);

    VAR_8->data = FUNC_3(24);
    if (VAR_8->data == ((void*)0))
        return VAR_0;
    VAR_8->length = 24;

    VAR_10 = FUNC_1(VAR_7, VAR_9, 8,
    VAR_6, VAR_8->data);
    if (VAR_10)
 return VAR_10;

    FUNC_4(((uint8_t *)VAR_8->data) + 16, VAR_9, 8);

    return 0;
}

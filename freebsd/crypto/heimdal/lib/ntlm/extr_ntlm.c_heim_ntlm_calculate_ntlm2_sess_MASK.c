
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {unsigned char* data; int length; } ;
typedef int res ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,unsigned char*) ;
 int FUNC_2 (struct ntlm_buf*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (unsigned char*,unsigned char*,unsigned char*) ;

int
FUNC_7(const unsigned char VAR_1[8],
          const unsigned char VAR_2[8],
          const unsigned char VAR_3[16],
          struct ntlm_buf *VAR_4,
          struct ntlm_buf *VAR_5)
{
    unsigned char VAR_6[8];
    unsigned char VAR_7[21], *VAR_8;
    int VAR_9;

    VAR_9 = FUNC_1(VAR_1, VAR_2,
            VAR_6);
    if (VAR_9) {
 return VAR_9;
    }

    VAR_4->data = FUNC_3(24);
    if (VAR_4->data == ((void*)0)) {
 return VAR_0;
    }
    VAR_4->length = 24;

    VAR_5->data = FUNC_3(24);
    if (VAR_5->data == ((void*)0)) {
 FUNC_0(VAR_4->data);
 VAR_4->data = ((void*)0);
 return VAR_0;
    }
    VAR_5->length = 24;


    FUNC_5(VAR_4->data, 0, 24);
    FUNC_4(VAR_4->data, VAR_1, 8);

    FUNC_5(VAR_7, 0, sizeof(VAR_7));
    FUNC_4(VAR_7, VAR_3, 16);

    VAR_8 = VAR_5->data;
    VAR_9 = FUNC_6(&VAR_7[0], VAR_6, VAR_8 + 0);
    if (VAR_9)
 goto out;
    VAR_9 = FUNC_6(&VAR_7[7], VAR_6, VAR_8 + 8);
    if (VAR_9)
 goto out;
    VAR_9 = FUNC_6(&VAR_7[14], VAR_6, VAR_8 + 16);
    if (VAR_9)
 goto out;

    return 0;

out:
    FUNC_2(VAR_5);
    FUNC_2(VAR_4);
    return VAR_9;
}

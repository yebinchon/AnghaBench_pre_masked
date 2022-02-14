
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int length; int * data; } ;
typedef int res ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ntlm_buf*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,void*,size_t) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned char*) ;

int
FUNC_5(void *VAR_3, size_t VAR_4,
     unsigned char VAR_5[8],
     struct ntlm_buf *VAR_6)
{
    unsigned char VAR_7[21];
    int VAR_8;

    if (VAR_4 != VAR_2)
 return VAR_1;

    FUNC_2(VAR_7, VAR_3, VAR_4);
    FUNC_3(&VAR_7[VAR_2], 0, sizeof(VAR_7) - VAR_2);

    VAR_6->data = FUNC_1(24);
    if (VAR_6->data == ((void*)0))
 return VAR_0;
    VAR_6->length = 24;

    VAR_8 = FUNC_4(&VAR_7[0], VAR_5, ((unsigned char *)VAR_6->data) + 0);
    if (VAR_8)
 goto out;
    VAR_8 = FUNC_4(&VAR_7[7], VAR_5, ((unsigned char *)VAR_6->data) + 8);
    if (VAR_8)
 goto out;
    VAR_8 = FUNC_4(&VAR_7[14], VAR_5, ((unsigned char *)VAR_6->data) + 16);
    if (VAR_8)
 goto out;

    return 0;

out:
    FUNC_0(VAR_6);
    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {size_t length; unsigned char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ntlm_buf*) ;
 unsigned char* FUNC_1 (size_t) ;
 size_t FUNC_2 (char const*) ;
 unsigned char FUNC_3 (unsigned char) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_4, int VAR_5, struct ntlm_buf *VAR_6)
{
    unsigned char *VAR_7;
    size_t VAR_8, VAR_9;

    VAR_8 = FUNC_2(VAR_4);
    if (VAR_8 / 2 > VAR_3)
 return VAR_2;

    VAR_6->length = VAR_8 * 2;
    VAR_6->data = FUNC_1(VAR_6->length);
    if (VAR_6->data == ((void*)0) && VAR_8 != 0) {
 FUNC_0(VAR_6);
 return VAR_1;
    }

    VAR_7 = VAR_6->data;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
 unsigned char VAR_10 = (unsigned char)VAR_4[VAR_9];
 if (VAR_10 & 0x80) {
     FUNC_0(VAR_6);
     return VAR_0;
 }
 if (VAR_5)
     VAR_10 = FUNC_3(VAR_10);
 VAR_7[(VAR_9 * 2) + 0] = VAR_10;
 VAR_7[(VAR_9 * 2) + 1] = 0;
    }
    return 0;
}

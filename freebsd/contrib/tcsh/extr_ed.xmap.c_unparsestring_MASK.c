
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* buf; } ;
typedef char Char ;
typedef TYPE_1__ CStr ;


 char const VAR_0 ;
 char FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char) ;
 unsigned char* FUNC_6 (int) ;

unsigned char *
FUNC_7(const CStr *VAR_4, const Char *VAR_5)
{
    unsigned char *VAR_6, *VAR_7;
    Char VAR_8;
    int VAR_9;


    VAR_6 = FUNC_6((VAR_4->len + 1) * FUNC_4(4, VAR_1));
    VAR_7 = VAR_6;
    if (VAR_5[0])

 *VAR_7++ = VAR_5[0];




    for (VAR_9 = 0; VAR_9 < VAR_4->len; VAR_9++) {
 VAR_8 = VAR_4->buf[VAR_9];
 if (FUNC_1(VAR_8)) {
     *VAR_7++ = '^';
     if (VAR_8 == FUNC_0('\177'))
  *VAR_7++ = '?';
     else



  *VAR_7++ = VAR_3[VAR_2[VAR_8]|0100];

 }
 else if (VAR_8 == '^' || VAR_8 == '\\') {
     *VAR_7++ = '\\';
     *VAR_7++ = (unsigned char) VAR_8;
 }
 else if (VAR_8 == ' ' || (FUNC_2(VAR_8) && !FUNC_3(VAR_8)))
     VAR_7 += FUNC_5((char *)VAR_7, VAR_8);
 else {
     *VAR_7++ = '\\';
     *VAR_7++ = ((VAR_8 >> 6) & 7) + '0';
     *VAR_7++ = ((VAR_8 >> 3) & 7) + '0';
     *VAR_7++ = (VAR_8 & 7) + '0';
 }
    }
    if (VAR_5[0] && VAR_5[1])

 *VAR_7++ = VAR_5[1];



    *VAR_7++ = 0;
    return VAR_6;
}

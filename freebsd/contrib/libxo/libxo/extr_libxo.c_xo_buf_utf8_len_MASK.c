
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_handle_t ;
typedef int ssize_t ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_2 (xo_handle_t *VAR_0, const char *VAR_1, ssize_t VAR_2)
{
    unsigned VAR_3 = (unsigned char) *VAR_1;
    ssize_t VAR_4, VAR_5;

    VAR_4 = FUNC_1(VAR_1);
    if (VAR_4 < 0) {
        FUNC_0(VAR_0, "invalid UTF-8 data: %02hhx", VAR_3);
 return -1;
    }

    if (VAR_4 > VAR_2) {
        FUNC_0(VAR_0, "invalid UTF-8 data (short): %02hhx (%d/%d)",
     VAR_3, VAR_4, VAR_2);
 return -1;
    }

    for (VAR_5 = 2; VAR_5 < VAR_4; VAR_5++) {
 VAR_3 = (unsigned char ) VAR_1[VAR_5];
 if ((VAR_3 & 0xc0) != 0x80) {
     FUNC_0(VAR_0, "invalid UTF-8 data (byte %d): %x", VAR_5, VAR_3);
     return -1;
 }
    }

    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, void *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3 = VAR_1;
    int VAR_4;
    while(VAR_2) {
 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 if (VAR_4 == 0)
     return 0;
 else if (VAR_4 < 0)
     return -1;
 VAR_2 -= VAR_4;
 VAR_3 += VAR_4;
    }
    return VAR_3 - (unsigned char*)VAR_1;
}

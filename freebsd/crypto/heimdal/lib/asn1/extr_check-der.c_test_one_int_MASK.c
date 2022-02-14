
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,size_t,int*,size_t*) ;
 int FUNC_2 (unsigned char*,size_t,int*,size_t*) ;
 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,int ,size_t) ;
 int FUNC_6 (char*,int,...) ;

__attribute__((used)) static int
FUNC_7(int VAR_0)
{
    int VAR_1, VAR_2;
    unsigned char *VAR_3;
    size_t VAR_4, VAR_5;

    VAR_5 = FUNC_0(VAR_0);

    VAR_3 = FUNC_3(VAR_5 + 2);

    VAR_3[0] = '\xff';
    VAR_3[VAR_5 + 1] = '\xff';
    FUNC_5(VAR_3 + 1, 0, VAR_5);

    VAR_1 = FUNC_2(VAR_3 + 1 + VAR_5 - 1, VAR_5, &VAR_0, &VAR_4);
    if (VAR_1) {
 FUNC_6("integer %d encode failed %d\n", VAR_0, VAR_1);
 return 1;
    }
    if (VAR_5 != VAR_4) {
 FUNC_6("integer %d encode fail with %d len %lu, result len %lu\n",
        VAR_0, VAR_1, (unsigned long)VAR_5, (unsigned long)VAR_4);
 return 1;
    }

    VAR_1 = FUNC_1(VAR_3 + 1, VAR_5, &VAR_2, &VAR_4);
    if (VAR_1) {
 FUNC_6("integer %d decode failed %d\n", VAR_0, VAR_1);
 return 1;
    }
    if (VAR_5 != VAR_4) {
 FUNC_6("integer %d decoded diffrent len %lu != %lu",
        VAR_0, (unsigned long)VAR_5, (unsigned long)VAR_4);
 return 1;
    }
    if (VAR_0 != VAR_2) {
 FUNC_6("decode decoded to diffrent value %d != %d",
        VAR_0, VAR_2);
 return 1;
    }

    if (VAR_3[0] != (unsigned char)'\xff') {
 FUNC_6("precanary dead %d\n", VAR_0);
 return 1;
    }
    if (VAR_3[VAR_5 + 1] != (unsigned char)'\xff') {
 FUNC_6("postecanary dead %d\n", VAR_0);
 return 1;
    }
    FUNC_4(VAR_3);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rcode ;
typedef int CONF_MODULE ;
typedef int CONF ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,char const*,...) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*,char const*,int const*) ;
 int * FUNC_6 (int const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_7(const CONF *VAR_5, const char *VAR_6, const char *VAR_7,
                      unsigned long VAR_8)
{
    CONF_MODULE *VAR_9;
    int VAR_10;

    VAR_9 = FUNC_4(VAR_6);


    if (!VAR_9 && !(VAR_8 & VAR_1))
        VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7);

    if (!VAR_9) {
        if (!(VAR_8 & VAR_2)) {
            FUNC_1(VAR_0, VAR_4);
            FUNC_3(2, "module=", VAR_6);
        }
        return -1;
    }

    VAR_10 = FUNC_5(VAR_9, VAR_6, VAR_7, VAR_5);

    if (VAR_10 <= 0) {
        if (!(VAR_8 & VAR_2)) {
            char VAR_11[FUNC_2(VAR_10) + 1];

            FUNC_1(VAR_0, VAR_3);
            FUNC_0(VAR_11, sizeof(VAR_11), "%-8d", VAR_10);
            FUNC_3(6, "module=", VAR_6, ", value=", VAR_7,
                               ", retcode=", VAR_11);
        }
    }

    return VAR_10;
}

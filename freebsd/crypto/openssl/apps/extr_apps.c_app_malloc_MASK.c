
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int ,int,char const*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

void* FUNC_5(int VAR_1, const char *VAR_2)
{
    void *VAR_3 = FUNC_2(VAR_1);

    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, "%s: Could not allocate %d bytes for %s\n",
                FUNC_4(), VAR_1, VAR_2);
        FUNC_1(VAR_0);
        FUNC_3(1);
    }
    return VAR_3;
}

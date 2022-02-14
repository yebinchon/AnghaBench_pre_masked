
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void* const) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (void* const,char const*,size_t const) ;
 void* FUNC_5 (size_t const) ;
 int FUNC_6 (void* const,size_t const,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(const char* VAR_1, int VAR_2)
{
    size_t const VAR_3 = FUNC_3(VAR_1);
    void* const VAR_4 = FUNC_5(VAR_3 + !VAR_3 );
    if (!VAR_4) {
        FUNC_1(VAR_0, "not enough memory \n");
        FUNC_0(4);
    }
    FUNC_4(VAR_4, VAR_1, VAR_3);
    FUNC_6(VAR_4, VAR_3, VAR_2);
    FUNC_2 (VAR_4);
}

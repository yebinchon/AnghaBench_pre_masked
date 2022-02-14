
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int FUNC_0 (void* const,size_t,char*,int,int,size_t*,int,int *,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (void* const,size_t,double,double,int ) ;
 int FUNC_3 (void* const) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_6(int VAR_0, int VAR_1, double VAR_2)
{
    char VAR_3[20] = {0};
    size_t VAR_4 = 10000000;
    void* const VAR_5 = FUNC_4(VAR_4);


    if (!VAR_5) FUNC_1(21, "not enough memory");


    FUNC_2(VAR_5, VAR_4, VAR_2, 0.0, 0);


    FUNC_5 (VAR_3, sizeof(VAR_3), "Synthetic %2u%%", (unsigned)(VAR_2*100));
    FUNC_0(VAR_5, VAR_4, VAR_3, VAR_0, VAR_1, &VAR_4, 1, ((void*)0), 0);


    FUNC_3(VAR_5);
}

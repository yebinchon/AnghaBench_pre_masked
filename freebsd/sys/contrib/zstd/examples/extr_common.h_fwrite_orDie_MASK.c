
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (void const*,int,size_t,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static size_t FUNC_3(const void* VAR_1, size_t VAR_2, FILE* VAR_3)
{
    size_t const VAR_4 = FUNC_1(VAR_1, 1, VAR_2, VAR_3);
    if (VAR_4 == VAR_2) return VAR_2;

    FUNC_2("fwrite");
    FUNC_0(VAR_0);
}

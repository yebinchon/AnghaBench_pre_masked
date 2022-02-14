
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void* const,size_t const,int ) ;
 int FUNC_2 (int ,void* const,int,int ) ;

__attribute__((used)) static int
FUNC_3(void * const VAR_4, const size_t VAR_5)
{
    int VAR_6;

    FUNC_0(VAR_5 <= 256U);
    do {



        VAR_6 = FUNC_2(VAR_2, VAR_4, (int) VAR_5, 0);

    } while (VAR_6 < 0 && (VAR_3 == VAR_1 || VAR_3 == VAR_0));

    return (VAR_6 == (int) VAR_5) - 1;
}

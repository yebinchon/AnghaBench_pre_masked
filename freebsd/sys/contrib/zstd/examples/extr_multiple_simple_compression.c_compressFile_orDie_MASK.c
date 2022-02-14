
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cBuffer; int fBuffer; int cBufferSize; int cctx; int fBufferSize; } ;
typedef TYPE_1__ resources ;


 int FUNC_0 (size_t const) ;
 size_t FUNC_1 (int ,int ,int ,int ,size_t,int) ;
 size_t FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (char*,char const*,unsigned int,unsigned int,char const*) ;
 int FUNC_4 (char const*,int ,size_t const) ;

__attribute__((used)) static void FUNC_5(resources VAR_0, const char* VAR_1, const char* VAR_2)
{
    size_t VAR_3 = FUNC_2(VAR_1, VAR_0.fBuffer, VAR_0.fBufferSize);





    size_t const VAR_4 = FUNC_1(VAR_0.cctx, VAR_0.cBuffer, VAR_0.cBufferSize, VAR_0.fBuffer, VAR_3, 1);
    FUNC_0(VAR_4);

    FUNC_4(VAR_2, VAR_0.cBuffer, VAR_4);


    FUNC_3("%25s : %6u -> %7u - %s \n", VAR_1, (unsigned)VAR_3, (unsigned)VAR_4, VAR_2);
}

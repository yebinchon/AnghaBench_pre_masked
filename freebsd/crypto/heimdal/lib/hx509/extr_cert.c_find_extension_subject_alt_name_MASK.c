
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int data; } ;
struct TYPE_5__ {TYPE_1__ extnValue; } ;
typedef int GeneralNames ;
typedef TYPE_2__ Extension ;
typedef int Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,size_t*) ;
 TYPE_2__* FUNC_1 (int const*,int *,size_t*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(const Certificate *VAR_2, size_t *VAR_3,
    GeneralNames *VAR_4)
{
    const Extension *VAR_5;
    size_t VAR_6;

    FUNC_2(VAR_4, 0, sizeof(*VAR_4));

    VAR_5 = FUNC_1(VAR_2, &VAR_1, VAR_3);
    if (VAR_5 == ((void*)0))
 return VAR_0;

    return FUNC_0(VAR_5->extnValue.data,
          VAR_5->extnValue.length,
          VAR_4, &VAR_6);
}

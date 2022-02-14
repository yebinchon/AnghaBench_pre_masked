
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int data; } ;
struct TYPE_5__ {TYPE_1__ extnValue; } ;
typedef TYPE_2__ Extension ;
typedef int Certificate ;
typedef int AuthorityKeyIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,size_t*) ;
 TYPE_2__* FUNC_1 (int const*,int *,size_t*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(const Certificate *VAR_2,
      AuthorityKeyIdentifier *VAR_3)
{
    const Extension *VAR_4;
    size_t VAR_5;
    size_t VAR_6 = 0;

    FUNC_2(VAR_3, 0, sizeof(*VAR_3));

    VAR_4 = FUNC_1(VAR_2, &VAR_1, &VAR_6);
    if (VAR_4 == ((void*)0))
 return VAR_0;

    return FUNC_0(VAR_4->extnValue.data,
      VAR_4->extnValue.length,
      VAR_3, &VAR_5);
}

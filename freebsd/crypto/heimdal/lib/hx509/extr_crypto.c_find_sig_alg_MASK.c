
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signature_alg {int sig_oid; } ;
typedef int heim_oid ;


 scalar_t__ FUNC_0 (int ,int const*) ;
 struct signature_alg const** VAR_0 ;

__attribute__((used)) static const struct signature_alg *
FUNC_1(const heim_oid *VAR_1)
{
    unsigned int VAR_2;
    for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
 if (FUNC_0(VAR_0[VAR_2]->sig_oid, VAR_1) == 0)
     return VAR_0[VAR_2];
    return ((void*)0);
}

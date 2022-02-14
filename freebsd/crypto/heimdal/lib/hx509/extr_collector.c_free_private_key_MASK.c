
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_key {int localKeyId; scalar_t__ private_key; int alg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct private_key*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(struct private_key *VAR_0)
{
    FUNC_2(&VAR_0->alg);
    if (VAR_0->private_key)
 FUNC_3(&VAR_0->private_key);
    FUNC_0(&VAR_0->localKeyId);
    FUNC_1(VAR_0);
}

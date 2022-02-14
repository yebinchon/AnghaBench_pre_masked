
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cacherep {int c_xid; int c_hash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct svc_cacherep *VAR_2)
{
 FUNC_2(&VAR_2->c_hash);
 FUNC_1(&VAR_2->c_hash, VAR_0 + FUNC_0(VAR_2->c_xid, VAR_1));
}

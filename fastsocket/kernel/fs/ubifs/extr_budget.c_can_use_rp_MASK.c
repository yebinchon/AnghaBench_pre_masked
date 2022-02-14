
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ rp_uid; scalar_t__ rp_gid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_1)
{
 if (FUNC_1() == VAR_1->rp_uid || FUNC_0(VAR_0) ||
     (VAR_1->rp_gid != 0 && FUNC_2(VAR_1->rp_gid)))
  return 1;
 return 0;
}

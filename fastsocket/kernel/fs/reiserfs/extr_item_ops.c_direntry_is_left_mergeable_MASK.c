
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int k_offset; } ;
struct TYPE_4__ {TYPE_1__ k_offset_v1; } ;
struct reiserfs_key {TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct reiserfs_key *VAR_1,
          unsigned long VAR_2)
{
 if (FUNC_0(VAR_1->u.k_offset_v1.k_offset) == VAR_0)
  return 0;
 return 1;

}

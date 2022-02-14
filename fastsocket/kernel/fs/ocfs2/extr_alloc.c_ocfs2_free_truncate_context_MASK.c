
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * c_first_suballocator; } ;
struct ocfs2_truncate_context {int tc_last_eb_bh; TYPE_1__ tc_dealloc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_truncate_context*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_truncate_context *VAR_1)
{




 if (VAR_1->tc_dealloc.c_first_suballocator != ((void*)0))
  FUNC_2(VAR_0,
       "Truncate completion has non-empty dealloc context\n");

 FUNC_0(VAR_1->tc_last_eb_bh);

 FUNC_1(VAR_1);
}

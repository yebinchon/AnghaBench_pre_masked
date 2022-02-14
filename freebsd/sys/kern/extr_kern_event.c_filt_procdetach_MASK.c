
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * p_proc; } ;
struct knote {TYPE_1__ kn_ptr; int kn_knlist; } ;


 int FUNC_0 (int ,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{

 FUNC_0(VAR_0->kn_knlist, VAR_0, 0);
 VAR_0->kn_ptr.p_proc = ((void*)0);
}

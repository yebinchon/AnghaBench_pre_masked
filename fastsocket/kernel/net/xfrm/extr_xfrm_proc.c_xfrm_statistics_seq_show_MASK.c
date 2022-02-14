
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_3__ {scalar_t__ xfrm_statistics; } ;
struct net {TYPE_1__ mib; } ;
struct TYPE_4__ {int entry; scalar_t__ name; } ;


 int FUNC_0 (struct seq_file*,char*,scalar_t__,int ) ;
 int FUNC_1 (void**,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct net *VAR_3 = VAR_1->private;
 int VAR_4;
 for (VAR_4=0; VAR_0[VAR_4].name; VAR_4++)
  FUNC_0(VAR_1, "%-24s\t%lu\n", VAR_0[VAR_4].name,
      FUNC_1((void **)VAR_3->mib.xfrm_statistics,
        VAR_0[VAR_4].entry));
 return 0;
}

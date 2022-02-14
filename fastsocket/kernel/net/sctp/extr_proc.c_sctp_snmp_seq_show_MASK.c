
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int entry; int * name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int *,int ) ;
 int FUNC_1 (void**,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_0[VAR_4].name != ((void*)0); VAR_4++)
  FUNC_0(VAR_2, "%-32s\t%ld\n", VAR_0[VAR_4].name,
      FUNC_1((void **)VAR_1,
          VAR_0[VAR_4].entry));

 return 0;
}

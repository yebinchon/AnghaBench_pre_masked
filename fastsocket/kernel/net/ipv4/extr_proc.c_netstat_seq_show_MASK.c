
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_4__ {scalar_t__ ip_statistics; scalar_t__ net_statistics; } ;
struct net {TYPE_1__ mib; } ;
struct TYPE_6__ {int entry; int * name; } ;
struct TYPE_5__ {int entry; int * name; } ;


 int FUNC_0 (struct seq_file*,char*,int *) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * FUNC_3 (void**,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 int VAR_4;
 struct net *VAR_5 = VAR_2->private;

 FUNC_2(VAR_2, "TcpExt:");
 for (VAR_4 = 0; VAR_1[VAR_4].name != ((void*)0); VAR_4++)
  FUNC_0(VAR_2, " %s", VAR_1[VAR_4].name);

 FUNC_2(VAR_2, "\nTcpExt:");
 for (VAR_4 = 0; VAR_1[VAR_4].name != ((void*)0); VAR_4++)
  FUNC_0(VAR_2, " %lu",
      FUNC_3((void **)VAR_5->mib.net_statistics,
        VAR_1[VAR_4].entry));

 FUNC_2(VAR_2, "\nIpExt:");
 for (VAR_4 = 0; VAR_0[VAR_4].name != ((void*)0); VAR_4++)
  FUNC_0(VAR_2, " %s", VAR_0[VAR_4].name);

 FUNC_2(VAR_2, "\nIpExt:");
 for (VAR_4 = 0; VAR_0[VAR_4].name != ((void*)0); VAR_4++)
  FUNC_0(VAR_2, " %lu",
      FUNC_3((void **)VAR_5->mib.ip_statistics,
        VAR_0[VAR_4].entry));

 FUNC_1(VAR_2, '\n');
 return 0;
}

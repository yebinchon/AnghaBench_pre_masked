
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_5__ {scalar_t__ udplite_statistics; scalar_t__ udp_statistics; scalar_t__ tcp_statistics; scalar_t__ ip_statistics; } ;
struct net {TYPE_1__ mib; } ;
struct TYPE_8__ {scalar_t__ entry; int * name; } ;
struct TYPE_7__ {scalar_t__ entry; int * name; } ;
struct TYPE_6__ {scalar_t__ entry; int * name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct seq_file*) ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (struct seq_file*,char*,int,...) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char*) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int * FUNC_6 (void**,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_6, void *VAR_7)
{
 int VAR_8;
 struct net *VAR_9 = VAR_6->private;

 FUNC_5(VAR_6, "Ip: Forwarding DefaultTTL");

 for (VAR_8 = 0; VAR_2[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_3(VAR_6, " %s", *VAR_2[VAR_8].name);

 FUNC_3(VAR_6, "\nIp: %d %d",
     FUNC_0(VAR_9, VAR_0) ? 1 : 2,
     VAR_5);

 for (VAR_8 = 0; VAR_2[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_3(VAR_6, " %lu",
      *FUNC_6((void **)VAR_9->mib.ip_statistics,
        VAR_2[VAR_8].entry));

 FUNC_1(VAR_6);
 FUNC_2(VAR_6);

 FUNC_5(VAR_6, "\nTcp:");
 for (VAR_8 = 0; VAR_3[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_3(VAR_6, " %s", *VAR_3[VAR_8].name);

 FUNC_5(VAR_6, "\nTcp:");
 for (VAR_8 = 0; VAR_3[VAR_8].name != ((void*)0); VAR_8++) {

  if (VAR_3[VAR_8].entry == VAR_1)
   FUNC_3(VAR_6, " %ld",
       *FUNC_6((void **)VAR_9->mib.tcp_statistics,
         VAR_3[VAR_8].entry));
  else
   FUNC_3(VAR_6, " %lu",
       *FUNC_6((void **)VAR_9->mib.tcp_statistics,
         VAR_3[VAR_8].entry));
 }

 FUNC_5(VAR_6, "\nUdp:");
 for (VAR_8 = 0; VAR_4[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_3(VAR_6, " %s", *VAR_4[VAR_8].name);

 FUNC_5(VAR_6, "\nUdp:");
 for (VAR_8 = 0; VAR_4[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_3(VAR_6, " %lu",
      *FUNC_6((void **)VAR_9->mib.udp_statistics,
        VAR_4[VAR_8].entry));


 FUNC_5(VAR_6, "\nUdpLite:");
 for (VAR_8 = 0; VAR_4[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_3(VAR_6, " %s", *VAR_4[VAR_8].name);

 FUNC_5(VAR_6, "\nUdpLite:");
 for (VAR_8 = 0; VAR_4[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_3(VAR_6, " %lu",
      *FUNC_6((void **)VAR_9->mib.udplite_statistics,
        VAR_4[VAR_8].entry));

 FUNC_4(VAR_6, '\n');
 return 0;
}

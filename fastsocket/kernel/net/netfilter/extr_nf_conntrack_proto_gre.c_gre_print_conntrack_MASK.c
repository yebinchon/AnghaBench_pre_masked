
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int timeout; int stream_timeout; } ;
struct TYPE_4__ {TYPE_1__ gre; } ;
struct nf_conn {TYPE_2__ proto; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, struct nf_conn *VAR_2)
{
 return FUNC_0(VAR_1, "timeout=%u, stream_timeout=%u ",
     (VAR_2->proto.gre.timeout / VAR_0),
     (VAR_2->proto.gre.stream_timeout / VAR_0));
}

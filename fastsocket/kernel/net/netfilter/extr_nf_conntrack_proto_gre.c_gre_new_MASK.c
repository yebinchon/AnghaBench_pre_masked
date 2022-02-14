
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {int timeout; int stream_timeout; } ;
struct TYPE_6__ {TYPE_2__ gre; } ;
struct nf_conn {TYPE_3__ proto; TYPE_1__* tuplehash; } ;
struct TYPE_4__ {int tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct nf_conn *VAR_3, const struct sk_buff *VAR_4,
      unsigned int VAR_5)
{
 FUNC_1(": ");
 FUNC_0(&VAR_3->tuplehash[VAR_2].tuple);



 VAR_3->proto.gre.stream_timeout = VAR_0;
 VAR_3->proto.gre.timeout = VAR_1;

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int port; } ;
struct TYPE_6__ {TYPE_2__ tcp; } ;
struct TYPE_4__ {int ip; } ;
struct nf_conntrack_man {TYPE_3__ u; TYPE_1__ u3; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,size_t,int*,int,char,char) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, size_t VAR_1,
        struct nf_conntrack_man *VAR_2, char VAR_3)
{
 int VAR_4;
 u_int32_t VAR_5[6];

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_5, 6, ',', VAR_3);
 if (VAR_4 == 0)
  return 0;

 VAR_2->u3.ip = FUNC_0((VAR_5[0] << 24) | (VAR_5[1] << 16) |
        (VAR_5[2] << 8) | VAR_5[3]);
 VAR_2->u.tcp.port = FUNC_1((VAR_5[4] << 8) | VAR_5[5]);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct proto_md {int bd_map; int bd_tag; int physaddr; } ;
struct TYPE_3__ {int op; } ;
struct TYPE_4__ {TYPE_1__ sync; } ;
struct proto_ioc_busdma {TYPE_2__ u; } ;
struct proto_busdma {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct proto_busdma *VAR_6, struct proto_md *VAR_7,
    struct proto_ioc_busdma *VAR_8)
{
 u_int VAR_9;

 VAR_9 = VAR_2 | VAR_3 |
     VAR_0 | VAR_1;
 if (VAR_8->u.sync.op & ~VAR_9)
  return (VAR_4);
 if (!VAR_7->physaddr)
  return (VAR_5);
 FUNC_0(VAR_7->bd_tag, VAR_7->bd_map, VAR_8->u.sync.op);
 return (0);
}

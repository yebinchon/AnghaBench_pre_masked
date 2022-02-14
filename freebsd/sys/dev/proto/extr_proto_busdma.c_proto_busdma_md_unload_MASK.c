
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_md {scalar_t__ physaddr; int bd_map; int bd_tag; } ;
struct proto_busdma {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct proto_busdma *VAR_1, struct proto_md *VAR_2)
{

 if (!VAR_2->physaddr)
  return (VAR_0);
 FUNC_0(VAR_2->bd_tag, VAR_2->bd_map);
 VAR_2->physaddr = 0;
 return (0);
}

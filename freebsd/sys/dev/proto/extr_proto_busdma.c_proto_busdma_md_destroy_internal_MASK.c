
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_md {int bd_tag; int bd_map; int * virtaddr; scalar_t__ physaddr; } ;
struct proto_busdma {int dummy; } ;


 int FUNC_0 (struct proto_md*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct proto_md*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct proto_busdma *VAR_3,
    struct proto_md *VAR_4)
{

 FUNC_0(VAR_4, VAR_1);
 FUNC_0(VAR_4, VAR_2);
 if (VAR_4->physaddr)
  FUNC_3(VAR_4->bd_tag, VAR_4->bd_map);
 if (VAR_4->virtaddr != ((void*)0))
  FUNC_4(VAR_4->bd_tag, VAR_4->virtaddr, VAR_4->bd_map);
 else
  FUNC_2(VAR_4->bd_tag, VAR_4->bd_map);
 FUNC_1(VAR_4->bd_tag);
 FUNC_5(VAR_4, VAR_0);
 return (0);
}

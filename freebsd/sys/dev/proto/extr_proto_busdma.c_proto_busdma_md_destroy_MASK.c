
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_md {int * virtaddr; } ;
struct proto_busdma {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct proto_busdma*,struct proto_md*) ;

__attribute__((used)) static int
FUNC_1(struct proto_busdma *VAR_1, struct proto_md *VAR_2)
{

 if (VAR_2->virtaddr != ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_1, VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct areltdata {scalar_t__ arch_header; } ;
struct ar_hdr {int dummy; } ;
typedef int bfd ;


 struct areltdata* FUNC_0 (int *,char const*,int ) ;

struct ar_hdr *
FUNC_1 (bfd *VAR_0, const char *VAR_1)
{
  struct areltdata *VAR_2 = FUNC_0 (VAR_0, VAR_1, 0);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  return (struct ar_hdr *) VAR_2->arch_header;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_opt_hdr {int hdrlen; } ;


 int FUNC_0 (struct ipv6_opt_hdr*,struct ipv6_opt_hdr*,int) ;

__attribute__((used)) static int FUNC_1(struct ipv6_opt_hdr *VAR_0, struct ipv6_opt_hdr *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 0;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 1;
 if (VAR_0->hdrlen != VAR_1->hdrlen)
  return 1;
 return FUNC_0(VAR_0+1, VAR_1+1, ((VAR_0->hdrlen+1)<<3) - sizeof(*VAR_0));
}

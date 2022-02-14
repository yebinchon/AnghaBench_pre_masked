
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_opt_hdr {int nd_opt_len; } ;


 scalar_t__ FUNC_0 (struct nd_opt_hdr*) ;

__attribute__((used)) static struct nd_opt_hdr *FUNC_1(struct nd_opt_hdr *VAR_0,
          struct nd_opt_hdr *VAR_1)
{
 if (!VAR_0 || !VAR_1 || VAR_0 >= VAR_1)
  return ((void*)0);
 do {
  VAR_0 = ((void *)VAR_0) + (VAR_0->nd_opt_len << 3);
 } while(VAR_0 < VAR_1 && !FUNC_0(VAR_0));
 return (VAR_0 <= VAR_1 && FUNC_0(VAR_0) ? VAR_0 : ((void*)0));
}

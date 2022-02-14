
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ip {int ip_p; } ;


 int FUNC_0 (struct ip*) ;
 int FUNC_1 (char*,int const,int const) ;

__attribute__((used)) static void
FUNC_2(struct ip *VAR_0, const u_char *VAR_1)
{
 FUNC_0(VAR_0);

 if (VAR_0->ip_p == 6)
  (void)FUNC_1("TCP: from port %u, to port %u (decimal)\n",
      (*VAR_1 * 256 + *(VAR_1 + 1)), (*(VAR_1 + 2) * 256 + *(VAR_1 + 3)));
 else if (VAR_0->ip_p == 17)
  (void)FUNC_1("UDP: from port %u, to port %u (decimal)\n",
   (*VAR_1 * 256 + *(VAR_1 + 1)), (*(VAR_1 + 2) * 256 + *(VAR_1 + 3)));
}

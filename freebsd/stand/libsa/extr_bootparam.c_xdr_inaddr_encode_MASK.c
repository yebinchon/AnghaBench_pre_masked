
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct xdr_inaddr {int * addr; void* atype; } ;
struct in_addr {int s_addr; } ;
typedef int n_long ;
typedef int int32_t ;


 void* FUNC_0 (unsigned int) ;

int
FUNC_1(char **VAR_0, struct in_addr VAR_1)
{
 struct xdr_inaddr *VAR_2;
 u_char *VAR_3;
 int32_t *VAR_4;
 union {
  n_long l;
  u_char c[4];
 } VAR_5;


 VAR_2 = (struct xdr_inaddr *) *VAR_0;
 *VAR_0 += sizeof(*VAR_2);
 VAR_2->atype = FUNC_0(1);
 VAR_5.l = VAR_1.s_addr;
 VAR_3 = VAR_5.c;
 VAR_4 = VAR_2->addr;





 *VAR_4++ = FUNC_0((unsigned int)*VAR_3++);
 *VAR_4++ = FUNC_0((unsigned int)*VAR_3++);
 *VAR_4++ = FUNC_0((unsigned int)*VAR_3++);
 *VAR_4++ = FUNC_0((unsigned int)*VAR_3++);

 return (0);
}

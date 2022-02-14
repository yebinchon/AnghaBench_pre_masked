
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct mbuf {int dummy; } ;
struct bpf_d {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct mbuf const*,int ,int,int *) ;

void
FUNC_1(struct bpf_d *VAR_0, caddr_t VAR_1, u_int VAR_2, void *VAR_3,
    u_int VAR_4)
{
 const struct mbuf *VAR_5;
 u_char *VAR_6;

 VAR_5 = (struct mbuf *)VAR_3;
 VAR_6 = (u_char *)VAR_1 + VAR_2;
 FUNC_0(VAR_5, 0, VAR_4, VAR_6);
}

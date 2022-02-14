
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_krl {int revoked_certs; int revoked_sha1s; int revoked_keys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ssh_krl* FUNC_2 (int,int) ;

struct ssh_krl *
FUNC_3(void)
{
 struct ssh_krl *VAR_0;

 if ((VAR_0 = FUNC_2(1, sizeof(*VAR_0))) == ((void*)0))
  return ((void*)0);
 FUNC_0(&VAR_0->revoked_keys);
 FUNC_0(&VAR_0->revoked_sha1s);
 FUNC_1(&VAR_0->revoked_certs);
 return VAR_0;
}

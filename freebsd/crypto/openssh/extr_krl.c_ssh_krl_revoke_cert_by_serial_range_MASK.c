
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct sshkey {int dummy; } ;
struct ssh_krl {int dummy; } ;
struct revoked_certs {int revoked_serials; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct ssh_krl*,struct sshkey const*,struct revoked_certs**,int) ;

int
FUNC_2(struct ssh_krl *VAR_1,
    const struct sshkey *VAR_2, u_int64_t VAR_3, u_int64_t VAR_4)
{
 struct revoked_certs *VAR_5;
 int VAR_6;

 if (VAR_3 > VAR_4 || VAR_3 == 0)
  return VAR_0;
 if ((VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, 1)) != 0)
  return VAR_6;
 return FUNC_0(&VAR_5->revoked_serials, VAR_3, VAR_4);
}

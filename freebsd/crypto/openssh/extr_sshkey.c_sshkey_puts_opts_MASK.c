
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
typedef enum sshkey_serialize_rep { ____Placeholder_sshkey_serialize_rep } sshkey_serialize_rep ;


 int VAR_0 ;
 int FUNC_0 (struct sshbuf*) ;
 struct sshbuf* FUNC_1 () ;
 int FUNC_2 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_3 (struct sshkey const*,struct sshbuf*,int ,int) ;

int
FUNC_4(const struct sshkey *VAR_1, struct sshbuf *VAR_2,
    enum sshkey_serialize_rep VAR_3)
{
 struct sshbuf *VAR_4;
 int VAR_5;

 if ((VAR_4 = FUNC_1()) == ((void*)0))
  return VAR_0;
 VAR_5 = FUNC_3(VAR_1, VAR_4, 0, VAR_3);
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_2, VAR_4);
 FUNC_0(VAR_4);
 return VAR_5;
}

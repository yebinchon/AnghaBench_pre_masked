
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
typedef enum sshkey_serialize_rep { ____Placeholder_sshkey_serialize_rep } sshkey_serialize_rep ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (struct sshbuf*) ;
 size_t FUNC_3 (struct sshbuf*) ;
 struct sshbuf* FUNC_4 () ;
 int FUNC_5 (struct sshbuf*) ;
 int FUNC_6 (struct sshkey const*,struct sshbuf*,int,int) ;

__attribute__((used)) static int
FUNC_7(const struct sshkey *VAR_2, u_char **VAR_3, size_t *VAR_4, int VAR_5,
    enum sshkey_serialize_rep VAR_6)
{
 int VAR_7 = VAR_1;
 size_t VAR_8;
 struct sshbuf *VAR_9 = ((void*)0);

 if (VAR_4 != ((void*)0))
  *VAR_4 = 0;
 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if ((VAR_9 = FUNC_4()) == ((void*)0))
  return VAR_0;
 if ((VAR_7 = FUNC_6(VAR_2, VAR_9, VAR_5, VAR_6)) != 0)
  goto out;
 VAR_8 = FUNC_3(VAR_9);
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8;
 if (VAR_3 != ((void*)0)) {
  if ((*VAR_3 = FUNC_0(VAR_8)) == ((void*)0)) {
   VAR_7 = VAR_0;
   goto out;
  }
  FUNC_1(*VAR_3, FUNC_5(VAR_9), VAR_8);
 }
 VAR_7 = 0;
 out:
 FUNC_2(VAR_9);
 return VAR_7;
}

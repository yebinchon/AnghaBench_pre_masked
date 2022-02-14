
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef scalar_t__ u_char ;
struct sshbuf {int dummy; } ;
struct ssh_identitylist {size_t nkeys; int * comments; int * keys; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 (struct sshbuf*,int *,int *) ;
 int FUNC_3 (struct ssh_identitylist*) ;
 int FUNC_4 (int,struct sshbuf*,struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*) ;
 int FUNC_6 (struct sshbuf*,size_t*) ;
 int FUNC_7 (struct sshbuf*,scalar_t__*) ;
 struct sshbuf* FUNC_8 () ;
 int FUNC_9 (struct sshbuf*,int ) ;

int
FUNC_10(int VAR_8, struct ssh_identitylist **VAR_9)
{
 u_char VAR_10;
 u_int32_t VAR_11, VAR_12;
 struct sshbuf *VAR_13;
 struct ssh_identitylist *VAR_14 = ((void*)0);
 int VAR_15;





 if ((VAR_13 = FUNC_8()) == ((void*)0))
  return VAR_5;
 if ((VAR_15 = FUNC_9(VAR_13, VAR_1)) != 0)
  goto out;

 if ((VAR_15 = FUNC_4(VAR_8, VAR_13, VAR_13)) != 0)
  goto out;


 if ((VAR_15 = FUNC_7(VAR_13, &VAR_10)) != 0)
  goto out;
 if (FUNC_0(VAR_10)) {
  VAR_15 = VAR_3;
  goto out;
 } else if (VAR_10 != VAR_2) {
  VAR_15 = VAR_6;
  goto out;
 }


 if ((VAR_15 = FUNC_6(VAR_13, &VAR_11)) != 0)
  goto out;
 if (VAR_11 > VAR_0) {
  VAR_15 = VAR_6;
  goto out;
 }
 if (VAR_11 == 0) {
  VAR_15 = VAR_4;
  goto out;
 }


 if ((VAR_14 = FUNC_1(1, sizeof(*VAR_14))) == ((void*)0) ||
     (VAR_14->keys = FUNC_1(VAR_11, sizeof(*VAR_14->keys))) == ((void*)0) ||
     (VAR_14->comments = FUNC_1(VAR_11, sizeof(*VAR_14->comments))) == ((void*)0)) {
  VAR_15 = VAR_5;
  goto out;
 }
 for (VAR_12 = 0; VAR_12 < VAR_11;) {
  if ((VAR_15 = FUNC_2(VAR_13, &(VAR_14->keys[VAR_12]),
      &(VAR_14->comments[VAR_12]))) != 0) {
   if (VAR_15 == VAR_7) {

    VAR_11--;
    continue;
   } else
    goto out;
  }
  VAR_12++;
 }
 VAR_14->nkeys = VAR_11;
 *VAR_9 = VAR_14;
 VAR_14 = ((void*)0);
 VAR_15 = 0;
 out:
 FUNC_5(VAR_13);
 if (VAR_14 != ((void*)0))
  FUNC_3(VAR_14);
 return VAR_15;
}

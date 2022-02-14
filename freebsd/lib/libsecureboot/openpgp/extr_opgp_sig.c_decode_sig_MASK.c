
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {unsigned char* pgpbytes; int pgpbytes_len; int sig_alg; int sig_len; int sig; void* key_id; int hash_alg; int sig_type; } ;
typedef TYPE_1__ OpenPGP_sig ;


 int FUNC_0 (unsigned char**,int *) ;
 unsigned char* FUNC_1 (unsigned char**,int*,int*) ;
 int FUNC_2 (void*) ;
 unsigned char* FUNC_3 (int,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 void* FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int) ;

ssize_t
FUNC_8(int VAR_0, unsigned char **VAR_1, size_t VAR_2, OpenPGP_sig *VAR_3)
{
 unsigned char *VAR_4;
 unsigned char *VAR_5;
 unsigned char *VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;

 VAR_11 = VAR_0;







 VAR_5 = VAR_4 = *VAR_1;
 VAR_7 = *VAR_4++;
 if (VAR_7 == 3) {
  VAR_4++;
  VAR_3->pgpbytes = FUNC_4(5);
  if (!VAR_3->pgpbytes)
   return (-1);
  FUNC_5(VAR_3->pgpbytes, VAR_4, 5);
  VAR_3->pgpbytes_len = 5;
  VAR_3->sig_type = *VAR_4++;
  VAR_4 += 4;
  VAR_3->key_id = FUNC_6(VAR_4, 8);
  VAR_4 += 8;
  VAR_3->sig_alg = *VAR_4++;
  VAR_3->hash_alg = *VAR_4++;
 } else if (VAR_7 == 4) {
  VAR_3->sig_type = *VAR_4++;
  VAR_3->sig_alg = *VAR_4++;
  VAR_3->hash_alg = *VAR_4++;
  VAR_8 = FUNC_7(VAR_4, 2);
  VAR_4 += 2;
  VAR_3->pgpbytes_len = (size_t)VAR_8 + 6;
  VAR_3->pgpbytes = FUNC_4(VAR_3->pgpbytes_len + 6);
  if (!VAR_3->pgpbytes)
   return (-1);
  FUNC_5(VAR_3->pgpbytes, VAR_5, VAR_3->pgpbytes_len);
  VAR_6 = &VAR_3->pgpbytes[VAR_3->pgpbytes_len];
  *VAR_6++ = 4;
  *VAR_6++ = 255;
  FUNC_5(VAR_6, FUNC_3(4, (int)VAR_3->pgpbytes_len), 4);
  VAR_3->pgpbytes_len += 6;

  while (VAR_8 > 0) {
   VAR_6 = FUNC_1(&VAR_4, &VAR_10, &VAR_11);
   VAR_8 -= VAR_11;

  }
  VAR_9 = FUNC_7(VAR_4, 2);
  VAR_4 += 2;
  while (VAR_9 > 0) {
   VAR_6 = FUNC_1(&VAR_4, &VAR_10, &VAR_11);
   VAR_9 -= VAR_11;

   if (VAR_10 == 16) {
    FUNC_2(VAR_3->key_id);
    VAR_3->key_id = FUNC_6(VAR_6, 8);
   }
  }
 } else
  return (-1);
 VAR_4 += 2;
 if (VAR_3->sig_alg == 1) {
  VAR_3->sig = FUNC_0(&VAR_4, &VAR_3->sig_len);
 }

 return ((ssize_t)VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ssize_t ;
typedef int mdata ;
typedef int br_sha1_context ;
struct TYPE_14__ {int elen; void* e; int nlen; void* n; } ;
struct TYPE_13__ {int sig_alg; TYPE_3__* key; int id; } ;
struct TYPE_12__ {void* e; void* n; } ;
typedef TYPE_1__ RSA ;
typedef TYPE_2__ OpenPGP_key ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int * FUNC_6 (char*) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 () ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned char*) ;
 int FUNC_12 (int *,unsigned char*,size_t) ;
 int VAR_3 ;
 int FUNC_13 (TYPE_3__*) ;
 void* FUNC_14 (unsigned char**,...) ;
 int FUNC_15 (unsigned char*,int) ;

ssize_t
FUNC_16(int VAR_4, unsigned char **VAR_5, size_t VAR_6, OpenPGP_key *VAR_7)
{
 unsigned char *VAR_8;
 int VAR_9;





 RSA *VAR_10 = ((void*)0);
 const EVP_MD *VAR_11 = ((void*)0);
 EVP_MD_CTX VAR_12;
 unsigned char VAR_13[VAR_0];
 unsigned int VAR_14;


 if (VAR_4 != 6)
  return (-1);

 VAR_7->key = ((void*)0);
 VAR_8 = *VAR_5;
 VAR_9 = *VAR_8;
 if (VAR_9 == 4) {

  VAR_13[0] = 0x99;
  VAR_13[1] = (VAR_6 >> 8) & 0xff;
  VAR_13[2] = VAR_6 & 0xff;
  VAR_11 = FUNC_6("sha1");
  FUNC_1(&VAR_12, VAR_11);
  FUNC_2(&VAR_12, VAR_13, 3);
  FUNC_2(&VAR_12, VAR_8, VAR_6);
  VAR_14 = (unsigned int)sizeof(VAR_13);
  FUNC_0(&VAR_12, VAR_13, &VAR_14);

  VAR_7->id = FUNC_15(&VAR_13[VAR_14 - 8], 8);
 }
 VAR_8 += 1;
 VAR_8 += 4;
 if (VAR_9 == 3)
  VAR_8 += 2;
 VAR_7->sig_alg = *VAR_8++;
 if (VAR_7->sig_alg == 1) {







  VAR_10 = FUNC_9();
  if (!VAR_10)
   goto oops;
  VAR_10->n = FUNC_14(&VAR_8);
  VAR_10->e = FUNC_14(&VAR_8);
  VAR_7->key = FUNC_4();
  if (!VAR_7->key || !VAR_10->n || !VAR_10->e) {
   goto oops;
  }
  if (!FUNC_5(VAR_7->key, VAR_10))
   goto oops;

 }

 return ((ssize_t)VAR_6);
oops:




 if (VAR_10)
  FUNC_8(VAR_10);
 if (VAR_7->key) {
  FUNC_3(VAR_7->key);
  VAR_7->key = ((void*)0);
 }

 return (-1);
}

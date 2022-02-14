
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union authctx {int dummy; } authctx ;
typedef size_t u_int ;
struct auth_hash {int blocksize; int hashsize; int type; int (* Update ) (union authctx*,char*,int) ;int (* Init ) (union authctx*) ;int (* Final ) (char*,union authctx*) ;} ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (union authctx*) ;
 int FUNC_4 (union authctx*,char*,int) ;
 int FUNC_5 (char*,union authctx*) ;
 int FUNC_6 (union authctx*) ;
 int FUNC_7 (union authctx*,char*,int) ;
 int FUNC_8 (union authctx*) ;
 int FUNC_9 (union authctx*,char*,int) ;
 int FUNC_10 (int ,union authctx*,char*) ;

void
FUNC_11(struct auth_hash *VAR_3, u_int VAR_4,
    char *VAR_5, int VAR_6, char *VAR_7)
{
 union authctx VAR_8;
 char VAR_9[VAR_2], VAR_10[VAR_2];
 u_int VAR_11;





 VAR_6 /= 8;
 if (VAR_6 > VAR_3->blocksize) {
  VAR_3->Init(&VAR_8);
  VAR_3->Update(&VAR_8, VAR_5, VAR_6);
  VAR_3->Final(VAR_9, &VAR_8);
  VAR_6 = VAR_3->hashsize;
 } else
  FUNC_0(VAR_9, VAR_5, VAR_6);

 FUNC_1(VAR_9 + VAR_6, 0, VAR_3->blocksize - VAR_6);
 FUNC_0(VAR_10, VAR_9, VAR_3->blocksize);

 for (VAR_11 = 0; VAR_11 < VAR_3->blocksize; VAR_11++) {
  VAR_9[VAR_11] ^= VAR_0;
  VAR_10[VAR_11] ^= VAR_1;
 }





 VAR_3->Init(&VAR_8);
 VAR_3->Update(&VAR_8, VAR_9, VAR_3->blocksize);
 FUNC_10(VAR_3->type, &VAR_8, VAR_7);

 VAR_7 += FUNC_2(VAR_4, 16);
 VAR_3->Init(&VAR_8);
 VAR_3->Update(&VAR_8, VAR_10, VAR_3->blocksize);
 FUNC_10(VAR_3->type, &VAR_8, VAR_7);
}

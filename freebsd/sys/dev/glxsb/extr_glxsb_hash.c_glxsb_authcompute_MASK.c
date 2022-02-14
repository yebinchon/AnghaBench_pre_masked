
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union authctx {int dummy; } authctx ;
typedef int u_char ;
struct glxsb_session {int ses_mlen; int ses_octx; int ses_ictx; struct auth_hash* ses_axf; } ;
struct cryptodesc {int crd_inject; int crd_len; int crd_skip; } ;
struct auth_hash {int hashsize; int (* Final ) (int *,union authctx*) ;int (* Update ) (union authctx*,int *,int ) ;int ctxsize; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,union authctx*,int ) ;
 int FUNC_1 (int,int ,int ,int ,int (*) (void*,void*,unsigned int),int ) ;
 int FUNC_2 (int,int ,int ,int ,int *) ;
 int FUNC_3 (int *,union authctx*) ;
 int FUNC_4 (union authctx*,int *,int ) ;
 int FUNC_5 (int *,union authctx*) ;

__attribute__((used)) static int
FUNC_6(struct glxsb_session *VAR_1, struct cryptodesc *VAR_2,
    caddr_t VAR_3, int VAR_4)
{
 u_char VAR_5[VAR_0];
 struct auth_hash *VAR_6;
 union authctx VAR_7;
 int VAR_8;

 VAR_6 = VAR_1->ses_axf;
 FUNC_0(VAR_1->ses_ictx, &VAR_7, VAR_6->ctxsize);
 VAR_8 = FUNC_1(VAR_4, VAR_3, VAR_2->crd_skip, VAR_2->crd_len,
     (int (*)(void *, void *, unsigned int))VAR_6->Update, (caddr_t)&VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_6->Final(VAR_5, &VAR_7);

 FUNC_0(VAR_1->ses_octx, &VAR_7, VAR_6->ctxsize);
 VAR_6->Update(&VAR_7, VAR_5, VAR_6->hashsize);
 VAR_6->Final(VAR_5, &VAR_7);


 FUNC_2(VAR_4, VAR_3, VAR_2->crd_inject,
 VAR_1->ses_mlen == 0 ? VAR_6->hashsize : VAR_1->ses_mlen, VAR_5);
 return (0);
}

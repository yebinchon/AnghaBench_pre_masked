
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlp_sec_softc {int dummy; } ;
struct xlp_sec_command {int iv; TYPE_1__* ses; struct cryptop* crp; } ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {scalar_t__ crd_alg; int crd_flags; int crd_inject; int crd_iv; } ;
struct TYPE_2__ {int ses_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,int ,unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_3(struct xlp_sec_softc *VAR_7, struct xlp_sec_command *VAR_8,
    struct cryptodesc *VAR_9)
{
 unsigned int VAR_10 = 0;
 struct cryptop *VAR_11 = ((void*)0);

 VAR_11 = VAR_8->crp;

 if (VAR_9->crd_alg != VAR_4) {
  VAR_10 = ((VAR_9->crd_alg == VAR_3) ?
      VAR_5 : VAR_6);
  if (VAR_9->crd_flags & VAR_0) {
   if (VAR_9->crd_flags & VAR_1) {
    FUNC_0(VAR_9->crd_iv, VAR_8->iv, VAR_10);
   } else {
    FUNC_0(VAR_8->ses->ses_iv, VAR_8->iv, VAR_10);
   }
   if ((VAR_9->crd_flags & VAR_2) == 0) {
    FUNC_1(VAR_11->crp_flags,
        VAR_11->crp_buf, VAR_9->crd_inject,
        VAR_10, VAR_8->iv);
   }
  } else {
   if (VAR_9->crd_flags & VAR_1) {
    FUNC_0(VAR_9->crd_iv, VAR_8->iv, VAR_10);
   } else {
    FUNC_2(VAR_11->crp_flags, VAR_11->crp_buf,
        VAR_9->crd_inject, VAR_10, VAR_8->iv);
   }
  }
 }
 return (0);
}

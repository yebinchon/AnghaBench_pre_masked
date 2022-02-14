
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kerneldumpheader {scalar_t__ parity; int dumplength; } ;
struct dumperinfo {TYPE_1__* kdcomp; scalar_t__ origdumpoff; scalar_t__ dumpoff; int blocksize; int * blockbuf; } ;
struct TYPE_2__ {int kdc_stream; scalar_t__ kdc_resid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dumperinfo*,int *,int ,scalar_t__,int ) ;
 int FUNC_3 (struct dumperinfo*,struct kerneldumpheader*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct kerneldumpheader*) ;

int
FUNC_6(struct dumperinfo *VAR_1, struct kerneldumpheader *VAR_2)
{
 int VAR_3;

 if (VAR_1->kdcomp != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_1->kdcomp->kdc_stream);
  if (VAR_3 == VAR_0) {

   VAR_3 = FUNC_2(VAR_1, VAR_1->blockbuf, 0, VAR_1->dumpoff,
       VAR_1->blocksize);
   VAR_1->dumpoff += VAR_1->kdcomp->kdc_resid;
   VAR_1->kdcomp->kdc_resid = 0;
  }
  if (VAR_3 != 0)
   return (VAR_3);





  VAR_2->dumplength = FUNC_4(VAR_1->dumpoff - VAR_1->origdumpoff);
  VAR_2->parity = 0;
  VAR_2->parity = FUNC_5(VAR_2);

  FUNC_1(VAR_1->kdcomp->kdc_stream);
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);

 (void)FUNC_2(VAR_1, ((void*)0), 0, 0, 0);
 return (0);
}

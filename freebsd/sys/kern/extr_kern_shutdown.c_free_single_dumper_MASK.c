
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumperinfo {int blocksize; int kdc_dumpkeysize; struct dumperinfo* kdcrypto; struct dumperinfo* blockbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dumperinfo*,int) ;
 int FUNC_1 (struct dumperinfo*,int ) ;
 int FUNC_2 (struct dumperinfo*) ;

__attribute__((used)) static void
FUNC_3(struct dumperinfo *VAR_2)
{

 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->blockbuf != ((void*)0)) {
  FUNC_0(VAR_2->blockbuf, VAR_2->blocksize);
  FUNC_1(VAR_2->blockbuf, VAR_0);
 }

 FUNC_2(VAR_2);
 FUNC_0(VAR_2, sizeof(*VAR_2));
 FUNC_1(VAR_2, VAR_0);
}

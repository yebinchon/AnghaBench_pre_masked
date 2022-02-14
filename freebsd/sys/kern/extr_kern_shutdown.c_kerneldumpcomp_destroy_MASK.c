
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kerneldumpcomp {struct kerneldumpcomp* kdc_buf; int kdc_stream; } ;
struct dumperinfo {int maxiosize; struct kerneldumpcomp* kdcomp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kerneldumpcomp*,int ) ;
 int FUNC_2 (struct kerneldumpcomp*,int ) ;

__attribute__((used)) static void
FUNC_3(struct dumperinfo *VAR_1)
{
 struct kerneldumpcomp *VAR_2;

 VAR_2 = VAR_1->kdcomp;
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_2->kdc_stream);
 FUNC_1(VAR_2->kdc_buf, VAR_1->maxiosize);
 FUNC_2(VAR_2->kdc_buf, VAR_0);
 FUNC_2(VAR_2, VAR_0);
}

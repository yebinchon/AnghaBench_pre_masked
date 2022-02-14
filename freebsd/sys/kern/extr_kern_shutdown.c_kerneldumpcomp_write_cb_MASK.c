
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct dumperinfo {size_t blocksize; TYPE_1__* kdcomp; int blockbuf; } ;
typedef int off_t ;
struct TYPE_2__ {size_t kdc_resid; } ;


 int VAR_0 ;
 int FUNC_0 (struct dumperinfo*,void*,int ,size_t) ;
 int FUNC_1 (int ,int *,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, size_t VAR_2, off_t VAR_3, void *VAR_4)
{
 struct dumperinfo *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_4;

 if (VAR_2 % VAR_5->blocksize != 0) {






  VAR_7 = FUNC_2(VAR_2, VAR_5->blocksize);
  if (VAR_7 != 0) {
   VAR_8 = FUNC_0(VAR_5, VAR_1, 0, VAR_7);
   if (VAR_8 != 0)
    return (VAR_8);
  }
  VAR_6 = VAR_2 - VAR_7;
  FUNC_1(VAR_5->blockbuf, (uint8_t *)VAR_1 + VAR_7, VAR_6);
  VAR_5->kdcomp->kdc_resid = VAR_6;
  return (VAR_0);
 }
 return (FUNC_0(VAR_5, VAR_1, 0, VAR_2));
}

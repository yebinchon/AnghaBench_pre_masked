
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padlock_sha_ctx {scalar_t__ psc_size; scalar_t__ psc_offset; int * psc_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct padlock_sha_ctx *VAR_1)
{

 if (VAR_1->psc_buf != ((void*)0)) {

  FUNC_0(VAR_1->psc_buf, VAR_0);
  VAR_1->psc_buf = ((void*)0);
  VAR_1->psc_offset = 0;
  VAR_1->psc_size = 0;
 }
}

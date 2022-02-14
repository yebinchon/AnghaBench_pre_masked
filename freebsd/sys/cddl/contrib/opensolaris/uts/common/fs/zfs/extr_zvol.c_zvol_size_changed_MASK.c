
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zv_volsize; scalar_t__ zv_volmode; struct g_provider* zv_provider; int zv_minor; } ;
typedef TYPE_1__ zvol_state_t ;
typedef void* uint64_t ;
struct g_provider {scalar_t__ mediasize; } ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,void*) ;
 int FUNC_3 (struct g_provider*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(zvol_state_t *VAR_5, uint64_t VAR_6)
{
 VAR_5->zv_volsize = VAR_6;
 if (VAR_5->zv_volmode == VAR_3) {
  struct g_provider *VAR_7;

  VAR_7 = VAR_5->zv_provider;
  if (VAR_7 == ((void*)0))
   return;
  FUNC_4();






  if (VAR_7->mediasize == 0)
   VAR_7->mediasize = VAR_5->zv_volsize;
  else
   FUNC_3(VAR_7, VAR_5->zv_volsize);
  FUNC_5();
 }

}

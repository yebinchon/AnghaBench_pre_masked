
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long expires; } ;
struct TYPE_4__ {TYPE_1__ unres; } ;
struct mfc6_cache {struct mfc6_cache* next; TYPE_2__ mfc_un; } ;


 int VAR_0 ;
 int FUNC_0 (struct mfc6_cache*) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct mfc6_cache* VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_2;
 unsigned long VAR_6 = 10 * VAR_0;
 struct mfc6_cache *VAR_7, **VAR_8;

 VAR_8 = &VAR_3;

 while ((VAR_7 = *VAR_8) != ((void*)0)) {
  if (FUNC_2(VAR_7->mfc_un.unres.expires, VAR_5)) {

   unsigned long VAR_9 = VAR_7->mfc_un.unres.expires - VAR_5;
   if (VAR_9 < VAR_6)
    VAR_6 = VAR_9;
   VAR_8 = &VAR_7->next;
   continue;
  }

  *VAR_8 = VAR_7->next;
  FUNC_0(VAR_7);
 }

 if (VAR_3 != ((void*)0))
  FUNC_1(&VAR_1, VAR_2 + VAR_6);
}

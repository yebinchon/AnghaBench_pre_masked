
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwi_fw {TYPE_1__* fp; } ;
struct TYPE_2__ {int version; } ;


 void* FUNC_0 (char const*) ;

__attribute__((used)) static void
FUNC_1(struct iwi_fw *VAR_0, const char *VAR_1,
   struct iwi_fw *VAR_2, const char *VAR_3)
{
 if (VAR_0->fp == ((void*)0))
  VAR_0->fp = FUNC_0(VAR_1);

 if (VAR_2->fp == ((void*)0) && VAR_0->fp != ((void*)0) && VAR_0->fp->version < 300)
  VAR_2->fp = FUNC_0(VAR_3);
}

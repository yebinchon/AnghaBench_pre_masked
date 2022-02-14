
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_3__ {scalar_t__ (* memconfig ) (int ,scalar_t__*,scalar_t__*,scalar_t__) ;int coder; } ;
struct TYPE_4__ {scalar_t__ memlimit; TYPE_1__ next; } ;
typedef TYPE_2__ lzma_auto_coder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static lzma_ret
FUNC_2(void *VAR_3, uint64_t *VAR_4,
  uint64_t *VAR_5, uint64_t VAR_6)
{
 lzma_auto_coder *VAR_7 = VAR_3;

 lzma_ret VAR_8;

 if (VAR_7->next.memconfig != ((void*)0)) {
  VAR_8 = VAR_7->next.memconfig(VAR_7->next.coder,
    VAR_4, VAR_5, VAR_6);
  FUNC_0(*VAR_5 == VAR_7->memlimit);
 } else {


  *VAR_4 = VAR_1;
  *VAR_5 = VAR_7->memlimit;

  VAR_8 = VAR_2;
  if (VAR_6 != 0 && VAR_6 < *VAR_4)
   VAR_8 = VAR_0;
 }

 if (VAR_8 == VAR_2 && VAR_6 != 0)
  VAR_7->memlimit = VAR_6;

 return VAR_8;
}

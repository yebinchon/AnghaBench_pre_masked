
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_3__ {int d; scalar_t__ const samples; } ;
typedef TYPE_1__ COVER_ctx_t ;


 int FUNC_0 (scalar_t__ const,scalar_t__ const,int ) ;

__attribute__((used)) static int FUNC_1(COVER_ctx_t *VAR_0, const void *VAR_1, const void *VAR_2) {
  U32 const VAR_3 = *(U32 const *)VAR_1;
  U32 const VAR_4 = *(U32 const *)VAR_2;
  return FUNC_0(VAR_0->samples + VAR_3, VAR_0->samples + VAR_4, VAR_0->d);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int j0_2; int jc; unsigned char* y; scalar_t__ count_ctr; scalar_t__ count_aad; int j0_1; int h; int (* gh ) (unsigned char*,int ,unsigned char*,int) ;} ;
typedef TYPE_1__ br_gcm_context ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int ,void const*,size_t) ;
 int FUNC_5 (unsigned char*,int ,unsigned char*,int) ;

void
FUNC_6(br_gcm_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (VAR_2 == 12) {
  FUNC_2(VAR_0->j0_1, VAR_1, 12);
  VAR_0->j0_2 = 1;
 } else {
  unsigned char VAR_3[16], VAR_4[16];

  FUNC_3(VAR_3, 0, sizeof VAR_3);
  VAR_0->gh(VAR_3, VAR_0->h, VAR_1, VAR_2);
  FUNC_3(VAR_4, 0, 8);
  FUNC_1(VAR_4 + 8, (uint64_t)VAR_2 << 3);
  VAR_0->gh(VAR_3, VAR_0->h, VAR_4, 16);
  FUNC_2(VAR_0->j0_1, VAR_3, 12);
  VAR_0->j0_2 = FUNC_0(VAR_3 + 12);
 }
 VAR_0->jc = VAR_0->j0_2 + 1;
 FUNC_3(VAR_0->y, 0, sizeof VAR_0->y);
 VAR_0->count_aad = 0;
 VAR_0->count_ctr = 0;
}

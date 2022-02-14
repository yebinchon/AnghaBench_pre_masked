
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {unsigned int* buf; scalar_t__ count_ctr; int jc; int j0_1; TYPE_2__** bctx; int h; int y; int (* gh ) (int ,int ,unsigned char*,size_t) ;} ;
typedef TYPE_1__ br_gcm_context ;
struct TYPE_6__ {int (* run ) (TYPE_2__**,int ,int ,unsigned int*,int) ;} ;


 int FUNC_0 (unsigned int*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*,int) ;
 int FUNC_2 (int ,int ,unsigned char*,size_t) ;
 int FUNC_3 (TYPE_2__**,int ,int ,unsigned char*,size_t) ;
 int FUNC_4 (int ,int ,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_2__**,int ,int ,unsigned int*,int) ;

void
FUNC_6(br_gcm_context *VAR_0, int VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_4 = VAR_2;
 VAR_5 = (size_t)VAR_0->count_ctr & (size_t)15;
 if (VAR_5 != 0) {



  size_t VAR_7, VAR_8;

  VAR_8 = 16 - VAR_5;
  if (VAR_3 < VAR_8) {
   VAR_8 = VAR_3;
  }
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 ++) {
   unsigned VAR_9, VAR_10;

   VAR_9 = VAR_4[VAR_7];
   VAR_10 = VAR_9 ^ VAR_0->buf[VAR_5 + VAR_7];
   VAR_0->buf[VAR_5 + VAR_7] = VAR_1 ? VAR_10 : VAR_9;
   VAR_4[VAR_7] = VAR_10;
  }
  VAR_0->count_ctr += (uint64_t)VAR_8;
  VAR_4 += VAR_8;
  VAR_3 -= VAR_8;
  if (VAR_5 + VAR_8 < 16) {
   return;
  }
  VAR_0->gh(VAR_0->y, VAR_0->h, VAR_0->buf, 16);
 }




 VAR_6 = VAR_3 & ~(size_t)15;
 if (!VAR_1) {
  VAR_0->gh(VAR_0->y, VAR_0->h, VAR_4, VAR_6);
 }
 VAR_0->jc = (*VAR_0->bctx)->run(VAR_0->bctx, VAR_0->j0_1, VAR_0->jc, VAR_4, VAR_6);
 if (VAR_1) {
  VAR_0->gh(VAR_0->y, VAR_0->h, VAR_4, VAR_6);
 }
 VAR_4 += VAR_6;
 VAR_3 -= VAR_6;
 VAR_0->count_ctr += (uint64_t)VAR_6;

 if (VAR_3 > 0) {



  size_t VAR_11;

  FUNC_0(VAR_0->buf, 0, sizeof VAR_0->buf);
  VAR_0->jc = (*VAR_0->bctx)->run(VAR_0->bctx, VAR_0->j0_1,
   VAR_0->jc, VAR_0->buf, 16);
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11 ++) {
   unsigned VAR_12, VAR_13;

   VAR_12 = VAR_4[VAR_11];
   VAR_13 = VAR_12 ^ VAR_0->buf[VAR_11];
   VAR_0->buf[VAR_11] = VAR_1 ? VAR_13 : VAR_12;
   VAR_4[VAR_11] = VAR_13;
  }
  VAR_0->count_ctr += (uint64_t)VAR_3;
 }
}

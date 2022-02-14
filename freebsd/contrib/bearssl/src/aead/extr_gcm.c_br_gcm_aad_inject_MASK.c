
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {void const* buf; scalar_t__ count_aad; int h; int y; int (* gh ) (int ,int ,void const*,size_t) ;} ;
typedef TYPE_1__ br_gcm_context ;


 int FUNC_0 (void const*,unsigned char const*,size_t) ;
 int FUNC_1 (int ,int ,void const*,int) ;
 int FUNC_2 (int ,int ,void const*,size_t) ;

void
FUNC_3(br_gcm_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_3 = (size_t)VAR_0->count_aad & (size_t)15;
 if (VAR_3 != 0) {




  size_t VAR_5;

  VAR_5 = 16 - VAR_3;
  if (VAR_2 < VAR_5) {
   FUNC_0(VAR_0->buf + VAR_3, VAR_1, VAR_2);
   VAR_0->count_aad += (uint64_t)VAR_2;
   return;
  }
  FUNC_0(VAR_0->buf + VAR_3, VAR_1, VAR_5);
  VAR_0->gh(VAR_0->y, VAR_0->h, VAR_0->buf, 16);
  VAR_1 = (const unsigned char *)VAR_1 + VAR_5;
  VAR_2 -= VAR_5;
  VAR_0->count_aad += (uint64_t)VAR_5;
 }






 VAR_4 = VAR_2 & ~(size_t)15;
 VAR_0->gh(VAR_0->y, VAR_0->h, VAR_1, VAR_4);
 FUNC_0(VAR_0->buf, (const unsigned char *)VAR_1 + VAR_4, VAR_2 - VAR_4);
 VAR_0->count_aad += (uint64_t)VAR_2;
}

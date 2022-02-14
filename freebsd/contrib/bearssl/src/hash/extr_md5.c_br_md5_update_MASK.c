
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int val; scalar_t__ buf; scalar_t__ count; } ;
typedef TYPE_1__ br_md5_context ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,unsigned char const*,size_t) ;

void
FUNC_2(br_md5_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_1;
 VAR_4 = (size_t)VAR_0->count & 63;
 while (VAR_2 > 0) {
  size_t VAR_5;

  VAR_5 = 64 - VAR_4;
  if (VAR_5 > VAR_2) {
   VAR_5 = VAR_2;
  }
  FUNC_1(VAR_0->buf + VAR_4, VAR_3, VAR_5);
  VAR_4 += VAR_5;
  VAR_3 += VAR_5;
  VAR_2 -= VAR_5;
  VAR_0->count += (uint64_t)VAR_5;
  if (VAR_4 == 64) {
   FUNC_0(VAR_0->buf, VAR_0->val);
   VAR_4 = 0;
  }
 }
}

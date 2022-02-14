
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t size; size_t buf; } ;
struct TYPE_5__ {size_t compressed; } ;
struct TYPE_4__ {size_t in_limit; size_t in; size_t in_pos; } ;
struct xz_dec_lzma2 {TYPE_3__ temp; TYPE_2__ lzma2; TYPE_1__ rc; } ;
struct xz_buf {size_t in_size; size_t in_pos; size_t in; } ;


 int VAR_0 ;
 int FUNC_0 (struct xz_dec_lzma2*) ;
 int FUNC_1 (size_t,size_t,size_t) ;
 int FUNC_2 (size_t,int ,size_t) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static bool FUNC_4(struct xz_dec_lzma2 *VAR_1, struct xz_buf *VAR_2)
{
 size_t VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_2->in_size - VAR_2->in_pos;
 if (VAR_1->temp.size > 0 || VAR_1->lzma2.compressed == 0) {
  VAR_4 = 2 * VAR_0 - VAR_1->temp.size;
  if (VAR_4 > VAR_1->lzma2.compressed - VAR_1->temp.size)
   VAR_4 = VAR_1->lzma2.compressed - VAR_1->temp.size;
  if (VAR_4 > VAR_3)
   VAR_4 = VAR_3;

  FUNC_1(VAR_1->temp.buf + VAR_1->temp.size, VAR_2->in + VAR_2->in_pos, VAR_4);

  if (VAR_1->temp.size + VAR_4 == VAR_1->lzma2.compressed) {
   FUNC_3(VAR_1->temp.buf + VAR_1->temp.size + VAR_4,
     sizeof(VAR_1->temp.buf)
      - VAR_1->temp.size - VAR_4);
   VAR_1->rc.in_limit = VAR_1->temp.size + VAR_4;
  } else if (VAR_1->temp.size + VAR_4 < VAR_0) {
   VAR_1->temp.size += VAR_4;
   VAR_2->in_pos += VAR_4;
   return 1;
  } else {
   VAR_1->rc.in_limit = VAR_1->temp.size + VAR_4 - VAR_0;
  }

  VAR_1->rc.in = VAR_1->temp.buf;
  VAR_1->rc.in_pos = 0;

  if (!FUNC_0(VAR_1) || VAR_1->rc.in_pos > VAR_1->temp.size + VAR_4)
   return 0;

  VAR_1->lzma2.compressed -= VAR_1->rc.in_pos;

  if (VAR_1->rc.in_pos < VAR_1->temp.size) {
   VAR_1->temp.size -= VAR_1->rc.in_pos;
   FUNC_2(VAR_1->temp.buf, VAR_1->temp.buf + VAR_1->rc.in_pos,
     VAR_1->temp.size);
   return 1;
  }

  VAR_2->in_pos += VAR_1->rc.in_pos - VAR_1->temp.size;
  VAR_1->temp.size = 0;
 }

 VAR_3 = VAR_2->in_size - VAR_2->in_pos;
 if (VAR_3 >= VAR_0) {
  VAR_1->rc.in = VAR_2->in;
  VAR_1->rc.in_pos = VAR_2->in_pos;

  if (VAR_3 >= VAR_1->lzma2.compressed + VAR_0)
   VAR_1->rc.in_limit = VAR_2->in_pos + VAR_1->lzma2.compressed;
  else
   VAR_1->rc.in_limit = VAR_2->in_size - VAR_0;

  if (!FUNC_0(VAR_1))
   return 0;

  VAR_3 = VAR_1->rc.in_pos - VAR_2->in_pos;
  if (VAR_3 > VAR_1->lzma2.compressed)
   return 0;

  VAR_1->lzma2.compressed -= VAR_3;
  VAR_2->in_pos = VAR_1->rc.in_pos;
 }

 VAR_3 = VAR_2->in_size - VAR_2->in_pos;
 if (VAR_3 < VAR_0) {
  if (VAR_3 > VAR_1->lzma2.compressed)
   VAR_3 = VAR_1->lzma2.compressed;

  FUNC_1(VAR_1->temp.buf, VAR_2->in + VAR_2->in_pos, VAR_3);
  VAR_1->temp.size = VAR_3;
  VAR_2->in_pos += VAR_3;
 }

 return 1;
}

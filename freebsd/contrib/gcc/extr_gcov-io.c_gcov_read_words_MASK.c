
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gcov_unsigned_t ;
struct TYPE_2__ {unsigned int length; unsigned int offset; scalar_t__ mode; unsigned int start; unsigned int alloc; int * buffer; int overread; int file; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int,unsigned int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,unsigned int) ;

__attribute__((used)) static const gcov_unsigned_t *
FUNC_5 (unsigned VAR_2)
{
  const gcov_unsigned_t *VAR_3;
  unsigned VAR_4 = VAR_1.length - VAR_1.offset;

  FUNC_1 (VAR_1.mode > 0);
  if (VAR_4 < VAR_2)
    {
      VAR_1.start += VAR_1.offset;







      FUNC_4 (VAR_1.buffer, VAR_1.buffer + VAR_1.offset, VAR_4 * 4);

      VAR_1.offset = 0;
      VAR_1.length = VAR_4;




      if (VAR_1.length + VAR_2 > VAR_1.alloc)
 FUNC_2 (VAR_1.length + VAR_2);
      VAR_4 = VAR_1.alloc - VAR_1.length;

      VAR_4 = FUNC_0 (VAR_1.buffer + VAR_1.length,
        1, VAR_4 << 2, VAR_1.file) >> 2;
      VAR_1.length += VAR_4;
      if (VAR_1.length < VAR_2)
 {
   VAR_1.overread += VAR_2 - VAR_1.length;
   VAR_1.length = 0;
   return 0;
 }
    }
  VAR_3 = &VAR_1.buffer[VAR_1.offset];
  VAR_1.offset += VAR_2;
  return VAR_3;
}

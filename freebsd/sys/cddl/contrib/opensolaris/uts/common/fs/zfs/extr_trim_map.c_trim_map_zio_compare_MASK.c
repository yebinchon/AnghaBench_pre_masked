
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ io_offset; scalar_t__ io_size; } ;
typedef TYPE_1__ zio_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const zio_t *VAR_2 = VAR_0;
 const zio_t *VAR_3 = VAR_1;

 if (VAR_2->io_offset < VAR_3->io_offset) {
  if (VAR_2->io_offset + VAR_2->io_size > VAR_3->io_offset)
   return (0);
  return (-1);
 }
 if (VAR_2->io_offset > VAR_3->io_offset) {
  if (VAR_2->io_offset < VAR_3->io_offset + VAR_3->io_size)
   return (0);
  return (1);
 }
 return (0);
}

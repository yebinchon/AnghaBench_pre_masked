
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; unsigned int start; unsigned int offset; int file; int buffer; } ;


 int FUNC_0 (int ,unsigned int,int,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (unsigned VAR_1)
{
  if (FUNC_0 (VAR_0.buffer, VAR_1 << 2, 1, VAR_0.file) != 1)
    VAR_0.error = 1;
  VAR_0.start += VAR_1;
  VAR_0.offset -= VAR_1;
}

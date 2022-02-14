
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int lzma_ret ;
struct TYPE_6__ {int * filters; } ;
typedef TYPE_1__ lzma_options_easy ;
struct TYPE_7__ {scalar_t__ flags; scalar_t__ threads; scalar_t__ block_size; int preset; int * filters; } ;
typedef TYPE_2__ lzma_mt ;
typedef int lzma_filter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static lzma_ret
FUNC_4(const lzma_mt *VAR_6, lzma_options_easy *VAR_7,
  const lzma_filter **VAR_8, uint64_t *VAR_9,
  uint64_t *VAR_10)
{

 if (VAR_6 == ((void*)0))
  return VAR_4;

 if (VAR_6->flags != 0 || VAR_6->threads == 0
   || VAR_6->threads > VAR_5)
  return VAR_3;

 if (VAR_6->filters != ((void*)0)) {

  *VAR_8 = VAR_6->filters;
 } else {

  if (FUNC_2(VAR_7, VAR_6->preset))
   return VAR_3;

  *VAR_8 = VAR_7->filters;
 }


 if (VAR_6->block_size > 0) {
  if (VAR_6->block_size > VAR_0)
   return VAR_3;

  *VAR_9 = VAR_6->block_size;
 } else {

  *VAR_9 = FUNC_3(*VAR_8);
  if (*VAR_9 == 0)
   return VAR_3;

  FUNC_0(*VAR_9 <= VAR_0);
 }




 *VAR_10 = FUNC_1(*VAR_9);
 if (*VAR_10 == 0)
  return VAR_1;

 return VAR_2;
}

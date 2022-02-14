
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ lzma_ret ;
typedef int lzma_next_coder ;
struct TYPE_9__ {int * init; int id; int options; } ;
typedef TYPE_1__ lzma_filter_info ;
typedef TYPE_2__* (* lzma_filter_find ) (int ) ;
struct TYPE_10__ {int * init; } ;
typedef TYPE_2__ lzma_filter_coder ;
struct TYPE_11__ {int options; int id; } ;
typedef TYPE_4__ lzma_filter ;
typedef int lzma_allocator ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int *,int const*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__ const*,size_t*) ;

extern lzma_ret
FUNC_4(lzma_next_coder *VAR_4, const lzma_allocator *VAR_5,
  const lzma_filter *VAR_6,
  lzma_filter_find VAR_7, bool VAR_8)
{

 size_t VAR_9;
 FUNC_2(FUNC_3(VAR_6, &VAR_9));


 lzma_filter_info VAR_10[VAR_0 + 1];
 if (VAR_8) {
  for (size_t VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {



   const size_t VAR_12 = VAR_9 - VAR_11 - 1;

   const lzma_filter_coder *const VAR_13
     = VAR_7(VAR_6[VAR_11].id);
   if (VAR_13 == ((void*)0) || VAR_13->init == ((void*)0))
    return VAR_2;

   VAR_10[VAR_12].id = VAR_6[VAR_11].id;
   VAR_10[VAR_12].init = VAR_13->init;
   VAR_10[VAR_12].options = VAR_6[VAR_11].options;
  }
 } else {
  for (size_t VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
   const lzma_filter_coder *const VAR_15
     = VAR_7(VAR_6[VAR_14].id);
   if (VAR_15 == ((void*)0) || VAR_15->init == ((void*)0))
    return VAR_2;

   VAR_10[VAR_14].id = VAR_6[VAR_14].id;
   VAR_10[VAR_14].init = VAR_15->init;
   VAR_10[VAR_14].options = VAR_6[VAR_14].options;
  }
 }


 VAR_10[VAR_9].id = VAR_3;
 VAR_10[VAR_9].init = ((void*)0);


 const lzma_ret VAR_16 = FUNC_1(VAR_4, VAR_5, VAR_10);
 if (VAR_16 != VAR_1)
  FUNC_0(VAR_4, VAR_5);

 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ (* code ) (int ,int const*,int const*,size_t*,size_t,int *,size_t*,size_t,scalar_t__) ;int coder; } ;
struct TYPE_5__ {int end_was_reached; scalar_t__ is_encoder; TYPE_1__ next; } ;
typedef TYPE_2__ lzma_simple_coder ;
typedef scalar_t__ lzma_ret ;
typedef int lzma_allocator ;
typedef scalar_t__ lzma_action ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,size_t*,size_t,int *,size_t*,size_t) ;
 scalar_t__ FUNC_2 (int ,int const*,int const*,size_t*,size_t,int *,size_t*,size_t,scalar_t__) ;

__attribute__((used)) static lzma_ret
FUNC_3(lzma_simple_coder *VAR_3, const lzma_allocator *VAR_4,
  const uint8_t *restrict VAR_5, size_t *restrict VAR_6,
  size_t VAR_7, uint8_t *restrict VAR_8,
  size_t *restrict VAR_9, size_t VAR_10, lzma_action VAR_11)
{
 FUNC_0(!VAR_3->end_was_reached);

 if (VAR_3->next.code == ((void*)0)) {
  FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);


  if (VAR_3->is_encoder && VAR_11 == VAR_0
    && *VAR_6 == VAR_7)
   VAR_3->end_was_reached = 1;

 } else {

  const lzma_ret VAR_12 = VAR_3->next.code(
    VAR_3->next.coder, VAR_4,
    VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9, VAR_10, VAR_11);

  if (VAR_12 == VAR_2) {
   FUNC_0(!VAR_3->is_encoder
     || VAR_11 == VAR_0);
   VAR_3->end_was_reached = 1;

  } else if (VAR_12 != VAR_1) {
   return VAR_12;
  }
 }

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int size; int write_pos; int hash_count; int sons_count; int action; int (* skip ) (TYPE_1__*,int) ;int * buffer; scalar_t__ cyclic_pos; int * hash; int * son; scalar_t__ pending; scalar_t__ read_limit; scalar_t__ read_ahead; scalar_t__ read_pos; int cyclic_size; int offset; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_7__ {scalar_t__ preset_dict_size; int * preset_dict; } ;
typedef TYPE_2__ lzma_lz_options ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int const*) ;
 int * FUNC_1 (int,int const*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_7(lzma_mf *VAR_4, const lzma_allocator *VAR_5,
  const lzma_lz_options *VAR_6)
{

 if (VAR_4->buffer == ((void*)0)) {



  VAR_4->buffer = FUNC_0(VAR_4->size + VAR_0,
    VAR_5);
  if (VAR_4->buffer == ((void*)0))
   return 1;




  FUNC_4(VAR_4->buffer + VAR_4->size, VAR_0);
 }





 VAR_4->offset = VAR_4->cyclic_size;
 VAR_4->read_pos = 0;
 VAR_4->read_ahead = 0;
 VAR_4->read_limit = 0;
 VAR_4->write_pos = 0;
 VAR_4->pending = 0;




 if (VAR_4->hash_count > VAR_3 / sizeof(uint32_t)
   || VAR_4->sons_count > VAR_3 / sizeof(uint32_t))
  return 1;
 if (VAR_4->hash == ((void*)0)) {
  VAR_4->hash = FUNC_1(VAR_4->hash_count * sizeof(uint32_t),
    VAR_5);
  VAR_4->son = FUNC_0(VAR_4->sons_count * sizeof(uint32_t),
    VAR_5);

  if (VAR_4->hash == ((void*)0) || VAR_4->son == ((void*)0)) {
   FUNC_2(VAR_4->hash, VAR_5);
   VAR_4->hash = ((void*)0);

   FUNC_2(VAR_4->son, VAR_5);
   VAR_4->son = ((void*)0);

   return 1;
  }
 } else {




  FUNC_4(VAR_4->hash, VAR_4->hash_count * sizeof(uint32_t));
 }

 VAR_4->cyclic_pos = 0;


 if (VAR_6->preset_dict != ((void*)0)
   && VAR_6->preset_dict_size > 0) {


  VAR_4->write_pos = FUNC_5(VAR_6->preset_dict_size, VAR_4->size);
  FUNC_3(VAR_4->buffer, VAR_6->preset_dict
    + VAR_6->preset_dict_size - VAR_4->write_pos,
    VAR_4->write_pos);
  VAR_4->action = VAR_2;
  VAR_4->skip(VAR_4, VAR_4->write_pos);
 }

 VAR_4->action = VAR_1;

 return 0;
}

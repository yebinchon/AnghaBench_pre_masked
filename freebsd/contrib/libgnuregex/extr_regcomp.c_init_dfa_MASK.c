
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
struct re_state_table_entry {int dummy; } ;
typedef int reg_errcode_t ;
struct TYPE_4__ {size_t nodes_alloc; unsigned int state_hash_mask; int mb_cur_max; int is_utf8; int map_notascii; int* sb_char; int * state_table; int * nodes; int str_tree_storage_idx; } ;
typedef TYPE_1__ re_dfa_t ;
typedef void* re_bitset_ptr_t ;
typedef int bitset_word_t ;
typedef int bitset_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int,int) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,char,int) ;
 char* FUNC_8 (int ) ;
 int * FUNC_9 (int ,size_t) ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static reg_errcode_t
FUNC_13 (re_dfa_t *VAR_14, size_t VAR_15)
{
  unsigned int VAR_16;

  char *VAR_17;


  FUNC_7 (VAR_14, '\0', sizeof (re_dfa_t));


  VAR_14->str_tree_storage_idx = VAR_0;


  if (VAR_15 == VAR_8)
    return VAR_6;

  VAR_14->nodes_alloc = VAR_15 + 1;
  VAR_14->nodes = FUNC_9 (VAR_12, VAR_14->nodes_alloc);


  for (VAR_16 = 1; ; VAR_16 <<= 1)
    if (VAR_16 > VAR_15)
      break;

  VAR_14->state_table = FUNC_4 (sizeof (struct re_state_table_entry), VAR_16);
  VAR_14->state_hash_mask = VAR_16 - 1;

  VAR_14->mb_cur_max = VAR_5;
  VAR_17 = FUNC_5 ("LC_ALL");
  if (VAR_17 == ((void*)0) || VAR_17[0] == '\0')
    VAR_17 = FUNC_5 ("LC_CTYPE");
  if (VAR_17 == ((void*)0) || VAR_17[0] == '\0')
    VAR_17 = FUNC_5 ("LANG");
  if (VAR_17 == ((void*)0))
    VAR_17 = "";
  else if (FUNC_11 (VAR_17, '.') != ((void*)0))
    VAR_17 = FUNC_11 (VAR_17, '.') + 1;


  if (FUNC_10 (VAR_17, "UTF-8") == 0
      || FUNC_10 (VAR_17, "UTF8") == 0)
    VAR_14->is_utf8 = 1;



  VAR_14->map_notascii = 0;
  if (FUNC_0 (VAR_14->nodes == ((void*)0) || VAR_14->state_table == ((void*)0), 0))
    return VAR_6;
  return VAR_7;
}

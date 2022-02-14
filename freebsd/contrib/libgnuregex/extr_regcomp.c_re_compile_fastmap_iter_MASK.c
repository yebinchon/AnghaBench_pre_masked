
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int state ;
struct TYPE_13__ {int syntax; int can_be_null; scalar_t__ buffer; } ;
typedef TYPE_4__ regex_t ;
typedef scalar_t__ re_token_type_t ;
struct TYPE_10__ {int nelem; int* elems; } ;
struct TYPE_14__ {TYPE_1__ nodes; } ;
typedef TYPE_5__ re_dfastate_t ;
struct TYPE_15__ {int mb_cur_max; int nodes_len; TYPE_3__* nodes; } ;
typedef TYPE_6__ re_dfa_t ;
struct TYPE_16__ {int nmbchars; int * mbchars; scalar_t__ nequiv_classes; scalar_t__ nranges; scalar_t__ non_match; scalar_t__ nchar_classes; scalar_t__ ncoll_syms; } ;
typedef TYPE_7__ re_charset_t ;
typedef char mbstate_t ;
typedef int mbs ;
typedef scalar_t__ int32_t ;
typedef int bitset_word_t ;
struct TYPE_11__ {unsigned char c; int* sbcset; TYPE_7__* mbcset; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ opr; scalar_t__ mb_partial; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int *,char const*,int,char*) ;
 size_t FUNC_3 (char*,int ,char*) ;
 unsigned char* FUNC_4 (int) ;
 int FUNC_5 (char*,char,int) ;
 int FUNC_6 (char*,int,unsigned char) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (regex_t *VAR_13, const re_dfastate_t *VAR_14,
    char *VAR_15)
{
  re_dfa_t *VAR_16 = (re_dfa_t *) VAR_13->buffer;
  int VAR_17;
  int VAR_18 = (VAR_16->mb_cur_max == 1 && (VAR_13->syntax & VAR_8));
  for (VAR_17 = 0; VAR_17 < VAR_14->nodes.nelem; ++VAR_17)
    {
      int VAR_19 = VAR_14->nodes.elems[VAR_17];
      re_token_type_t VAR_20 = VAR_16->nodes[VAR_19].type;

      if (VAR_20 == VAR_2)
 {
   FUNC_6 (VAR_15, VAR_18, VAR_16->nodes[VAR_19].opr.c);
 }
      else if (VAR_20 == VAR_10)
 {
   int VAR_21, VAR_22;
   for (VAR_21 = 0, VAR_22 = 0; VAR_21 < VAR_0; ++VAR_21)
     {
       int VAR_23;
       bitset_word_t VAR_24 = VAR_16->nodes[VAR_19].opr.sbcset[VAR_21];
       for (VAR_23 = 0; VAR_23 < VAR_1; ++VAR_23, ++VAR_22)
  if (VAR_24 & ((bitset_word_t) 1 << VAR_23))
    FUNC_6 (VAR_15, VAR_18, VAR_22);
     }
 }
      else if (VAR_20 == VAR_6



        || VAR_20 == VAR_4)
 {
   FUNC_5 (VAR_15, '\1', sizeof (char) * VAR_9);
   if (VAR_20 == VAR_4)
     VAR_13->can_be_null = 1;
   return;
 }
    }
}

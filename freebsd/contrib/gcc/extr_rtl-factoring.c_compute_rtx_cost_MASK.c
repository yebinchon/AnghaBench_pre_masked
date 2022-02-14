
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hash_elem_def {int insn; int hash; } ;
struct hash_bucket_def {int insn; int hash; } ;
typedef int rtx ;
typedef TYPE_1__* p_hash_elem ;
typedef TYPE_2__* p_hash_bucket ;
struct TYPE_4__ {int seq_candidates; } ;
struct TYPE_3__ {int length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 void* FUNC_3 (int ,struct hash_elem_def*) ;

__attribute__((used)) static int
FUNC_4 (rtx VAR_1)
{
  struct hash_bucket_def VAR_2;
  p_hash_bucket VAR_3;
  struct hash_elem_def VAR_4;
  p_hash_elem VAR_5 = ((void*)0);
  int VAR_6 = -1;


  VAR_2.hash = FUNC_1 (VAR_1);


  VAR_3 = FUNC_3 (VAR_0, &VAR_2);

  if (VAR_3)
  {
    VAR_4.insn = VAR_1;


    VAR_5 = FUNC_3 (VAR_3->seq_candidates, &VAR_4);


    if (VAR_5)
      VAR_6 = VAR_5->length;
  }


  if (VAR_6 == -1)
  {
    VAR_6 = FUNC_2 (VAR_1);


    if (VAR_5)
      VAR_5->length = VAR_6;
  }



  return VAR_6 != 0 ? VAR_6 : FUNC_0 (1);
}

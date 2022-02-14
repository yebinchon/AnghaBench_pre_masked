
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int rqs_flags; int rqs_seqno; int rqs_entry_count; int rqs_entry_type; } ;
typedef TYPE_1__ isphdr_t ;


 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, isphdr_t *VAR_1, isphdr_t *VAR_2)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_0, &VAR_1->rqs_entry_type, VAR_2->rqs_entry_count);
  FUNC_0(VAR_0, &VAR_1->rqs_entry_count, VAR_2->rqs_entry_type);
  FUNC_0(VAR_0, &VAR_1->rqs_seqno, VAR_2->rqs_flags);
  FUNC_0(VAR_0, &VAR_1->rqs_flags, VAR_2->rqs_seqno);
 } else {
  FUNC_0(VAR_0, &VAR_1->rqs_entry_type, VAR_2->rqs_entry_type);
  FUNC_0(VAR_0, &VAR_1->rqs_entry_count, VAR_2->rqs_entry_count);
  FUNC_0(VAR_0, &VAR_1->rqs_seqno, VAR_2->rqs_seqno);
  FUNC_0(VAR_0, &VAR_1->rqs_flags, VAR_2->rqs_flags);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av_decision {int auditdeny; scalar_t__ flags; int seqno; scalar_t__ auditallow; scalar_t__ allowed; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct av_decision *VAR_1)
{
 VAR_1->allowed = 0;
 VAR_1->auditallow = 0;
 VAR_1->auditdeny = 0xffffffff;
 VAR_1->seqno = VAR_0;
 VAR_1->flags = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qclass; int qname; int qname_len; } ;
struct iter_qstate {TYPE_1__ qchase; } ;
struct iter_env {int caps_white; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct iter_env* VAR_0, struct iter_qstate* VAR_1)
{
 if(!VAR_0->caps_white) return 0;
 return FUNC_1(VAR_0->caps_white, VAR_1->qchase.qname,
  VAR_1->qchase.qname_len, FUNC_0(VAR_1->qchase.qname),
  VAR_1->qchase.qclass) != ((void*)0);
}

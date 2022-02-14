
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending {int pkt_len; int timer; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static size_t
FUNC_1(struct pending* VAR_0)
{
 size_t VAR_1;
 VAR_1 = sizeof(*VAR_0) + FUNC_0(VAR_0->timer) + VAR_0->pkt_len;
 return VAR_1;
}

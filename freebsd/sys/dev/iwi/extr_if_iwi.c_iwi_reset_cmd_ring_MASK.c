
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct iwi_cmd_ring {scalar_t__ next; scalar_t__ cur; scalar_t__ queued; } ;



__attribute__((used)) static void
FUNC_0(struct iwi_softc *VAR_0, struct iwi_cmd_ring *VAR_1)
{
 VAR_1->queued = 0;
 VAR_1->cur = VAR_1->next = 0;
}

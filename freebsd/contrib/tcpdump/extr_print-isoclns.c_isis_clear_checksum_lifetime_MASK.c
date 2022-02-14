
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isis_lsp_header {scalar_t__* remaining_lifetime; scalar_t__* checksum; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0)
{
    struct isis_lsp_header *VAR_1 = (struct isis_lsp_header *) VAR_0;

    VAR_1->checksum[0] = 0;
    VAR_1->checksum[1] = 0;
    VAR_1->remaining_lifetime[0] = 0;
    VAR_1->remaining_lifetime[1] = 0;
}

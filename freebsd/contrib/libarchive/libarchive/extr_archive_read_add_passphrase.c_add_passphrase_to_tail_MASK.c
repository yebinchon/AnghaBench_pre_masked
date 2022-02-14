
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_passphrase {struct archive_read_passphrase* next; } ;
struct TYPE_2__ {struct archive_read_passphrase** last; } ;
struct archive_read {TYPE_1__ passphrases; } ;



__attribute__((used)) static void
FUNC_0(struct archive_read *VAR_0,
    struct archive_read_passphrase *VAR_1)
{
 *VAR_0->passphrases.last = VAR_1;
 VAR_0->passphrases.last = &VAR_1->next;
 VAR_1->next = ((void*)0);
}

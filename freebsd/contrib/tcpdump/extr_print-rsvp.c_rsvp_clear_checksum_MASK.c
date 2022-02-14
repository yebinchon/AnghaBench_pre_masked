
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsvp_common_header {scalar_t__* checksum; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0)
{
    struct rsvp_common_header *VAR_1 = (struct rsvp_common_header *) VAR_0;

    VAR_1->checksum[0] = 0;
    VAR_1->checksum[1] = 0;
}

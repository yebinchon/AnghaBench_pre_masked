
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct csrhdr {int info_len; } ;
struct csrdirectory {scalar_t__ crc_len; } ;
struct crom_context {int depth; TYPE_1__* stack; } ;
struct TYPE_2__ {scalar_t__ index; struct csrdirectory* dir; } ;



void
FUNC_0(struct crom_context *VAR_0, uint32_t *VAR_1)
{
 struct csrhdr *VAR_2;

 VAR_2 = (struct csrhdr *)VAR_1;
 if (VAR_2->info_len <= 1) {

  VAR_0->depth = -1;
  return;
 }
 VAR_1 += 1 + VAR_2->info_len;


 if (((struct csrdirectory *)VAR_1)->crc_len == 0) {
  VAR_0->depth = -1;
  return;
 }
 VAR_0->depth = 0;
 VAR_0->stack[0].dir = (struct csrdirectory *)VAR_1;
 VAR_0->stack[0].index = 0;
}

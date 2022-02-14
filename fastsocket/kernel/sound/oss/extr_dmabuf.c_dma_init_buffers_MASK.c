
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int max_byte_counter; int neutral_byte; int data_rate; int cfrag; int nbufs; int flags; scalar_t__ closing; scalar_t__ mapping_flags; int dma_mode; int buffsize; int bytes_in_use; scalar_t__ byte_counter; scalar_t__ user_counter; scalar_t__ qtail; scalar_t__ qhead; scalar_t__ qlen; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dma_buffparms *VAR_2)
{
 VAR_2->qlen = VAR_2->qhead = VAR_2->qtail = VAR_2->user_counter = 0;
 VAR_2->byte_counter = 0;
 VAR_2->max_byte_counter = 8000 * 60 * 60;
 VAR_2->bytes_in_use = VAR_2->buffsize;

 VAR_2->dma_mode = VAR_1;
 VAR_2->mapping_flags = 0;
 VAR_2->neutral_byte = 0x80;
 VAR_2->data_rate = 8000;
 VAR_2->cfrag = -1;
 VAR_2->closing = 0;
 VAR_2->nbufs = 1;
 VAR_2->flags = VAR_0;
}

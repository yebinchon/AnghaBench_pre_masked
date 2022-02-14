
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int octets_per_byte; void* display_endian; int symbol_is_valid; int symbol_at_address_func; int print_address_func; int memory_error_func; int read_memory_func; void* stream; int fprintf_func; void* endian; int arch; int flavour; } ;
typedef int fprintf_ftype ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct disassemble_info*,int ,int) ;
 int VAR_7 ;

void
FUNC_1 (struct disassemble_info *VAR_8, void *VAR_9,
         fprintf_ftype VAR_10)
{
  FUNC_0 (VAR_8, 0, sizeof (*VAR_8));

  VAR_8->flavour = VAR_2;
  VAR_8->arch = VAR_1;
  VAR_8->endian = VAR_0;
  VAR_8->octets_per_byte = 1;
  VAR_8->fprintf_func = VAR_10;
  VAR_8->stream = VAR_9;
  VAR_8->read_memory_func = VAR_3;
  VAR_8->memory_error_func = VAR_7;
  VAR_8->print_address_func = VAR_4;
  VAR_8->symbol_at_address_func = VAR_5;
  VAR_8->symbol_is_valid = VAR_6;
  VAR_8->display_endian = VAR_0;
}

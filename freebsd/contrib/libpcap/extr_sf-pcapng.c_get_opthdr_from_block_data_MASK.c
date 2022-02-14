
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct option_header {void* option_length; void* option_code; } ;
struct block_cursor {int dummy; } ;
struct TYPE_3__ {scalar_t__ swapped; } ;
typedef TYPE_1__ pcap_t ;


 void* FUNC_0 (void*) ;
 struct option_header* FUNC_1 (struct block_cursor*,int,char*) ;

__attribute__((used)) static struct option_header *
FUNC_2(pcap_t *VAR_0, struct block_cursor *VAR_1, char *VAR_2)
{
 struct option_header *VAR_3;

 VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3), VAR_2);
 if (VAR_3 == ((void*)0)) {



  return (((void*)0));
 }




 if (VAR_0->swapped) {
  VAR_3->option_code = FUNC_0(VAR_3->option_code);
  VAR_3->option_length = FUNC_0(VAR_3->option_length);
 }

 return (VAR_3);
}

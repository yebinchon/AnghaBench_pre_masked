
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_cursor {size_t data_remaining; void* data; int block_type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;

__attribute__((used)) static void *
FUNC_1(struct block_cursor *VAR_1, size_t VAR_2,
    char *VAR_3)
{
 void *VAR_4;





 if (VAR_1->data_remaining < VAR_2) {
  FUNC_0(VAR_3, VAR_0,
      "block of type %u in pcapng dump file is too short",
      VAR_1->block_type);
  return (((void*)0));
 }




 VAR_4 = VAR_1->data;
 VAR_1->data += VAR_2;
 VAR_1->data_remaining -= VAR_2;
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct pt_section {char* filename; int size; int offset; struct ifix_status* status; } ;
struct image_fixture {int dummy; } ;
struct ifix_status {struct image_fixture* ifix; struct ifix_mapping* mapping; scalar_t__ bad_put; scalar_t__ deleted; } ;
struct ifix_mapping {int size; size_t* content; } ;


 int FUNC_0 (struct pt_section*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pt_section *VAR_0, char *VAR_1,
         struct ifix_status *VAR_2,
         struct ifix_mapping *VAR_3,
         struct image_fixture *VAR_4)
{
 uint8_t VAR_5;

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->filename = VAR_1;
 VAR_0->status = VAR_2;
 VAR_0->size = VAR_3->size = sizeof(VAR_3->content);
 VAR_0->offset = 0x10;

 for (VAR_5 = 0; VAR_5 < VAR_3->size; ++VAR_5)
  VAR_3->content[VAR_5] = VAR_5;

 VAR_2->deleted = 0;
 VAR_2->bad_put = 0;
 VAR_2->mapping = VAR_3;
 VAR_2->ifix = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint64_t ;
struct pt_section {char const* filename; int ucount; int* content; int lock; int alock; void* size; void* offset; } ;


 int FUNC_0 (struct pt_section*) ;
 struct pt_section* FUNC_1 (int) ;
 int FUNC_2 (struct pt_section*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct pt_section **VAR_4, const char *VAR_5,
    uint64_t VAR_6, uint64_t VAR_7)
{
 struct pt_section *VAR_8;
 uint8_t VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_2;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->filename = VAR_5;
 VAR_8->offset = VAR_6;
 VAR_8->size = VAR_7;
 VAR_8->ucount = 1;

 for (VAR_9 = 0; VAR_9 < sizeof(VAR_8->content); ++VAR_9)
  VAR_8->content[VAR_9] = VAR_9;
 *VAR_4 = VAR_8;

 return 0;
}

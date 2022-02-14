
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct acl_list {int region; } ;
struct acl_addr {size_t taglen; int taglist; } ;


 struct acl_addr* FUNC_0 (struct acl_list*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static int
FUNC_3(struct acl_list* VAR_0, const char* VAR_1, uint8_t* VAR_2,
 size_t VAR_3)
{
 struct acl_addr* VAR_4;
 if(!(VAR_4=FUNC_0(VAR_0, VAR_1)))
  return 0;
 VAR_4->taglen = VAR_3;
 VAR_4->taglist = FUNC_2(VAR_0->region, VAR_2, VAR_3);
 if(!VAR_4->taglist) {
  FUNC_1("out of memory");
  return 0;
 }
 return 1;
}

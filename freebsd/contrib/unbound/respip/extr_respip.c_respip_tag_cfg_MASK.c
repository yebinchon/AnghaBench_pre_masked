
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct respip_set {int region; } ;
struct resp_addr {size_t taglen; scalar_t__ taglist; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int ,int const*,size_t) ;
 struct resp_addr* FUNC_3 (struct respip_set*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(struct respip_set* VAR_0, const char* VAR_1,
 const uint8_t* VAR_2, size_t VAR_3)
{
 struct resp_addr* VAR_4;

 if(!(VAR_4=FUNC_3(VAR_0, VAR_1, 1)))
  return 0;
 if(VAR_4->taglist) {
  FUNC_1("duplicate response-address-tag for '%s', overridden.",
   VAR_1);
 }
 VAR_4->taglist = FUNC_2(VAR_0->region, VAR_2, VAR_3);
 if(!VAR_4->taglist) {
  FUNC_0("out of memory");
  return 0;
 }
 VAR_4->taglen = VAR_3;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sldns_file_parse_state {int default_ttl; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char const**) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_0, struct sldns_file_parse_state* VAR_1)
{
 char* VAR_2 = (char*)FUNC_1(VAR_0);
 if(FUNC_4(VAR_2, "$TTL", 4) == 0 &&
  FUNC_0((unsigned char)VAR_2[4])) {
  const char* VAR_3 = ((void*)0);
  VAR_1->default_ttl = FUNC_2(
   FUNC_3(VAR_2+5), &VAR_3);
  return 1;
 }
 return 0;
}

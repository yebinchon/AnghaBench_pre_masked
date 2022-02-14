
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sldns_file_parse_state {int origin_len; int origin; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_0, struct sldns_file_parse_state* VAR_1)
{
 char* VAR_2 = (char*)FUNC_1(VAR_0);
 if(FUNC_4(VAR_2, "$ORIGIN", 7) == 0 &&
  FUNC_0((unsigned char)VAR_2[7])) {
  int VAR_3;
  VAR_1->origin_len = sizeof(VAR_1->origin);
  VAR_3 = FUNC_2(FUNC_3(VAR_2+8),
   VAR_1->origin, &VAR_1->origin_len);
  if(VAR_3) VAR_1->origin_len = 0;
  return 1;
 }
 return 0;
}

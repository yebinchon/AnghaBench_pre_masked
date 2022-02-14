
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sldns_file_parse_state {int dummy; } ;
struct auth_chunk {int dummy; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (struct auth_chunk**,size_t*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,struct sldns_file_parse_state*) ;
 scalar_t__ FUNC_3 (int *,struct sldns_file_parse_state*) ;

__attribute__((used)) static int
FUNC_4(struct auth_chunk** VAR_0, size_t* VAR_1,
 sldns_buffer* VAR_2, struct sldns_file_parse_state* VAR_3)
{
 while(FUNC_0(VAR_0, VAR_1, VAR_2)) {
  if(FUNC_1(VAR_2)) {

   continue;
  }
  if(FUNC_2(VAR_2, VAR_3)) {
   continue;
  }
  if(FUNC_3(VAR_2, VAR_3)) {
   continue;
  }
  return 1;
 }

 return 0;
}

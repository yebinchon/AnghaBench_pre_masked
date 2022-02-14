
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrset_parse {size_t dname_len; } ;
typedef int sldns_buffer ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rrset_parse*,int **,size_t*) ;

__attribute__((used)) static int
FUNC_3(uint8_t* VAR_1, size_t VAR_2, struct rrset_parse* VAR_3,
 uint8_t* VAR_4, size_t* VAR_5, sldns_buffer* VAR_6)
{

 uint8_t* VAR_7 = ((void*)0);
 size_t VAR_8;
 if(!FUNC_2(VAR_3, &VAR_7, &VAR_8))
  return 0;
 FUNC_1(VAR_2 > VAR_3->dname_len);


 *VAR_5 = VAR_2 + VAR_8 - VAR_3->dname_len;
 if(*VAR_5 > VAR_0)
  return 0;

 FUNC_0(VAR_6, VAR_4, VAR_1);
 FUNC_0(VAR_6, VAR_4+(VAR_2-VAR_3->dname_len), VAR_7);
 return 1;
}

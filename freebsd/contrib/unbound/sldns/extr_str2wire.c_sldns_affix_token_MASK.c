
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_rdf_type ;
typedef int sldns_buffer ;


 int FUNC_0 (int *,char*,size_t,int*,int*,size_t*,char const*,int ,size_t*) ;

__attribute__((used)) static int
FUNC_1(sldns_buffer* VAR_0, char* VAR_1, size_t* VAR_2,
 int* VAR_3, int* VAR_4, size_t* VAR_5,
 const char* VAR_6, sldns_rdf_type VAR_7, size_t* VAR_8)
{
 size_t VAR_9 = *VAR_2 - *VAR_8;
 size_t VAR_10 = 0;


 if(VAR_9 < 1) return 0;
 VAR_1[*VAR_8] = ' ';
 VAR_1[++(*VAR_8)] = 0;


 VAR_9 = *VAR_2 - *VAR_8;
 if(!FUNC_0(VAR_0, VAR_1+*VAR_8, VAR_9, VAR_3,
  VAR_4, VAR_5, VAR_6, VAR_7, &VAR_10))
  return 0;
 (*VAR_8) += VAR_10;
 return 1;
}

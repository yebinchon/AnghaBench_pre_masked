
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct sldns_file_parse_state {int origin_len; size_t prev_rr_len; int * prev_rr; int * origin; int default_ttl; int lineno; } ;
typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,scalar_t__*,size_t) ;
 int FUNC_2 (int *,char*,int ,int ,int *) ;
 int FUNC_3 (int ,char const**) ;
 int FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (char*,scalar_t__*,size_t*,size_t*,int ,int *,int,int *,size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,size_t) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

int FUNC_9(FILE* VAR_5, uint8_t* VAR_6, size_t* VAR_7, size_t* VAR_8,
 struct sldns_file_parse_state* VAR_9)
{
 char VAR_10[VAR_1+1];
 ssize_t VAR_11;


 if((VAR_11 = FUNC_2(VAR_5, VAR_10, VAR_0,
  VAR_1, VAR_9?&VAR_9->lineno:((void*)0)))
  == -1) {




  return VAR_4;
 }



 if(VAR_11 == 0) {
  if(*VAR_7 > 0)
   VAR_6[0] = 0;
  *VAR_7 = 0;
  *VAR_8 = 0;
  return VAR_3;
 }

 if(FUNC_8(VAR_10, "$ORIGIN", 7) == 0 && FUNC_0((unsigned char)VAR_10[7])) {
  int VAR_12;
  FUNC_7((char*)VAR_6, VAR_10, *VAR_7);
  *VAR_7 = 0;
  *VAR_8 = 0;
  if(!VAR_9) return VAR_3;
  VAR_9->origin_len = sizeof(VAR_9->origin);
  VAR_12 = FUNC_4(FUNC_6(VAR_10+8),
   VAR_9->origin, &VAR_9->origin_len);
  if(VAR_12) VAR_9->origin_len = 0;
  return VAR_12;
 } else if(FUNC_8(VAR_10, "$TTL", 4) == 0 && FUNC_0((unsigned char)VAR_10[4])) {
  const char* VAR_13 = ((void*)0);
  FUNC_7((char*)VAR_6, VAR_10, *VAR_7);
  *VAR_7 = 0;
  *VAR_8 = 0;
  if(!VAR_9) return VAR_3;
  VAR_9->default_ttl = FUNC_3(
   FUNC_6(VAR_10+5), &VAR_13);
 } else if (FUNC_8(VAR_10, "$INCLUDE", 8) == 0) {
  FUNC_7((char*)VAR_6, VAR_10, *VAR_7);
  *VAR_7 = 0;
  *VAR_8 = 0;
  return VAR_2;
 } else if (FUNC_8(VAR_10, "$", 1) == 0) {
  FUNC_7((char*)VAR_6, VAR_10, *VAR_7);
  *VAR_7 = 0;
  *VAR_8 = 0;
  return VAR_2;
 } else {
  int VAR_14 = FUNC_5(VAR_10, VAR_6, VAR_7, VAR_8,
   VAR_9?VAR_9->default_ttl:0,
   (VAR_9&&VAR_9->origin_len)?
    VAR_9->origin:((void*)0),
   VAR_9?VAR_9->origin_len:0,
   (VAR_9&&VAR_9->prev_rr_len)?
    VAR_9->prev_rr:((void*)0),
   VAR_9?VAR_9->prev_rr_len:0);
  if(VAR_14 == VAR_3 && (*VAR_8) != 0 &&
   VAR_9 &&
   (*VAR_8) <= sizeof(VAR_9->prev_rr)) {
   FUNC_1(VAR_9->prev_rr, VAR_6, *VAR_8);
   VAR_9->prev_rr_len = (*VAR_8);
  }
  return VAR_14;
 }
 return VAR_3;
}

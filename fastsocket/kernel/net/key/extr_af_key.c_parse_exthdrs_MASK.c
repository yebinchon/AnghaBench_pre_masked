
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint16_t ;
struct sk_buff {int len; } ;
struct sadb_msg {int dummy; } ;
struct sadb_ext {int sadb_ext_len; size_t sadb_ext_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_9, struct sadb_msg *VAR_10, void **VAR_11)
{
 char *VAR_12 = (char *) VAR_10;
 int VAR_13 = VAR_9->len;

 VAR_13 -= sizeof(*VAR_10);
 VAR_12 += sizeof(*VAR_10);
 while (VAR_13 > 0) {
  struct sadb_ext *VAR_14 = (struct sadb_ext *) VAR_12;
  uint16_t VAR_15;
  int VAR_16;

  VAR_16 = VAR_14->sadb_ext_len;
  VAR_16 *= sizeof(uint64_t);
  VAR_15 = VAR_14->sadb_ext_type;
  if (VAR_16 < sizeof(uint64_t) ||
      VAR_16 > VAR_13 ||
      VAR_15 == VAR_5)
   return -VAR_0;

  if (VAR_15 <= VAR_4) {
   int VAR_17 = (int) VAR_8[VAR_15];
   if (VAR_16 < VAR_17)
    return -VAR_0;
   if (VAR_11[VAR_15-1] != ((void*)0))
    return -VAR_0;
   if (VAR_15 == VAR_3 ||
       VAR_15 == VAR_1 ||
       VAR_15 == VAR_2 ||
       VAR_15 == VAR_6) {
    if (FUNC_0(VAR_12))
     return -VAR_0;
   }
   if (VAR_15 == VAR_7) {
    if (FUNC_1(VAR_12))
     return -VAR_0;
   }
   VAR_11[VAR_15-1] = VAR_12;
  }
  VAR_12 += VAR_16;
  VAR_13 -= VAR_16;
 }

 return 0;
}

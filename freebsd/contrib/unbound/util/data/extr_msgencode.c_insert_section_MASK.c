
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time_t ;
struct reply_info {int * rrsets; } ;
struct regional {int dummy; } ;
struct compress_tree_node {int dummy; } ;
typedef int sldns_pkt_section ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *,int ,struct regional*,int,int,struct compress_tree_node**,int ,int ,int,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static int
FUNC_3(struct reply_info* VAR_4, size_t VAR_5, uint16_t* VAR_6,
 sldns_buffer* VAR_7, size_t VAR_8, time_t VAR_9,
 struct regional* VAR_10, struct compress_tree_node** VAR_11,
 sldns_pkt_section VAR_12, uint16_t VAR_13, int VAR_14, size_t VAR_15)
{
 int VAR_16;
 size_t VAR_17, VAR_18;





 if(VAR_12 != VAR_1) {
  if(VAR_12 == VAR_2 && VAR_13 == VAR_0)
   VAR_14 = 1;
    for(VAR_17=0; VAR_17<VAR_5; VAR_17++) {
   VAR_18 = FUNC_1(VAR_7);
   if((VAR_16=FUNC_0(VAR_4->rrsets[VAR_8+VAR_17],
    VAR_7, VAR_6, VAR_9, VAR_10, 1, 1, VAR_11,
    VAR_12, VAR_13, VAR_14, VAR_15))
    != VAR_3) {


    FUNC_2(VAR_7, VAR_18);
    return VAR_16;
   }
  }
 } else {
    for(VAR_17=0; VAR_17<VAR_5; VAR_17++) {
   VAR_18 = FUNC_1(VAR_7);
   if((VAR_16=FUNC_0(VAR_4->rrsets[VAR_8+VAR_17],
    VAR_7, VAR_6, VAR_9, VAR_10, 1, 0, VAR_11,
    VAR_12, VAR_13, VAR_14, VAR_15))
    != VAR_3) {
    FUNC_2(VAR_7, VAR_18);
    return VAR_16;
   }
  }
  if(VAR_14)
      for(VAR_17=0; VAR_17<VAR_5; VAR_17++) {
   VAR_18 = FUNC_1(VAR_7);
   if((VAR_16=FUNC_0(VAR_4->rrsets[VAR_8+VAR_17],
    VAR_7, VAR_6, VAR_9, VAR_10, 0, 1, VAR_11,
    VAR_12, VAR_13, VAR_14, VAR_15))
    != VAR_3) {
    FUNC_2(VAR_7, VAR_18);
    return VAR_16;
   }
    }
 }
 return VAR_3;
}

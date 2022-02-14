
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct regional {int dummy; } ;
struct compress_tree_node {int dummy; } ;
struct TYPE_3__ {int* _wireformat; scalar_t__ _dname_count; } ;
typedef TYPE_1__ sldns_rr_descriptor ;
typedef int sldns_buffer ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int *,int,struct regional*,struct compress_tree_node**) ;
 int FUNC_1 (scalar_t__*,size_t*) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__*,size_t) ;
 int FUNC_7 (int *,size_t,size_t) ;

__attribute__((used)) static int
FUNC_8(sldns_buffer* VAR_2, uint8_t* VAR_3, size_t VAR_4,
 struct regional* VAR_5, struct compress_tree_node** VAR_6,
 const sldns_rr_descriptor* VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 size_t VAR_11, VAR_12, VAR_13 = FUNC_3(VAR_2);
 uint8_t VAR_14 = VAR_7->_dname_count;

 FUNC_5(VAR_2, 2);

 VAR_3 += 2;
 VAR_4 -= 2;
 while(VAR_4 > 0 && VAR_14) {
  switch(VAR_7->_wireformat[VAR_10]) {
  case 129:
   VAR_8 = FUNC_1(VAR_3, &VAR_11);
   if((VAR_9=FUNC_0(VAR_3, VAR_2, VAR_8, VAR_5,
    VAR_6)) != VAR_0)
    return VAR_9;
   VAR_3 += VAR_11;
   VAR_4 -= VAR_11;
   VAR_14--;
   VAR_12 = 0;
   break;
  case 128:
   VAR_12 = *VAR_3 + 1;
   break;
  default:
   VAR_12 = FUNC_2(VAR_7->_wireformat[VAR_10]);
  }
  if(VAR_12) {

   if(FUNC_4(VAR_2) < VAR_12)
    return VAR_1;
   FUNC_6(VAR_2, VAR_3, VAR_12);
   VAR_4 -= VAR_12;
   VAR_3 += VAR_12;
  }
  VAR_10++;
 }

 if(VAR_4 > 0) {
  if(FUNC_4(VAR_2) < VAR_4)
   return VAR_1;
  FUNC_6(VAR_2, VAR_3, VAR_4);
 }


 FUNC_7(VAR_2, VAR_13, FUNC_3(VAR_2)-VAR_13-2);
 return VAR_0;
}

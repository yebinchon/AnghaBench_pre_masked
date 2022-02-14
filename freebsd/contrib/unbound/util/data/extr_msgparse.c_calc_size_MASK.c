
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct rr_parse {int size; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ _dname_count; int* _wireformat; } ;
typedef TYPE_1__ sldns_rr_descriptor ;
typedef int sldns_buffer ;




 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(sldns_buffer* VAR_0, uint16_t VAR_1, struct rr_parse* VAR_2)
{
 const sldns_rr_descriptor* VAR_3;
 uint16_t VAR_4;
 VAR_2->size = sizeof(uint16_t);
 FUNC_6(VAR_0, 4);
 VAR_4 = FUNC_4(VAR_0);
 if(FUNC_5(VAR_0) < VAR_4)
  return 0;
 VAR_3 = FUNC_7(VAR_1);
 if(VAR_4 > 0 && VAR_3 && VAR_3->_dname_count > 0) {
  int VAR_5 = (int)VAR_3->_dname_count;
  int VAR_6 = 0;
  size_t VAR_7;
  size_t VAR_8;

  while(VAR_4 > 0 && VAR_5) {
   switch(VAR_3->_wireformat[VAR_6]) {
   case 129:

    VAR_8 = FUNC_3(VAR_0);
    if((VAR_7 = FUNC_1(VAR_0)) == 0)
     return 0;
    if(FUNC_3(VAR_0)-VAR_8 > VAR_4)
     return 0;
    VAR_4 -= FUNC_3(VAR_0)-VAR_8;
    VAR_2->size += VAR_7;
    VAR_5--;
    VAR_7 = 0;
    break;
   case 128:
    if(VAR_4 < 1) {

     return 0;
    }
    VAR_7 = FUNC_2(VAR_0)[0] + 1;
    break;
   default:
    VAR_7 = FUNC_0(VAR_3->_wireformat[VAR_6]);
   }
   if(VAR_7) {
    if(VAR_4 < VAR_7)
     return 0;
    VAR_4 -= VAR_7;
    FUNC_6(VAR_0, (ssize_t)VAR_7);
    VAR_2->size += VAR_7;
   }
   VAR_6++;
  }
 }

 VAR_2->size += VAR_4;
 FUNC_6(VAR_0, (ssize_t)VAR_4);
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct packed_rrset_data {int* rr_len; scalar_t__** rr_data; } ;
struct TYPE_3__ {scalar_t__* _wireformat; scalar_t__ _dname_count; } ;
typedef TYPE_1__ sldns_rr_descriptor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct packed_rrset_data* VAR_2,
 const sldns_rr_descriptor* VAR_3, size_t VAR_4, size_t VAR_5)
{





 int VAR_6 = -1;
 int VAR_7 = -1;
 uint8_t* VAR_8 = VAR_2->rr_data[VAR_4]+2;
 uint8_t* VAR_9 = VAR_2->rr_data[VAR_5]+2;
 size_t VAR_10 = VAR_2->rr_len[VAR_4]-2;
 size_t VAR_11 = VAR_2->rr_len[VAR_5]-2;
 int VAR_12 = 0;
 int VAR_13 = 0;
 size_t VAR_14 = 0;
 size_t VAR_15 = 0;
 int VAR_16 = (int)VAR_3->_dname_count;
 int VAR_17 = (int)VAR_3->_dname_count;




 while(VAR_10 > 0 && VAR_11 > 0 && (VAR_16 > 0 || VAR_17 > 0)) {


  if( ((VAR_12 && VAR_14)?(uint8_t)FUNC_2((int)*VAR_8):*VAR_8)
   != ((VAR_13 && VAR_15)?(uint8_t)FUNC_2((int)*VAR_9):*VAR_9)
   ) {
    if(((VAR_12 && VAR_14)?(uint8_t)FUNC_2((int)*VAR_8):*VAR_8)
    < ((VAR_13 && VAR_15)?(uint8_t)FUNC_2((int)*VAR_9):*VAR_9))
    return -1;
      return 1;
  }
  VAR_10--;
  VAR_11--;
  if(VAR_14 == 0) {
   if(VAR_12) {


    VAR_14 = (size_t)*VAR_8;
    if(VAR_14 == 0) {

     VAR_12 = 0;
     VAR_16--;


     if(VAR_16 == 0)
      VAR_14 = VAR_10;
    }
   } else {

    VAR_6++;
    if(VAR_3->_wireformat[VAR_6]
     == VAR_0) {
     VAR_12 = 1;
     VAR_14 = (size_t)*VAR_8;
     if(VAR_14 == 0) {
      VAR_12 = 0;
      VAR_16--;
      if(VAR_16 == 0)
       VAR_14 = VAR_10;
     }
    } else if(VAR_3->_wireformat[VAR_6]
     == VAR_1)
     VAR_14 = (size_t)*VAR_8;
    else VAR_14 = FUNC_0(
     VAR_3->_wireformat[VAR_6]) - 1;
   }
  } else VAR_14--;


  if(VAR_15 == 0) {
   if(VAR_13) {
    VAR_15 = (size_t)*VAR_9;
    if(VAR_15 == 0) {
     VAR_13 = 0;
     VAR_17--;
     if(VAR_17 == 0)
      VAR_15 = VAR_11;
    }
   } else {
    VAR_7++;
    if(VAR_3->_wireformat[VAR_7]
     == VAR_0) {
     VAR_13 = 1;
     VAR_15 = (size_t)*VAR_9;
     if(VAR_15 == 0) {
      VAR_13 = 0;
      VAR_17--;
      if(VAR_17 == 0)
       VAR_15 = VAR_11;
     }
    } else if(VAR_3->_wireformat[VAR_7]
     == VAR_1)
     VAR_15 = (size_t)*VAR_9;
    else VAR_15 = FUNC_0(
     VAR_3->_wireformat[VAR_7]) - 1;
   }
  } else VAR_15--;
  VAR_8++;
  VAR_9++;
 }



 if(VAR_10 == 0 && VAR_11 == 0)
  return 0;
 if(VAR_10 == 0)
  return -1;
 if(VAR_11 == 0)
  return 1;

 if((VAR_6 = FUNC_1(VAR_8, VAR_9, (VAR_10<VAR_11)?VAR_10:VAR_11)) != 0)
  return VAR_6;
 if(VAR_10 < VAR_11)
  return -1;
 if(VAR_11 < VAR_10)
  return 1;
 return 0;
}

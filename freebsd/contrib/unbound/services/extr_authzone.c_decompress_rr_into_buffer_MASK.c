
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct sldns_buffer {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ _dname_count; int* _wireformat; } ;
typedef TYPE_1__ sldns_rr_descriptor ;
typedef struct sldns_buffer sldns_buffer ;




 int FUNC_0 (struct sldns_buffer*,int *,int *) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (struct sldns_buffer*) ;
 int FUNC_3 (struct sldns_buffer*,size_t) ;
 int FUNC_4 (struct sldns_buffer*) ;
 int FUNC_5 (struct sldns_buffer*) ;
 int * FUNC_6 (struct sldns_buffer*) ;
 int FUNC_7 (struct sldns_buffer*) ;
 int FUNC_8 (struct sldns_buffer*,int *,size_t) ;
 size_t FUNC_9 (struct sldns_buffer*) ;
 int FUNC_10 (struct sldns_buffer*,size_t) ;
 int FUNC_11 (struct sldns_buffer*,int ) ;
 int FUNC_12 (struct sldns_buffer*,int *,size_t) ;
 int FUNC_13 (struct sldns_buffer*,size_t) ;
 int FUNC_14 (struct sldns_buffer*,size_t,size_t) ;
 int FUNC_15 (struct sldns_buffer*,int ) ;
 TYPE_1__* FUNC_16 (size_t) ;

__attribute__((used)) static int
FUNC_17(struct sldns_buffer* VAR_0, uint8_t* VAR_1,
 size_t VAR_2, uint8_t* VAR_3, uint16_t VAR_4, uint16_t VAR_5,
 uint32_t VAR_6, uint8_t* VAR_7, uint16_t VAR_8)
{
 sldns_buffer VAR_9;
 size_t VAR_10 = 0;
 size_t VAR_11;
 size_t VAR_12;
 uint8_t* VAR_13;
 const sldns_rr_descriptor* VAR_14;
 FUNC_8(&VAR_9, VAR_1, VAR_2);
 FUNC_5(VAR_0);


 FUNC_10(&VAR_9,
  (size_t)(VAR_3 - FUNC_6(&VAR_9)));
 VAR_10 = FUNC_2(&VAR_9);
 if(VAR_10 == 0) return 0;
 if(!FUNC_3(VAR_0, VAR_10)) return 0;
 FUNC_0(&VAR_9, FUNC_6(VAR_0), VAR_3);
 FUNC_11(VAR_0, (ssize_t)VAR_10);


 if(!FUNC_3(VAR_0, 10)) return 0;
 FUNC_13(VAR_0, VAR_4);
 FUNC_13(VAR_0, VAR_5);
 FUNC_15(VAR_0, VAR_6);
 VAR_11 = FUNC_9(VAR_0);
 FUNC_13(VAR_0, 0);


 VAR_14 = FUNC_16(VAR_4);
 VAR_13 = VAR_7;
 VAR_12 = VAR_8;
 if(VAR_12 > 0 && VAR_14 && VAR_14->_dname_count > 0) {
  int VAR_15 = (int)VAR_14->_dname_count;
  int VAR_16 = 0;
  size_t VAR_17;
  size_t VAR_18, VAR_19;
  size_t VAR_20;

  while(VAR_12 > 0 && VAR_15) {
   switch(VAR_14->_wireformat[VAR_16]) {
   case 129:
    FUNC_10(&VAR_9,
     (size_t)(VAR_13 -
     FUNC_4(&VAR_9)));
    VAR_20 = FUNC_9(&VAR_9);



    VAR_18 = FUNC_2(&VAR_9);
    if(!VAR_18)
     return 0;
    if(!FUNC_3(VAR_0,
     VAR_18))

     return 0;
    FUNC_0(&VAR_9,
     FUNC_6(VAR_0), VAR_13);
    FUNC_11(VAR_0, (ssize_t)VAR_18);
    VAR_19 = FUNC_9(
     &VAR_9) - VAR_20;
    VAR_13 += VAR_19;
    VAR_12 -= VAR_19;
    VAR_15--;
    VAR_17 = 0;
    break;
   case 128:
    VAR_17 = VAR_13[0] + 1;
    break;
   default:
    VAR_17 = FUNC_1(VAR_14->_wireformat[VAR_16]);
    break;
   }
   if(VAR_17) {
    if(!FUNC_3(VAR_0, VAR_17))
     return 0;
    FUNC_12(VAR_0, VAR_13, VAR_17);
    VAR_13 += VAR_17;
    VAR_12 -= VAR_17;
   }
   VAR_16++;
  }
 }

 if(VAR_12 > 0) {
  if(!FUNC_3(VAR_0, VAR_12)) return 0;
  FUNC_12(VAR_0, VAR_13, VAR_12);
 }

 FUNC_14(VAR_0, VAR_11,
  FUNC_9(VAR_0)-VAR_11-2);
 FUNC_7(VAR_0);
 return 1;
}

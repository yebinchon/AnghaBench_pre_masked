
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
struct TYPE_9__ {int _position; } ;
typedef TYPE_1__ ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,size_t,char*,scalar_t__) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 scalar_t__* FUNC_8 (int const*) ;
 size_t FUNC_9 (int const*) ;
 size_t FUNC_10 (scalar_t__*) ;

ldns_status
FUNC_11(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{
 uint8_t *VAR_3 = FUNC_8(VAR_2);
 size_t VAR_4 = FUNC_9(VAR_2);
 uint8_t VAR_5;
 uint16_t VAR_6;
 int VAR_7;

 if (VAR_4 < 6) {
  return VAR_0;
 }
 if ((VAR_5 = VAR_3[0]) == 0 ||
   (VAR_6 = FUNC_10(VAR_3 + 2)) == 0 ||
   VAR_4 < (size_t) VAR_5 + VAR_6 + 4) {

  return VAR_0;
 }

 FUNC_3(VAR_1, "%d ", (int) VAR_3[1]);

 for (VAR_3 += 4; VAR_5 > 0; VAR_5--, VAR_3++) {

  FUNC_3(VAR_1, "%02x", (int) *VAR_3);
 }
 FUNC_7(VAR_1, (uint8_t) ' ');

 if (FUNC_5(VAR_1,
    FUNC_1(VAR_6))) {

  VAR_7 = FUNC_0(VAR_3, VAR_6,
    (char *) FUNC_2(VAR_1),
    FUNC_4(VAR_1));

  if (VAR_7 > 0 &&
    VAR_7 < (int) FUNC_4(VAR_1)) {

   VAR_1->_position += VAR_7;
  }
 }
 return FUNC_6(VAR_1);
}

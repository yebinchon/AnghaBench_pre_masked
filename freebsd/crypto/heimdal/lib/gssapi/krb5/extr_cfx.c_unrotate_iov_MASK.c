
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t length; int * value; } ;
struct TYPE_5__ {TYPE_1__ buffer; int type; } ;
typedef TYPE_2__ gss_iov_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int *,size_t) ;
 size_t FUNC_4 (size_t,size_t) ;

__attribute__((used)) static OM_uint32
FUNC_5(OM_uint32 *VAR_6, size_t VAR_7, gss_iov_buffer_desc *VAR_8, int VAR_9)
{
    uint8_t *VAR_10, *VAR_11;
    size_t VAR_12 = 0, VAR_13;
    int VAR_14;

    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
 if (FUNC_0(VAR_8[VAR_14].type) == VAR_1 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_2 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_3)
     VAR_12 += VAR_8[VAR_14].buffer.length;

    VAR_10 = FUNC_2(VAR_12);
    if (VAR_10 == ((void*)0)) {
 *VAR_6 = VAR_0;
 return VAR_5;
    }
    VAR_11 = VAR_10;



    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
 if (FUNC_0(VAR_8[VAR_14].type) == VAR_1 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_2 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_3)
 {
     FUNC_3(VAR_11, VAR_8[VAR_14].buffer.value, VAR_8[VAR_14].buffer.length);
     VAR_11 += VAR_8[VAR_14].buffer.length;
 }
    }
    FUNC_1((size_t)(VAR_11 - VAR_10) == VAR_12);


    VAR_11 = VAR_10 + VAR_7;
    VAR_13 = VAR_7;
    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
 if (FUNC_0(VAR_8[VAR_14].type) == VAR_1 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_2 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_3)
 {
     if (VAR_8[VAR_14].buffer.length <= VAR_13) {
  VAR_13 -= VAR_8[VAR_14].buffer.length;
     } else {
  FUNC_3(((uint8_t *)VAR_8[VAR_14].buffer.value) + VAR_13, VAR_11, VAR_8[VAR_14].buffer.length - VAR_13);
  VAR_11 += VAR_8[VAR_14].buffer.length - VAR_13;
  VAR_13 = 0;
     }
 }
    }

    VAR_11 = VAR_10;
    VAR_13 = VAR_7;
    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
 if (FUNC_0(VAR_8[VAR_14].type) == VAR_1 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_2 ||
     FUNC_0(VAR_8[VAR_14].type) == VAR_3)
 {
     FUNC_3(VAR_11, VAR_8[VAR_14].buffer.value, FUNC_4(VAR_8[VAR_14].buffer.length, VAR_13));
     if (VAR_8[VAR_14].buffer.length > VAR_13)
  break;
     VAR_13 -= VAR_8[VAR_14].buffer.length;
     VAR_11 += VAR_8[VAR_14].buffer.length;
 }
    }
    return VAR_4;
}

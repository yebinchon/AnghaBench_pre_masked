
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef int qla_host_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static uint32_t *
FUNC_2(qla_host_t *VAR_6, uint32_t VAR_7, uint8_t *VAR_8, uint32_t *VAR_9)
{
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 ++) {

  if (VAR_8[VAR_10]) {

   for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {

    VAR_12 = VAR_7 | VAR_0 |
      VAR_11 | (VAR_10 << 9);
    FUNC_1(VAR_6, VAR_1, VAR_12);


    VAR_13 = FUNC_0(VAR_6, VAR_2);


    if (VAR_11 == 0) {
     *VAR_9 = VAR_12;
     VAR_9 ++;
    }

    VAR_12 |= VAR_5;

    FUNC_1(VAR_6, VAR_1, VAR_12);

    VAR_14 = FUNC_0(VAR_6, VAR_2);


    *VAR_9 = VAR_13;
    VAR_9++;
    *VAR_9 = VAR_14;
    VAR_9++;
   }
  }
 }

 return(VAR_9);
}

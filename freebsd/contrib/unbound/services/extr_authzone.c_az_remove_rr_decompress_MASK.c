
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sldns_buffer {int dummy; } ;
struct auth_zone {int dummy; } ;


 int FUNC_0 (struct auth_zone*,int *,size_t,size_t,int*) ;
 int FUNC_1 (struct sldns_buffer*,int *,size_t,int *,int ,int ,int ,int *,int ) ;
 size_t FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (struct sldns_buffer*) ;
 size_t FUNC_5 (struct sldns_buffer*) ;

__attribute__((used)) static int
FUNC_6(struct auth_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 struct sldns_buffer* VAR_3, uint8_t* VAR_4, uint16_t VAR_5,
 uint16_t VAR_6, uint32_t VAR_7, uint8_t* VAR_8,
 uint16_t VAR_9, int* VAR_10)
{
 uint8_t* VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 if(!FUNC_1(VAR_3, VAR_1, VAR_2, VAR_4,
  VAR_5, VAR_6, VAR_7, VAR_8, VAR_9)) {
  FUNC_3("could not decompress RR");
  return 0;
 }
 VAR_11 = FUNC_4(VAR_3);
 VAR_12 = FUNC_5(VAR_3);
 VAR_13 = FUNC_2(VAR_11, VAR_12);
 return FUNC_0(VAR_0, VAR_11, VAR_12, VAR_13, VAR_10);
}

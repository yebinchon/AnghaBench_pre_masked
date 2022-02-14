
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int token ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int*,int *) ;
 int FUNC_1 (int *,int *,size_t*,size_t*,int *,size_t,int *,size_t,char*,int) ;
 int FUNC_2 (int *,char*,int,int*,int *,int ) ;
 int FUNC_3 (int *,char*,int,int*,int *) ;
 int FUNC_4 (int *,char*,int,int *,size_t*,size_t,int ,int *,size_t) ;
 int FUNC_5 (int *,int *,size_t,size_t,int ,int ,int ,int) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char* VAR_2, uint8_t* VAR_3, size_t* VAR_4,
 size_t* VAR_5, uint32_t VAR_6, uint8_t* VAR_7,
 size_t VAR_8, uint8_t* VAR_9, size_t VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 char VAR_14[VAR_0+1];
 uint32_t VAR_15 = 0;
 uint16_t VAR_16 = 0, VAR_17 = 0;
 size_t VAR_18 = 0;


 sldns_buffer VAR_19;
 FUNC_6(&VAR_19, (uint8_t*)VAR_2, FUNC_7(VAR_2));
 if(!VAR_5) VAR_5 = &VAR_18;


 if((VAR_12=FUNC_1(&VAR_19, VAR_3, VAR_4, VAR_5, VAR_7,
  VAR_8, VAR_9, VAR_10, VAR_14, sizeof(VAR_14))) != 0)
  return VAR_12;


 if((VAR_12=FUNC_2(&VAR_19, VAR_14, sizeof(VAR_14),
  &VAR_13, &VAR_15, VAR_6)) != 0)
  return VAR_12;
 if((VAR_12=FUNC_0(&VAR_19, VAR_14, sizeof(VAR_14),
  &VAR_13, &VAR_17)) != 0)
  return VAR_12;
 if((VAR_12=FUNC_3(&VAR_19, VAR_14, sizeof(VAR_14),
  &VAR_13, &VAR_16)) != 0)
  return VAR_12;

 if((VAR_12=FUNC_5(&VAR_19, VAR_3, *VAR_4, *VAR_5, VAR_16, VAR_17,
  VAR_15, VAR_11)) != 0)
  return VAR_12;

 if(VAR_11) {
  *VAR_4 = *VAR_5 + 4;
  return VAR_1;
 }


 if((VAR_12=FUNC_4(&VAR_19, VAR_14, sizeof(VAR_14),
  VAR_3, VAR_4, *VAR_5, VAR_16, VAR_7, VAR_8)) != 0)
  return VAR_12;

 return VAR_1;
}

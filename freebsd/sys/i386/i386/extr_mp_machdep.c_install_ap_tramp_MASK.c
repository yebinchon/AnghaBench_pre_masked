
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ u_long ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_int ;
typedef int u_char ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_11;
 int VAR_12 = *(int *) ((u_long) & VAR_7);
 vm_offset_t VAR_13 = VAR_8;
 u_char *VAR_14 = (u_char *) ((u_long) VAR_6);
 u_char *VAR_15 = (u_char *) VAR_13;
 u_int VAR_16 = (u_int) VAR_6;
 u_int8_t *VAR_17;
 u_int16_t *VAR_18;
 u_int32_t *VAR_19;

 FUNC_0 (VAR_12 <= VAR_2,
     ("'size' do not fit into PAGE_SIZE, as expected."));
 FUNC_2(VAR_13, VAR_8);
 FUNC_1 (VAR_9, VAR_13);
 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11)
  *VAR_15++ = *VAR_14++;
 VAR_15 = (u_char *) VAR_13;


 VAR_19 = (u_int32_t *) (VAR_15 + ((u_int) & VAR_10 - VAR_16));
 *VAR_19 = VAR_8 + ((u_int) & VAR_0 - VAR_16);


 VAR_19 = (u_int32_t *) (VAR_15 + ((u_int) VAR_3 - VAR_16) + 1);
 *VAR_19 = (u_int)VAR_1;


 VAR_18 = (u_int16_t *) (VAR_15 + ((u_int) VAR_4 - VAR_16));
 VAR_17 = (u_int8_t *) (VAR_18 + 1);
 *VAR_18 = (u_int) VAR_8 & 0xffff;
 *VAR_17 = ((u_int) VAR_8 >> 16) & 0xff;


 VAR_18 = (u_int16_t *) (VAR_15 + ((u_int) VAR_5 - VAR_16));
 VAR_17 = (u_int8_t *) (VAR_18 + 1);
 *VAR_18 = (u_int) VAR_8 & 0xffff;
 *VAR_17 = ((u_int) VAR_8 >> 16) & 0xff;
}

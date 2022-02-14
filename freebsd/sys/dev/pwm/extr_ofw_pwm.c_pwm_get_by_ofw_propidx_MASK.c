
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_channel {void* flags; void* period; void* channel; int * dev; } ;
typedef struct pwm_channel* pwm_channel_t ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (void**) ;
 struct pwm_channel* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,char const*,char*,int,int *,int*,void***) ;

int
FUNC_4(device_t VAR_4, phandle_t VAR_5,
    const char *VAR_6, int VAR_7, pwm_channel_t *VAR_8)
{
 phandle_t VAR_9;
 pcell_t *VAR_10;
 struct pwm_channel VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_3(VAR_5, VAR_6, "#pwm-cells",
   VAR_7, &VAR_9, &VAR_12, &VAR_10);
 if (VAR_13 != 0)
  return (VAR_13);

 VAR_11.dev = FUNC_0(VAR_9);
 if (VAR_11.dev == ((void*)0)) {
  FUNC_1(VAR_10);
  return (VAR_0);
 }

 VAR_11.channel = VAR_10[0];
 VAR_11.period = VAR_10[1];

 if (VAR_12 >= 3)
  VAR_11.flags = VAR_10[2];

 *VAR_8 = FUNC_2(sizeof(struct pwm_channel), VAR_1, VAR_2 | VAR_3);
 **VAR_8 = VAR_11;
 return (0);
}

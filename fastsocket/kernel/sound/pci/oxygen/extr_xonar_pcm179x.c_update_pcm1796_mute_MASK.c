
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xonar_pcm179x {unsigned int dacs; } ;
struct oxygen {scalar_t__ dac_mute; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct oxygen*,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_4)
{
 struct xonar_pcm179x *VAR_5 = VAR_4->model_data;
 unsigned int VAR_6;
 u8 VAR_7;

 VAR_7 = VAR_1 | VAR_2 | VAR_0;
 if (VAR_4->dac_mute)
  VAR_7 |= VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_5->dacs; ++VAR_6)
  FUNC_0(VAR_4, VAR_6, 18, VAR_7);
}

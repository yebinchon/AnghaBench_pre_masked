
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int supported_devices; int model; int* levels; } ;
typedef TYPE_1__ sb_devc ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(sb_devc * VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 & 0x000000ff;
 int VAR_5 = (VAR_3 & 0x0000ff00) >> 8;
 int VAR_6;

 if (VAR_4 > 100)
  VAR_4 = 100;
 if (VAR_5 > 100)
  VAR_5 = 100;

 if ((VAR_2 < 0) || (VAR_2 > 31))
  return -VAR_0;

 if (!(VAR_1->supported_devices & (1 << VAR_2)))


  return -VAR_0;


 switch (VAR_1->model) {
 case 128:
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5);
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
  break;
 default:
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);
 }
 if (VAR_6 >= 0) VAR_1->levels[VAR_2] = VAR_6;

 return VAR_6;
}

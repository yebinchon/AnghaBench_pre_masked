
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_channel_data {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct hostapd_channel_data *VAR_5,
     int VAR_6)
{





 if (VAR_6 && (VAR_5->flag & VAR_4) &&
     ((VAR_5->flag & VAR_1) !=
      VAR_0))
  return 0;

 if (VAR_5->flag & VAR_3)
  return 0;
 if ((VAR_5->flag & VAR_4) &&
     ((VAR_5->flag & VAR_1) ==
      VAR_2))
  return 0;
 return 1;
}

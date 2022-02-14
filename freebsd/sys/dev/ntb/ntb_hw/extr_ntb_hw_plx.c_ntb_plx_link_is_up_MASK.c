
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_1(device_t VAR_3, enum ntb_speed *VAR_4, enum ntb_width *VAR_5)
{
 uint16_t VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2, 2);
 if (VAR_4 != ((void*)0))
  *VAR_4 = (VAR_6 & VAR_0);
 if (VAR_5 != ((void*)0))
  *VAR_5 = (VAR_6 & VAR_1) >> 4;
 return ((VAR_6 & VAR_1) != 0);
}

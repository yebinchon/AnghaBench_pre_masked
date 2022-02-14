
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_board_info {scalar_t__ board_vendor; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct bhnd_board_info*) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2,
    struct bhnd_board_info *VAR_3)
{
 int VAR_4;


 if ((VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3)))
  return (VAR_4);



 if (VAR_3->board_vendor == 0)
  VAR_3->board_vendor = VAR_0;

 return (0);
}

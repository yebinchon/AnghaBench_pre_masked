
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_board_info {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,struct bhnd_board_info*) ;
 int FUNC_1 (int ,int ,struct bhnd_board_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1,
    struct bhnd_board_info *VAR_2)
{
 int VAR_3;


 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2)))
  return (VAR_3);


 return (FUNC_0(FUNC_2(VAR_0), VAR_0, VAR_2));
}

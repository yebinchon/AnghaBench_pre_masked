
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static const char *
FUNC_8(mode_t VAR_0)
{

 if (FUNC_0(VAR_0))
  return ("block device");
 else if (FUNC_1(VAR_0))
  return ("character device");
 else if (FUNC_2(VAR_0))
  return ("directory");
 else if (FUNC_3(VAR_0))
  return ("pipe or FIFO");
 else if (FUNC_4(VAR_0))
  return ("symbolic link");
 else if (FUNC_5(VAR_0))
  return ("regular file");
 else if (FUNC_6(VAR_0))
  return ("socket");
 else if (FUNC_7(VAR_0))
  return ("whiteout");
 else
  return ("unknown");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdesc {scalar_t__ id; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,struct fdesc*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,struct fdesc*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

int
FUNC_4(void *VAR_6)
{
 struct fdesc *VAR_7 = VAR_6;
 int VAR_8;
 if (FUNC_1(VAR_7->id))
  return (0);
 if (FUNC_0(VAR_4, VAR_7->fd, VAR_0, VAR_5, VAR_7, &VAR_7->id)) {
  VAR_8 = VAR_3;
  FUNC_3(VAR_1, "select fd %d: %m", VAR_7->fd);
  VAR_3 = VAR_8;
  return (-1);
 }

 return (0);
}

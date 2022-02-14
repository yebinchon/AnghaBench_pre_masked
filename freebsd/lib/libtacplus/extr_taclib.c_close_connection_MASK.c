
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int fd; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct tac_handle *VAR_0)
{
 if (VAR_0->fd != -1) {
  FUNC_0(VAR_0->fd);
  VAR_0->fd = -1;
 }
}

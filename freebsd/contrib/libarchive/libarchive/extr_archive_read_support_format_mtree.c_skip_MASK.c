
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree {int fd; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_1)
{
 struct mtree *VAR_2;

 VAR_2 = (struct mtree *)(VAR_1->format->data);
 if (VAR_2->fd >= 0) {
  FUNC_0(VAR_2->fd);
  VAR_2->fd = -1;
 }
 return (VAR_0);
}

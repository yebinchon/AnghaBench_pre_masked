
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_blksize; } ;
struct TYPE_4__ {size_t cnt; int buf; } ;
typedef TYPE_1__ BUF ;


 size_t FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t,size_t,int) ;

BUF *
FUNC_5(BUF *VAR_1, int VAR_2, int VAR_3)
{
 size_t VAR_4;
 VAR_4 = VAR_3;

 if (VAR_1->cnt >= VAR_4)
  return (VAR_1);
 VAR_1->buf = FUNC_4(VAR_1->buf, VAR_1->cnt, VAR_4, 1);
 VAR_1->cnt = VAR_4;
 return (VAR_1);
}

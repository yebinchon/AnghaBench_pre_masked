
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ifi2creq {int dev_addr; int offset; int len; int data; } ;
struct i2c_info {scalar_t__ error; TYPE_1__* ifr; int fd; } ;
typedef int req ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ ifr_data; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct ifi2creq*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct i2c_info *VAR_2, uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5,
    uint8_t *VAR_6)
{
 struct ifi2creq VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2->error != 0)
  return (VAR_2->error);

 VAR_2->ifr->ifr_data = (caddr_t)&VAR_7;

 VAR_8 = 0;
 VAR_9 = 0;
 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.dev_addr = VAR_3;
 VAR_7.offset = VAR_4;
 VAR_7.len = VAR_5;

 while (VAR_5 > 0) {
  VAR_9 = FUNC_0(sizeof(VAR_7.data), VAR_5);
  VAR_7.len = VAR_9;
  if (FUNC_1(VAR_2->fd, VAR_0, VAR_2->ifr) != 0) {
   VAR_2->error = VAR_1;
   return (VAR_1);
  }

  FUNC_2(&VAR_6[VAR_8], VAR_7.data, VAR_9);
  VAR_5 -= VAR_9;
  VAR_8 += VAR_9;
  VAR_7.offset += VAR_9;
 }

 return (0);
}

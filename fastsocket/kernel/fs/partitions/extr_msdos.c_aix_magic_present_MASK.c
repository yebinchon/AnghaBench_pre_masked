
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {scalar_t__ sys_ind; } ;
struct block_device {int dummy; } ;
typedef int Sector ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct partition*) ;
 int FUNC_1 (int ) ;
 unsigned char* FUNC_2 (struct block_device*,int,int *) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_8, struct block_device *VAR_9)
{
 struct partition *VAR_10 = (struct partition *) (VAR_8 + 0x1be);
 Sector VAR_11;
 unsigned char *VAR_12;
 int VAR_13, VAR_14 = 0;

 if (!(VAR_8[0] == VAR_0 &&
  VAR_8[1] == VAR_1 &&
  VAR_8[2] == VAR_2 &&
  VAR_8[3] == VAR_3))
  return 0;

 for (VAR_13 = 1; VAR_13 <= 4; VAR_13++, VAR_10++) {
  if (VAR_10->sys_ind == VAR_7 ||
   VAR_10->sys_ind == VAR_6 ||
   VAR_10->sys_ind == VAR_4 ||
   VAR_10->sys_ind == VAR_5 ||
   FUNC_0(VAR_10))
   return 0;
 }
 VAR_12 = FUNC_2(VAR_9, 7, &VAR_11);
 if (VAR_12) {
  if (VAR_12[0] == '_' && VAR_12[1] == 'L' && VAR_12[2] == 'V' && VAR_12[3] == 'M')
   VAR_14 = 1;
  FUNC_1(VAR_11);
 };
 return VAR_14;
}

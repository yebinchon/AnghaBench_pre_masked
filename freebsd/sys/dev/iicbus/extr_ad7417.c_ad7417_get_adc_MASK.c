
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct write_data {int val; int reg; } ;
struct read_data {scalar_t__ val; int reg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int*) ;
 int FUNC_1 (int ,int,struct write_data,struct read_data*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, uint32_t VAR_4, unsigned int *VAR_5,
        uint8_t VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;
 struct write_data VAR_9;
 struct read_data VAR_10;

 VAR_7 = VAR_6 << 5;
 VAR_9.reg = VAR_1;
 VAR_10.reg = VAR_0;
 VAR_10.val = 0;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_1, &VAR_9.val);

 VAR_9.val = (VAR_9.val & ~VAR_2) | (VAR_7 & VAR_2);

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_9, &VAR_10);
 if (VAR_8 < 0)
  return (-1);

 *VAR_5 = ((uint32_t)VAR_10.val) >> 6;

 return (0);
}

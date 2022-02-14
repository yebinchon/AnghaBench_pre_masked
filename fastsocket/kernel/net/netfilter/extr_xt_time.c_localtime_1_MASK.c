
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct xtm {unsigned int second; unsigned int minute; unsigned int hour; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct xtm *VAR_0, time_t VAR_1)
{
 unsigned int VAR_2, VAR_3;


 VAR_2 = VAR_1 % 86400;
 VAR_0->second = VAR_2 % 60;
 VAR_3 = VAR_2 / 60;
 VAR_0->minute = VAR_3 % 60;
 VAR_0->hour = VAR_3 / 60;
 return VAR_2;
}

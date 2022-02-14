
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct archive_read {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_read*,scalar_t__*) ;
 int FUNC_1 (struct archive_read*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct archive_read* VAR_2, char VAR_3,
    uint64_t* VAR_4, ssize_t* VAR_5)
{
 if(VAR_3) {
  uint32_t VAR_6;
  if(!FUNC_0(VAR_2, &VAR_6))
   return VAR_0;

  *VAR_5 -= 4;
  *VAR_4 = (uint64_t) VAR_6;
 } else {
  uint64_t VAR_7;
  if(!FUNC_1(VAR_2, &VAR_7))
   return VAR_0;

  *VAR_4 = FUNC_2(VAR_7);
  *VAR_5 -= 8;
 }

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct archive_read {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (struct archive_read*,int) ;
 int FUNC_2 (struct archive_read*,int,int const**) ;

__attribute__((used)) static int FUNC_3(struct archive_read* VAR_1, uint64_t* VAR_2) {
 const uint8_t* VAR_3;
 if(!FUNC_2(VAR_1, 8, &VAR_3))
  return 0;

 *VAR_2 = FUNC_0(VAR_3);
 return VAR_0 == FUNC_1(VAR_1, 8) ? 1 : 0;
}

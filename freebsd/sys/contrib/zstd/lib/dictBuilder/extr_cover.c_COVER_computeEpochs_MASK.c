
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int num; int size; } ;
typedef TYPE_1__ COVER_epoch_info_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int) ;

COVER_epoch_info_t FUNC_3(U32 VAR_0,
                                       U32 VAR_1, U32 VAR_2, U32 VAR_3)
{
  const U32 VAR_4 = VAR_2 * 10;
  COVER_epoch_info_t VAR_5;
  VAR_5.num = FUNC_0(1, VAR_0 / VAR_2 / VAR_3);
  VAR_5.size = VAR_1 / VAR_5.num;
  if (VAR_5.size >= VAR_4) {
      FUNC_2(VAR_5.size * VAR_5.num <= VAR_1);
      return VAR_5;
  }
  VAR_5.size = FUNC_1(VAR_4, VAR_1);
  VAR_5.num = VAR_1 / VAR_5.size;
  FUNC_2(VAR_5.size * VAR_5.num <= VAR_1);
  return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {int db_offset; int db_size; scalar_t__ db_data; } ;
typedef TYPE_1__ dmu_buf_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (void const*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_6(dmu_buf_t **VAR_0, int VAR_1, uint64_t VAR_2, uint64_t VAR_3,
    const void *VAR_4, dmu_tx_t *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  int VAR_7;
  int VAR_8;
  dmu_buf_t *VAR_9 = VAR_0[VAR_6];

  FUNC_0(VAR_3 > 0);

  VAR_8 = VAR_2 - VAR_9->db_offset;
  VAR_7 = (int)FUNC_1(VAR_9->db_size - VAR_8, VAR_3);

  FUNC_0(VAR_6 == 0 || VAR_6 == VAR_1-1 || VAR_7 == VAR_9->db_size);

  if (VAR_7 == VAR_9->db_size)
   FUNC_5(VAR_9, VAR_5);
  else
   FUNC_4(VAR_9, VAR_5);

  FUNC_2(VAR_4, (char *)VAR_9->db_data + VAR_8, VAR_7);

  if (VAR_7 == VAR_9->db_size)
   FUNC_3(VAR_9, VAR_5);

  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
  VAR_4 = (char *)VAR_4 + VAR_7;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static ZSTD_outBuffer FUNC_2(FUZZ_dataProducer_t *VAR_2)
{
  ZSTD_outBuffer VAR_3 = { VAR_0, 0, 0 };

  VAR_3.size = (FUNC_1(VAR_2, 1, VAR_1));
  FUNC_0(VAR_3.size <= VAR_1);

  return VAR_3;
}

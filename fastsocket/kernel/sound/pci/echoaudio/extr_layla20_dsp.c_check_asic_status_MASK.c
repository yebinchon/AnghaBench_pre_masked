
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct echoaudio {int asic_loaded; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct echoaudio*,scalar_t__*) ;
 int FUNC_2 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_5)
{
 u32 VAR_6;
 int VAR_7, VAR_8;

 VAR_5->asic_loaded = VAR_3;
 for (VAR_8 = VAR_7 = 0; VAR_8 < 5; VAR_8++) {
  FUNC_2(VAR_5, VAR_1);



  if (FUNC_1(VAR_5, &VAR_6) < 0) {
   FUNC_0(("check_asic_status: failed on read_dsp\n"));
   return -VAR_2;
  }

  if (VAR_6 == VAR_0) {
   if (++VAR_7 == 3) {
    VAR_5->asic_loaded = VAR_4;
    return 0;
   }
  }
 }
 return -VAR_2;
}

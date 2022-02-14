
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
 scalar_t__ FUNC_1 (struct echoaudio*,scalar_t__*) ;
 int FUNC_2 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_4)
{
 u32 VAR_5;

 FUNC_2(VAR_4, VAR_1);



 if (FUNC_1(VAR_4, &VAR_5) < 0) {
  FUNC_0(("check_asic_status: failed on read_dsp\n"));
  VAR_4->asic_loaded = VAR_3;
  return -VAR_2;
 }

 VAR_4->asic_loaded = (VAR_5 == VAR_0);
 return VAR_4->asic_loaded ? 0 : -VAR_2;
}

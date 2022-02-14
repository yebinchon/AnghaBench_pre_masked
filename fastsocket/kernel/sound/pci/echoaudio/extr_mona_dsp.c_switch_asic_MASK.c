
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct echoaudio {scalar_t__ device_id; struct firmware const* asic_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct firmware* VAR_6 ;
 int FUNC_0 (struct echoaudio*,int ,struct firmware const*) ;

__attribute__((used)) static int FUNC_1(struct echoaudio *VAR_7, char VAR_8)
{
 const struct firmware *VAR_9;
 int VAR_10;




 if (VAR_7->device_id == VAR_0) {
  if (VAR_8)
   VAR_9 = &VAR_6[VAR_5];
  else
   VAR_9 = &VAR_6[VAR_4];
 } else {
  if (VAR_8)
   VAR_9 = &VAR_6[VAR_3];
  else
   VAR_9 = &VAR_6[VAR_2];
 }

 if (VAR_9 != VAR_7->asic_code) {

  VAR_10 = FUNC_0(VAR_7, VAR_1,
     VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_7->asic_code = VAR_9;
 }

 return 0;
}

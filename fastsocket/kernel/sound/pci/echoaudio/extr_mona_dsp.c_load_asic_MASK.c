
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct firmware {int dummy; } ;
struct echoaudio {scalar_t__ device_id; struct firmware const* asic_code; scalar_t__ asic_loaded; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct firmware const* VAR_9 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,int ,struct firmware const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct echoaudio*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_10)
{
 u32 VAR_11;
 int VAR_12;
 const struct firmware *VAR_13;

 if (VAR_10->asic_loaded)
  return 0;

 FUNC_2(10);

 if (VAR_10->device_id == VAR_0)
  VAR_13 = &VAR_9[VAR_5];
 else
  VAR_13 = &VAR_9[VAR_4];

 VAR_12 = FUNC_1(VAR_10, VAR_2, VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10->asic_code = VAR_13;
 FUNC_2(10);


 VAR_12 = FUNC_1(VAR_10, VAR_1,
    &VAR_9[VAR_3]);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_2(10);
 VAR_12 = FUNC_0(VAR_10);



 if (!VAR_12) {
  VAR_11 = VAR_7 | VAR_6;
  VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_8);
 }

 return VAR_12;
}

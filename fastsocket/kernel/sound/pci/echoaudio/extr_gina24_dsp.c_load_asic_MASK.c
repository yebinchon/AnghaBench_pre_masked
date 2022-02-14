
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct firmware {int dummy; } ;
struct echoaudio {scalar_t__ device_id; struct firmware const* asic_code; scalar_t__ asic_loaded; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct firmware* VAR_7 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*,int ,struct firmware const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct echoaudio*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_8)
{
 u32 VAR_9;
 int VAR_10;
 const struct firmware *VAR_11;

 if (VAR_8->asic_loaded)
  return 1;


 FUNC_3(10);


 if (VAR_8->device_id == VAR_0)
  VAR_11 = &VAR_7[VAR_3];
 else
  VAR_11 = &VAR_7[VAR_2];

 if ((VAR_10 = FUNC_2(VAR_8, VAR_1, VAR_11)) < 0)
  return VAR_10;

 VAR_8->asic_code = VAR_11;


 FUNC_3(10);

 VAR_10 = FUNC_1(VAR_8);



 if (!VAR_10) {
  VAR_9 = VAR_5 | VAR_4;
  VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_6);
 }
 FUNC_0(("load_asic() done\n"));
 return VAR_10;
}

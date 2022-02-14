
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int * asic_code; scalar_t__ asic_loaded; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct echoaudio*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_9)
{
 int VAR_10;

 if (VAR_9->asic_loaded)
  return 1;

 FUNC_0(("load_asic\n"));


 FUNC_3(10);


 VAR_10 = FUNC_2(VAR_9, VAR_1,
    &VAR_8[VAR_3]);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->asic_code = &VAR_8[VAR_4];


 FUNC_3(10);


 VAR_10 = FUNC_2(VAR_9, VAR_0,
    &VAR_8[VAR_4]);
 if (VAR_10 < 0)
  return VAR_2;


 FUNC_3(10);


 VAR_10 = FUNC_1(VAR_9);



 if (!VAR_10)
  VAR_10 = FUNC_4(VAR_9, VAR_6 | VAR_5,
     VAR_7);

 FUNC_0(("load_asic() done\n"));
 return VAR_10;
}

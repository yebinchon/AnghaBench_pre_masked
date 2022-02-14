
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_5, int VAR_6)
{

    static u_char VAR_7[] = { 0x00, 0x05, 0x0a, 0x0f, 0x30, 0x35, 0x3a, 0x3f };
    int VAR_8;

    FUNC_1(VAR_5, VAR_4, VAR_1);
    if (VAR_6 < 0 || VAR_6 >= 8)
 return VAR_0;

    VAR_8 = FUNC_2();
    FUNC_0(VAR_2, 0x03); FUNC_0(VAR_3, VAR_7[VAR_6]);
    FUNC_3(VAR_8);

    return 0;



}

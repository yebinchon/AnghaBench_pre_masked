
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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int,int,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_5(video_adapter_t *VAR_4, int VAR_5, int VAR_6,
     u_char *VAR_7, u_char *VAR_8, u_char *VAR_9, u_char *VAR_10)
{
    u_char *VAR_11;
    u_char *VAR_12;
    u_char *VAR_13;

    if (VAR_6 < 0 || VAR_5 < 0 || VAR_6 > 256 || VAR_5 > 256 ||
 VAR_5 + VAR_6 > 256)
 return VAR_0;

    VAR_11 = FUNC_3(VAR_6*3, VAR_2, VAR_3);
    VAR_12 = VAR_11 + VAR_6;
    VAR_13 = VAR_12 + VAR_6;
    if (FUNC_4(VAR_4, VAR_5, VAR_6, VAR_11, VAR_12, VAR_13)) {
 FUNC_2(VAR_11, VAR_2);
 return VAR_1;
    }
    FUNC_1(VAR_11, VAR_7, VAR_6);
    FUNC_1(VAR_12, VAR_8, VAR_6);
    FUNC_1(VAR_13, VAR_9, VAR_6);
    if (VAR_10 != ((void*)0)) {
 FUNC_0(VAR_11, VAR_6);
 FUNC_1(VAR_11, VAR_10, VAR_6);
    }
    FUNC_2(VAR_11, VAR_2);

    return 0;
}

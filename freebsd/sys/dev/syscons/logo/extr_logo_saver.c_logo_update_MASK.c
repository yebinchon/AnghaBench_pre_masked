
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(video_adapter_t *VAR_4)
{
 static int VAR_5 = 0, VAR_6 = 0;
 static int VAR_7 = 1, VAR_8 = 1;


 if ((VAR_5 + VAR_1 + VAR_7 > VAR_3) || (VAR_5 + VAR_7 < 0))
  VAR_7 = -VAR_7;
 if ((VAR_6 + VAR_0 + VAR_8 > VAR_2) || (VAR_6 + VAR_8 < 0))
  VAR_8 = -VAR_8;
 VAR_5 += VAR_7;
 VAR_6 += VAR_8;


 FUNC_0(VAR_4, VAR_5, VAR_6);
}

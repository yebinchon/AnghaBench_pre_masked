
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_4, int *VAR_5,
      int VAR_6, uid_t VAR_7, u32 VAR_8,
      u32 VAR_9)
{
 int VAR_10, VAR_11 = 0, VAR_12 = *VAR_5;


 if (VAR_3 == VAR_0)
  VAR_10 = 0;
 else
  VAR_10 = 1;

 if (VAR_3 != VAR_1) {
  VAR_11 = FUNC_0(VAR_4, VAR_6, VAR_12, VAR_7,
          VAR_8, VAR_9, VAR_10);
  if (VAR_11)
   VAR_10 = 0;
 }


 if (VAR_10 == 1)
  *VAR_5 = VAR_6;

 else if (VAR_11 == 0)
  VAR_11 = -VAR_2;
 return VAR_11;
}

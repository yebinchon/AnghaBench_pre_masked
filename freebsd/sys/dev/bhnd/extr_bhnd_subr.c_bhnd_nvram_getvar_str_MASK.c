
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char*,size_t*,int ) ;

int
FUNC_1(device_t VAR_1, const char *VAR_2, char *VAR_3, size_t VAR_4,
    size_t *VAR_5)
{
 size_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_4;
 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6,
     VAR_0);
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_6;

 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (char const*,int,int) ;
 scalar_t__ FUNC_3 (char const*,char const*,int ,int ,size_t) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_0 | VAR_1 | VAR_2, 0600);
 if (VAR_7 < 0)
  return -1;

 if (FUNC_1(VAR_7, VAR_6) < 0)
  goto fail;

 if (FUNC_3(VAR_4,
     VAR_5, VAR_3, 0, VAR_6) < 0) {
  goto fail;
 }

 FUNC_4(VAR_5);
 return VAR_7;
fail:
 FUNC_0(VAR_7);
 FUNC_4(VAR_5);
 return -1;
}

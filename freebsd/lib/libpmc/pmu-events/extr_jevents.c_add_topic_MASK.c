
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,char const*) ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(const char *VAR_4)
{
 FUNC_0(VAR_3);
 VAR_3 = FUNC_2(VAR_4);
 if (!VAR_3) {
  FUNC_1("%s: strdup() error %s for file %s\n", VAR_2,
    FUNC_3(VAR_1), VAR_4);
  return -VAR_0;
 }
 return 0;
}

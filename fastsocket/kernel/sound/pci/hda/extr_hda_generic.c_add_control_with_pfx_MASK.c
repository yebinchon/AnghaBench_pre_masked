
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (struct hda_gen_spec*,int,char*,int,unsigned long) ;
 int FUNC_1 (char*,int,char*,char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct hda_gen_spec *VAR_1, int VAR_2,
    const char *VAR_3, const char *VAR_4,
    const char *VAR_5, int VAR_6, unsigned long VAR_7)
{
 char VAR_8[44];
 FUNC_1(VAR_8, sizeof(VAR_8), "%s %s %s", VAR_3, VAR_4, VAR_5);
 if (!FUNC_0(VAR_1, VAR_2, VAR_8, VAR_6, VAR_7))
  return -VAR_0;
 return 0;
}

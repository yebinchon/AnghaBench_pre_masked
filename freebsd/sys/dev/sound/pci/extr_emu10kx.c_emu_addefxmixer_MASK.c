
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {int root; int ctx; int rm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,struct emu_sc_info*,int const,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct emu_sc_info*,int,int ) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct emu_sc_info *VAR_4, const char *VAR_5, const int VAR_6, uint32_t VAR_7)
{
 int VAR_8;
 char VAR_9[32];

 VAR_8 = FUNC_2(VAR_4->rm, 1);
 FUNC_3(VAR_4, VAR_8, VAR_7);




 if (VAR_5 != ((void*)0)) {





  FUNC_4(VAR_9, 32, "_%s", VAR_5);
  FUNC_0(VAR_4->ctx,
   FUNC_1(VAR_4->root),
   VAR_2, VAR_9,
   VAR_1 | VAR_0, VAR_4, VAR_6,
   VAR_3, "I", "");
 }

 return (VAR_8);
}

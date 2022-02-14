
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {char* isrc_name; scalar_t__ isrc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int,char*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct intr_irqsrc *VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_1(&VAR_2, VAR_1);

 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_5, VAR_0, "%s: %s", VAR_3->isrc_name, VAR_4);
  FUNC_0(VAR_5, VAR_3->isrc_index);
  FUNC_2(VAR_5, VAR_0, "stray %s: %s", VAR_3->isrc_name,
      VAR_4);
  FUNC_0(VAR_5, VAR_3->isrc_index + 1);
 } else {
  FUNC_2(VAR_5, VAR_0, "%s:", VAR_3->isrc_name);
  FUNC_0(VAR_5, VAR_3->isrc_index);
  FUNC_2(VAR_5, VAR_0, "stray %s:", VAR_3->isrc_name);
  FUNC_0(VAR_5, VAR_3->isrc_index + 1);
 }
}

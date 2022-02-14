
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {char mode; } ;


 int FUNC_0 (struct bsdar*,int ,char*,char,char) ;

__attribute__((used)) static void
FUNC_1(struct bsdar *VAR_0, char VAR_1)
{

 if (VAR_0->mode != '\0' && VAR_0->mode != VAR_1)
  FUNC_0(VAR_0, 0, "Can't specify both -%c and -%c",
      VAR_1, VAR_0->mode);
 VAR_0->mode = VAR_1;
}
